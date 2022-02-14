
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int use_color; int * file; } ;
typedef int FILE ;


 char const* VAR_0 ;
 char const* FUNC_0 (struct diff_options*) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int,int,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_1,
   const char *VAR_2, const char *VAR_3, unsigned VAR_4, const char *VAR_5,
   int VAR_6, const char *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 FILE *VAR_12 = VAR_1->file;

 FUNC_2(FUNC_0(VAR_1), VAR_12);

 VAR_9 = (VAR_8 > 0 && VAR_7[VAR_8-1] == '\n');
 if (VAR_9)
  VAR_8--;

 VAR_10 = (VAR_8 > 0 && VAR_7[VAR_8-1] == '\r');
 if (VAR_10)
  VAR_8--;

 if (!VAR_8 && !VAR_6)
  goto end_of_line;

 if (VAR_4 && FUNC_4(VAR_1->use_color)) {
  FUNC_2(VAR_0, VAR_12);
  VAR_11 = 1;
 }

 if (VAR_2) {
  FUNC_2(VAR_2, VAR_12);
  VAR_11 = 1;
 }

 if (VAR_6)
  FUNC_1(VAR_6, VAR_12);

 if (!VAR_8)
  goto end_of_line;

 if (VAR_3) {
  if (VAR_2 && VAR_3 != VAR_2)
   FUNC_2(VAR_5, VAR_12);
  FUNC_2(VAR_3, VAR_12);
  VAR_11 = 1;
 }
 FUNC_3(VAR_7, VAR_8, 1, VAR_12);
 VAR_11 = 1;

end_of_line:
 if (VAR_11)
  FUNC_2(VAR_5, VAR_12);
 if (VAR_10)
  FUNC_1('\r', VAR_12);
 if (VAR_9)
  FUNC_1('\n', VAR_12);
}
