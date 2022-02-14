
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int xopts_nr; char** xopts; } ;


 int FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (char*,char const***) ;
 char* FUNC_2 (char const*) ;

void FUNC_3(struct replay_opts *VAR_0, char *VAR_1)
{
 int VAR_2;
 char *VAR_3 = VAR_1;

 if (*VAR_3 == ' ')
  VAR_3++;

 VAR_0->xopts_nr = FUNC_1(VAR_3,
           (const char ***)&VAR_0->xopts);
 for (VAR_2 = 0; VAR_2 < VAR_0->xopts_nr; VAR_2++) {
  const char *VAR_4 = VAR_0->xopts[VAR_2];

  FUNC_0(VAR_4, "--", &VAR_4);
  VAR_0->xopts[VAR_2] = FUNC_2(VAR_4);
 }
}
