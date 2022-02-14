
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0, int *VAR_1, char ***VAR_2)
{
 char *VAR_3, **VAR_4, **VAR_5;
 int VAR_6 = 0, VAR_7;


 for (VAR_3 = VAR_0;;) {
  while (*VAR_3 == ' ' || *VAR_3 == '\t')
   VAR_3++;
  if (*VAR_3 == 0)
   goto count_done;
  VAR_6++;
  while (*VAR_3 != ' ' && *VAR_3 != '\t')
   if (*VAR_3++ == 0)
    goto count_done;
 }
count_done:

 if (VAR_6 == 0)
  return;

 *VAR_1 += VAR_6;
 VAR_5 = *VAR_2;

 VAR_4 = (char **)FUNC_0((*VAR_1 + 1) * sizeof(char *));
 if (VAR_4 == ((void*)0))
  FUNC_1("malloc");


 *VAR_2 = VAR_4;


 VAR_7 = 0;
 VAR_4[VAR_7++] = *(VAR_5++);


 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 == ((void*)0))
  FUNC_1("strdup");
 for (;;) {

  while (*VAR_3 == ' ' || *VAR_3 == '\t')
   VAR_3++;
  if (*VAR_3 == 0)
   goto copy_done;
  VAR_4[VAR_7++] = VAR_3;

  while (*VAR_3 != ' ' && *VAR_3 != '\t')
   if (*VAR_3++ == 0)

    goto copy_done;

  *VAR_3++ = 0;
 }
copy_done:


 while (*VAR_5)
  VAR_4[VAR_7++] = *(VAR_5++);
 VAR_4[VAR_7] = ((void*)0);
}
