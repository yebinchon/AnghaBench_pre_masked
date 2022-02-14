
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cjprivate* cji_priv; } ;
struct cjprivate {int cji_fstream; TYPE_1__ pub; } ;
struct cjobinfo {struct cjprivate* cji_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,void*,void*) ;

void
FUNC_2(struct cjobinfo *VAR_1)
{
 struct cjprivate *VAR_2;

 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = VAR_1->cji_priv;
 if ((VAR_2 == ((void*)0)) || (VAR_2 != VAR_2->pub.cji_priv)) {
  FUNC_1(VAR_0, "in ctl_rewindcf(%p): invalid cjinf (cpriv %p)",
      (void *)VAR_1, (void *)VAR_2);
  return;
 }

 FUNC_0(VAR_2->cji_fstream);
}
