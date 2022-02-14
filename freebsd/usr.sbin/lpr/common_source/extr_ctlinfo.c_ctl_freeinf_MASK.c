
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cji_headruser; int cji_mailto; int cji_jobname; int cji_curqueue; int cji_class; int cji_acctuser; int cji_accthost; struct cjprivate* cji_priv; } ;
struct cjprivate {int * cji_fstream; TYPE_1__ pub; } ;
struct cjobinfo {struct cjprivate* cji_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cjprivate*) ;
 int FUNC_3 (int ,char*,void*,void*) ;

void
FUNC_4(struct cjobinfo *VAR_1)
{






 struct cjprivate *VAR_2;

 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = VAR_1->cji_priv;
 if ((VAR_2 == ((void*)0)) || (VAR_2 != VAR_2->pub.cji_priv)) {
  FUNC_3(VAR_0, "in ctl_freeinf(%p): invalid cjinf (cpriv %p)",
      (void *)VAR_1, (void *)VAR_2);
  return;
 }

 if (VAR_2->pub.cji_accthost != ((void*)0)) { FUNC_2(VAR_2->pub.cji_accthost); VAR_2->pub.cji_accthost = ((void*)0); };
 if (VAR_2->pub.cji_acctuser != ((void*)0)) { FUNC_2(VAR_2->pub.cji_acctuser); VAR_2->pub.cji_acctuser = ((void*)0); };
 if (VAR_2->pub.cji_class != ((void*)0)) { FUNC_2(VAR_2->pub.cji_class); VAR_2->pub.cji_class = ((void*)0); };
 if (VAR_2->pub.cji_curqueue != ((void*)0)) { FUNC_2(VAR_2->pub.cji_curqueue); VAR_2->pub.cji_curqueue = ((void*)0); };

 if (VAR_2->pub.cji_jobname != ((void*)0)) { FUNC_2(VAR_2->pub.cji_jobname); VAR_2->pub.cji_jobname = ((void*)0); };
 if (VAR_2->pub.cji_mailto != ((void*)0)) { FUNC_2(VAR_2->pub.cji_mailto); VAR_2->pub.cji_mailto = ((void*)0); };
 if (VAR_2->pub.cji_headruser != ((void*)0)) { FUNC_2(VAR_2->pub.cji_headruser); VAR_2->pub.cji_headruser = ((void*)0); };

 if (VAR_2->cji_fstream != ((void*)0)) {
  FUNC_1(VAR_2->cji_fstream);
  VAR_2->cji_fstream = ((void*)0);
 }

 VAR_1->cji_priv = ((void*)0);
 FUNC_2(VAR_2);

}
