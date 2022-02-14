
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ctladm_opts {char* subopt; int * optname; int argnum; int cmdnum; } ;
typedef int ctladm_optret ;
typedef int ctladm_cmdargs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;

ctladm_optret
FUNC_3(struct ctladm_opts *VAR_3, char *VAR_4, uint32_t *VAR_5,
   ctladm_cmdargs *VAR_6, const char **VAR_7)
{
 struct ctladm_opts *VAR_8;
 int VAR_9 = 0;

 for (VAR_8 = VAR_3; (VAR_8 != ((void*)0)) && (VAR_8->optname != ((void*)0));
      VAR_8++) {
  if (FUNC_2(VAR_8->optname, VAR_4, FUNC_1(VAR_4)) == 0) {
   *VAR_5 = VAR_8->cmdnum;
   *VAR_6 = VAR_8->argnum;
   *VAR_7 = VAR_8->subopt;

   if (FUNC_0(VAR_8->optname, VAR_4) == 0)
    return (VAR_1);

   if (++VAR_9 > 1)
    return(VAR_0);
  }
 }

 if (VAR_9 > 0)
  return(VAR_1);
 else
  return(VAR_2);
}
