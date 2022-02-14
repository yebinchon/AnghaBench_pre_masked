
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct evname_elem {int ene_bsm_probe_id; } ;
typedef int dtrace_id_t ;
struct TYPE_3__ {int dtargd_ndx; int dtargd_native; } ;
typedef TYPE_1__ dtrace_argdesc_t ;


 void* VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3,
    dtrace_argdesc_t *VAR_4)
{
 struct evname_elem *VAR_5;
 const char *VAR_6;

 VAR_5 = (struct evname_elem *)VAR_3;
 VAR_6 = ((void*)0);
 switch (VAR_4->dtargd_ndx) {
 case 0:

  VAR_6 = "char *";
  break;

 case 1:

  VAR_6 = "struct audit_record *";
  break;

 case 2:

  if (VAR_2 == VAR_5->ene_bsm_probe_id)
   VAR_6 = "const void *";
  else
   VAR_4->dtargd_ndx = VAR_0;
  break;

 case 3:

  if (VAR_2 == VAR_5->ene_bsm_probe_id)
   VAR_6 = "size_t";
  else
   VAR_4->dtargd_ndx = VAR_0;
  break;

 default:
  VAR_4->dtargd_ndx = VAR_0;
  break;
 }
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_4->dtargd_native, VAR_6, sizeof(VAR_4->dtargd_native));
}
