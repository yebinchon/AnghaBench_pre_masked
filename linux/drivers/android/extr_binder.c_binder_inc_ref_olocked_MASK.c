
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ strong; scalar_t__ weak; } ;
struct binder_ref {TYPE_1__ data; int node; } ;


 int FUNC_0 (int ,int,int,struct list_head*) ;

__attribute__((used)) static int FUNC_1(struct binder_ref *VAR_0, int VAR_1,
      struct list_head *VAR_2)
{
 int VAR_3;

 if (VAR_1) {
  if (VAR_0->data.strong == 0) {
   VAR_3 = FUNC_0(VAR_0->node, 1, 1, VAR_2);
   if (VAR_3)
    return VAR_3;
  }
  VAR_0->data.strong++;
 } else {
  if (VAR_0->data.weak == 0) {
   VAR_3 = FUNC_0(VAR_0->node, 0, 1, VAR_2);
   if (VAR_3)
    return VAR_3;
  }
  VAR_0->data.weak++;
 }
 return 0;
}
