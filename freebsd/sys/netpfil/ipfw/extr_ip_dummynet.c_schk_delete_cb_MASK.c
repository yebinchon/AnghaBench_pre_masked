
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int sched_nr; } ;
struct dn_schk {void* profile; TYPE_2__* fp; int * siht; TYPE_1__ sch; int fsk_list; } ;
struct TYPE_6__ {int schk_count; } ;
struct TYPE_5__ {int (* destroy ) (struct dn_schk*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (struct dn_schk*,int) ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int (*) (int *,int *),int *) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct dn_schk*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_6, void *VAR_7)
{
 struct dn_schk *VAR_8 = VAR_6;







 FUNC_5(&VAR_8->fsk_list, VAR_7 ? VAR_2 : 0);

 if (VAR_8->sch.flags & VAR_3) {
  FUNC_3(VAR_8->siht, FUNC_6, ((void*)0));
  FUNC_2(VAR_8->siht, 0);
 } else if (VAR_8->siht)
  FUNC_6(VAR_8->siht, ((void*)0));
 if (VAR_8->profile) {
  FUNC_4(VAR_8->profile, VAR_4);
  VAR_8->profile = ((void*)0);
 }
 VAR_8->siht = ((void*)0);
 if (VAR_8->fp->destroy)
  VAR_8->fp->destroy(VAR_8);
 FUNC_1(VAR_8, sizeof(*VAR_8));
 FUNC_4(VAR_6, VAR_4);
 VAR_5.schk_count--;
 return VAR_0;
}
