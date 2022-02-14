
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_latency_info {int lock; scalar_t__ scale_lat; int * scale_grp; scalar_t__ last_scale_event; int scale_cookie; } ;
struct iolatency_grp {struct child_latency_info child_lat; } ;
struct blkcg_gq {scalar_t__ parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct iolatency_grp* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct blkcg_gq *VAR_1)
{
 if (VAR_1->parent) {
  struct iolatency_grp *VAR_2 = FUNC_1(VAR_1->parent);
  struct child_latency_info *VAR_3;
  if (!VAR_2)
   return;

  VAR_3 = &VAR_2->child_lat;
  FUNC_2(&VAR_3->lock);
  FUNC_0(&VAR_3->scale_cookie, VAR_0);
  VAR_3->last_scale_event = 0;
  VAR_3->scale_grp = ((void*)0);
  VAR_3->scale_lat = 0;
  FUNC_3(&VAR_3->lock);
 }
}
