
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;
 unsigned char FUNC_7 (unsigned char) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, char **VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 const char *VAR_9 = FUNC_6(VAR_2, '.');






 if (VAR_9 == ((void*)0) || VAR_9 == VAR_2) {
  if (!VAR_5)
   FUNC_2(FUNC_1("key does not contain a section: %s"), VAR_2);
  return -VAR_1;
 }

 if (!VAR_9[1]) {
  if (!VAR_5)
   FUNC_2(FUNC_1("key does not contain variable name: %s"), VAR_2);
  return -VAR_1;
 }

 VAR_8 = VAR_9 - VAR_2;
 if (VAR_4)
  *VAR_4 = VAR_8;




 if (VAR_3)
  *VAR_3 = FUNC_8(FUNC_5(VAR_2));

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_2[VAR_6]; VAR_6++) {
  unsigned char VAR_10 = VAR_2[VAR_6];
  if (VAR_10 == '.')
   VAR_7 = 1;

  if (!VAR_7 || VAR_6 > VAR_8) {
   if (!FUNC_4(VAR_10) ||
       (VAR_6 == VAR_8 + 1 && !FUNC_3(VAR_10))) {
    if (!VAR_5)
     FUNC_2(FUNC_1("invalid key: %s"), VAR_2);
    goto out_free_ret_1;
   }
   VAR_10 = FUNC_7(VAR_10);
  } else if (VAR_10 == '\n') {
   if (!VAR_5)
    FUNC_2(FUNC_1("invalid key (newline): %s"), VAR_2);
   goto out_free_ret_1;
  }
  if (VAR_3)
   (*VAR_3)[VAR_6] = VAR_10;
 }

 return 0;

out_free_ret_1:
 if (VAR_3) {
  FUNC_0(*VAR_3);
 }
 return -VAR_0;
}
