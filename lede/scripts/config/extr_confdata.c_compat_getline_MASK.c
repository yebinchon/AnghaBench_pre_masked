
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;



 int FUNC_0 (int,char**,size_t,size_t*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2(char **VAR_0, size_t *VAR_1, FILE *VAR_2)
{
 char *VAR_3 = *VAR_0;
 size_t VAR_4 = 0;

 for (;;) {
  int VAR_5 = FUNC_1(VAR_2);

  switch (VAR_5) {
  case '\n':
   if (FUNC_0(VAR_5, &VAR_3, VAR_4, VAR_1) < 0)
    goto e_out;
   VAR_4++;

  case 128:
   if (FUNC_0('\0', &VAR_3, VAR_4, VAR_1) < 0)
    goto e_out;
   *VAR_0 = VAR_3;
   if (VAR_4 == 0)
    return -1;
   return VAR_4;
  default:
   if (FUNC_0(VAR_5, &VAR_3, VAR_4, VAR_1) < 0)
    goto e_out;
   VAR_4++;
  }
 }

e_out:
 VAR_3[VAR_4-1] = '\0';
 *VAR_0 = VAR_3;
 return -1;
}
