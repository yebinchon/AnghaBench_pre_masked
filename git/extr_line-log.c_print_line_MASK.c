
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 char* FUNC_2 (long,unsigned long*,void*) ;
 int FUNC_3 (char,int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, char VAR_1,
         long VAR_2, unsigned long *VAR_3, void *VAR_4,
         const char *VAR_5, const char *VAR_6, FILE *VAR_7)
{
 char *VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4);
 char *VAR_9 = FUNC_2(VAR_2+1, VAR_3, VAR_4);
 int VAR_10 = 0;

 if (VAR_9 > VAR_8 && VAR_9[-1] == '\n') {
  VAR_9--;
  VAR_10 = 1;
 }

 FUNC_0(VAR_0, VAR_7);
 FUNC_0(VAR_5, VAR_7);
 FUNC_3(VAR_1, VAR_7);
 FUNC_1(VAR_8, 1, VAR_9-VAR_8, VAR_7);
 FUNC_0(VAR_6, VAR_7);
 FUNC_3('\n', VAR_7);
 if (!VAR_10)
  FUNC_0("\\ No newline at end of file\n", VAR_7);
}
