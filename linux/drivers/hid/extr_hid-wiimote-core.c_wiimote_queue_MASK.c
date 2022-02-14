
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t head; int tail; int lock; int worker; TYPE_1__* outq; } ;
struct wiimote_data {TYPE_2__ queue; int hdev; } ;
typedef void* __u8 ;
struct TYPE_3__ {size_t size; int data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,void* const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wiimote_data*) ;

__attribute__((used)) static void FUNC_6(struct wiimote_data *VAR_2, const __u8 *VAR_3,
        size_t VAR_4)
{
 unsigned long VAR_5;
 __u8 VAR_6;

 if (VAR_4 > VAR_0) {
  FUNC_0(VAR_2->hdev, "Sending too large output report\n");

  FUNC_3(&VAR_2->queue.lock, VAR_5);
  goto out_error;
 }
 FUNC_3(&VAR_2->queue.lock, VAR_5);

 FUNC_1(VAR_2->queue.outq[VAR_2->queue.head].data, VAR_3, VAR_4);
 VAR_2->queue.outq[VAR_2->queue.head].size = VAR_4;
 VAR_6 = (VAR_2->queue.head + 1) % VAR_1;

 if (VAR_2->queue.head == VAR_2->queue.tail) {
  VAR_2->queue.head = VAR_6;
  FUNC_2(&VAR_2->queue.worker);
 } else if (VAR_6 != VAR_2->queue.tail) {
  VAR_2->queue.head = VAR_6;
 } else {
  FUNC_0(VAR_2->hdev, "Output queue is full");
  goto out_error;
 }

 goto out_unlock;

out_error:
 FUNC_5(VAR_2);
out_unlock:
 FUNC_4(&VAR_2->queue.lock, VAR_5);
}
