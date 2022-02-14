
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_event {int dummy; } ;
struct uhid_device {int head; int tail; int hid; int waitq; struct uhid_event** outq; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct uhid_event*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct uhid_device *VAR_1, struct uhid_event *VAR_2)
{
 __u8 VAR_3;

 VAR_3 = (VAR_1->head + 1) % VAR_0;

 if (VAR_3 != VAR_1->tail) {
  VAR_1->outq[VAR_1->head] = VAR_2;
  VAR_1->head = VAR_3;
  FUNC_2(&VAR_1->waitq);
 } else {
  FUNC_0(VAR_1->hid, "Output queue is full\n");
  FUNC_1(VAR_2);
 }
}
