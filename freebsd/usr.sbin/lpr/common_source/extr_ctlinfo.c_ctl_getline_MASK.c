
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cji_fname; int cji_curqueue; struct cjprivate* cji_priv; } ;
struct cjprivate {char* cji_buff; TYPE_1__ pub; int cji_dumpit; int cji_fstream; int cji_buffsize; } ;
struct cjobinfo {struct cjprivate* cji_priv; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,char*,char*,int,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,void*,char*,...) ;

__attribute__((used)) static char *
FUNC_5(struct cjobinfo *VAR_3)
{
 char *VAR_4, *VAR_5;
 struct cjprivate *VAR_6;

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_6 = VAR_3->cji_priv;
 if ((VAR_6 == ((void*)0)) || (VAR_6 != VAR_6->pub.cji_priv)) {
  FUNC_4(VAR_0, "in ctl_getline(%p): invalid cjinf (cpriv %p)",
      (void *)VAR_3, (void *)VAR_6);
  return ((void*)0);
 }

 VAR_2 = 0;
 VAR_4 = FUNC_0(VAR_6->cji_buff, VAR_6->cji_buffsize, VAR_6->cji_fstream);
 if (VAR_4 == ((void*)0)) {
  if (VAR_2 != 0)
   FUNC_4(VAR_0, "%s: ctl_getline error fgets(%s): %s",
       VAR_6->pub.cji_curqueue, VAR_6->pub.cji_fname,
       FUNC_3(VAR_2));
  return ((void*)0);
 }
 VAR_5 = FUNC_2(VAR_4, '\n');
 if (VAR_5 != ((void*)0))
  *VAR_5 = '\0';
 return VAR_4;
}
