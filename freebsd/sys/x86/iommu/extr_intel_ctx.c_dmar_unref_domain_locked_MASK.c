
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int delayed_taskqueue; int unit; } ;
struct dmar_domain {int refs; int ctx_cnt; int flags; int unload_task; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dmar_domain*,int ) ;
 int FUNC_4 (struct dmar_domain*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct dmar_unit *VAR_2, struct dmar_domain *VAR_3)
{

 FUNC_0(VAR_2);
 FUNC_2(VAR_3->refs >= 1,
     ("dmar %d domain %p refs %u", VAR_2->unit, VAR_3, VAR_3->refs));
 FUNC_2(VAR_3->refs > VAR_3->ctx_cnt,
     ("dmar %d domain %p refs %d ctx_cnt %d", VAR_2->unit, VAR_3,
     VAR_3->refs, VAR_3->ctx_cnt));

 if (VAR_3->refs > 1) {
  VAR_3->refs--;
  FUNC_1(VAR_2);
  return;
 }

 FUNC_2((VAR_3->flags & VAR_0) == 0,
     ("lost ref on RMRR domain %p", VAR_3));

 FUNC_3(VAR_3, VAR_1);
 FUNC_1(VAR_2);

 FUNC_5(VAR_2->delayed_taskqueue, &VAR_3->unload_task);
 FUNC_4(VAR_3);
}
