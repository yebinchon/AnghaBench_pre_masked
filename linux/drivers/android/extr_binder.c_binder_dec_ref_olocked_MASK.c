
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ strong; scalar_t__ weak; int desc; int debug_id; } ;
struct binder_ref {TYPE_2__ data; TYPE_1__* proc; int node; } ;
struct TYPE_3__ {int pid; } ;


 int FUNC_0 (struct binder_ref*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct binder_ref *VAR_0, int VAR_1)
{
 if (VAR_1) {
  if (VAR_0->data.strong == 0) {
   FUNC_2("%d invalid dec strong, ref %d desc %d s %d w %d\n",
       VAR_0->proc->pid, VAR_0->data.debug_id,
       VAR_0->data.desc, VAR_0->data.strong,
       VAR_0->data.weak);
   return 0;
  }
  VAR_0->data.strong--;
  if (VAR_0->data.strong == 0)
   FUNC_1(VAR_0->node, VAR_1, 1);
 } else {
  if (VAR_0->data.weak == 0) {
   FUNC_2("%d invalid dec weak, ref %d desc %d s %d w %d\n",
       VAR_0->proc->pid, VAR_0->data.debug_id,
       VAR_0->data.desc, VAR_0->data.strong,
       VAR_0->data.weak);
   return 0;
  }
  VAR_0->data.weak--;
 }
 if (VAR_0->data.strong == 0 && VAR_0->data.weak == 0) {
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
