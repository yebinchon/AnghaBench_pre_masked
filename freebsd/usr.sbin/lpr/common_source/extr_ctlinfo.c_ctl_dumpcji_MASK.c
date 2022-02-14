
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cji_priv; int cji_headruser; int cji_mailto; int cji_jobname; int cji_fname; int cji_curqueue; int cji_class; int cji_acctuser; int cji_accthost; } ;
struct cjprivate {TYPE_1__ pub; int cji_buff; } ;
struct cjobinfo {struct cjprivate* cji_priv; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;

void
FUNC_3(FILE *VAR_1, const char *VAR_2, struct cjobinfo *VAR_3)
{
 struct cjprivate *VAR_4;
 char *VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_1,
      "ctl_dumpcji: ptr to cjobinfo for '%s' is NULL\n",
      VAR_2);
  return;
 }
 VAR_4 = VAR_3->cji_priv;

 FUNC_2(VAR_1, "ctl_dumpcji: Dump '%s' of cjobinfo at %p->%p\n",
     VAR_2, (void *)VAR_3, VAR_4->cji_buff);

 VAR_5 = VAR_4->pub.cji_accthost; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "accthost.H"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_acctuser; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "acctuser.P"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_class; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "class.C"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_curqueue; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "cf-qname"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_fname; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "cf-fname"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_jobname; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "jobname.J"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_mailto; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "mailto.M"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);
 VAR_5 = VAR_4->pub.cji_headruser; VAR_0++; FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "headruser.L"); if (VAR_5 == ((void*)0)) FUNC_2(VAR_1, "NULL\n"); else FUNC_2(VAR_1, "%p -> %s\n", VAR_5, VAR_5);

 VAR_0++;
 FUNC_2(VAR_1, "%4d] %12s = ", VAR_0, "*cjprivate");
 if (VAR_4->pub.cji_priv == ((void*)0))
  FUNC_2(VAR_1, "NULL !!\n");
 else
  FUNC_2(VAR_1, "%p\n", (void *)VAR_4->pub.cji_priv);

 FUNC_2(VAR_1, "|- - - - --> Dump '%s' complete\n", VAR_2);


 FUNC_1(VAR_1);


}
