
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dataind_pending; int lock; int dataind_queue; TYPE_1__* cl; } ;
struct TYPE_3__ {int device; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(u32 VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, &VAR_0.dataind_queue);

 FUNC_4(&VAR_0.lock);
 VAR_0.dataind_pending++;
 while (VAR_0.dataind_pending > VAR_2 &&
    !FUNC_3(&VAR_0.dataind_queue)) {
  FUNC_2(&VAR_0.cl->device, "data notification "
  "queue overrun (%u entries)\n", VAR_0.dataind_pending);

  FUNC_1(&VAR_0.dataind_queue);
  VAR_0.dataind_pending--;
 }
 FUNC_5(&VAR_0.lock);
}
