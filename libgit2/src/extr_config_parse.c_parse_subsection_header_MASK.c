
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_parser ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,int,char*) ;
 size_t FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char) ;

__attribute__((used)) static int FUNC_11(git_config_parser *VAR_2, const char *VAR_3, size_t VAR_4, const char *VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8;
 const char *VAR_9, *VAR_10;
 const char *VAR_11 = VAR_3;
 git_buf VAR_12 = VAR_0;
 size_t VAR_13, VAR_14, VAR_15 = FUNC_9(VAR_5);


 while (FUNC_1(VAR_3[VAR_4]))
  VAR_4++;


 if (VAR_3[VAR_4] != '"') {
  FUNC_8(VAR_2, 0, "missing quotation marks in section header");
  goto end_error;
 }

 VAR_9 = &VAR_3[VAR_4];
 VAR_10 = FUNC_10(VAR_3, '"');
 VAR_13 = VAR_10 - VAR_9;

 if ((VAR_10 - VAR_3) > VAR_1) {
  FUNC_8(VAR_2, 0, "invalid section header, line too long");
  goto end_error;
 }

 if (VAR_13 == 0) {
  FUNC_8(VAR_2, 0, "missing closing quotation mark in section header");
  goto end_error;
 }

 FUNC_0(&VAR_14, VAR_15, VAR_13);
 FUNC_0(&VAR_14, VAR_14, 2);

 if (FUNC_4(&VAR_12, VAR_14) < 0 ||
     FUNC_6(&VAR_12, "%s.", VAR_5) < 0)
  goto end_error;

 VAR_8 = 0;

 VAR_3 = VAR_9;
 VAR_7 = VAR_3[++VAR_8];





 do {

  switch (VAR_7) {
  case 0:
   FUNC_8(VAR_2, 0, "unexpected end-of-line in section header");
   goto end_error;

  case '"':
   goto end_parse;

  case '\\':
   VAR_7 = VAR_3[++VAR_8];

   if (VAR_7 == 0) {
    FUNC_8(VAR_2, VAR_8, "unexpected end-of-line in section header");
    goto end_error;
   }

  default:
   break;
  }

  FUNC_7(&VAR_12, (char)VAR_7);
  VAR_7 = VAR_3[++VAR_8];
 } while (VAR_3 + VAR_8 < VAR_10);

end_parse:
 if (FUNC_5(&VAR_12))
  goto end_error;

 if (VAR_3[VAR_8] != '"' || VAR_3[VAR_8 + 1] != ']') {
  FUNC_8(VAR_2, VAR_8, "unexpected text after closing quotes");
  FUNC_3(&VAR_12);
  return -1;
 }

 *VAR_6 = FUNC_2(&VAR_12);
 return (int)(&VAR_3[VAR_8 + 2] - VAR_11);

end_error:
 FUNC_3(&VAR_12);

 return -1;
}
