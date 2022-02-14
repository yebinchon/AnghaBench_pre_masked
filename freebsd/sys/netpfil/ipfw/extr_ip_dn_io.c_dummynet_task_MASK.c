
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnet {int dummy; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct mq {int * head; int * member_1; int * member_0; } ;
struct dn_sch_inst {int dummy; } ;
struct dn_id {scalar_t__ type; } ;
struct delay_line {int dummy; } ;
struct TYPE_7__ {struct dn_id* object; int key; } ;
struct TYPE_5__ {scalar_t__ elements; } ;
struct TYPE_6__ {scalar_t__ expire; scalar_t__ expire_cycle; scalar_t__ curr_time; TYPE_1__ evheap; struct timeval prev_t; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct vnet*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct timeval*) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_12 (struct mq*,struct dn_sch_inst*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct mq*,struct delay_line*,scalar_t__) ;

void
FUNC_14(void *VAR_10, int VAR_11)
{
 struct timeval VAR_12;
 struct mq VAR_13 = { ((void*)0), ((void*)0) };

 FUNC_1((struct vnet *)VAR_10);

 FUNC_2();


 VAR_9 += VAR_11 - 1;

 FUNC_10(&VAR_12);

 VAR_8 = (VAR_12.tv_sec - VAR_1.prev_t.tv_sec) * 1000000 +
 (VAR_12.tv_usec - VAR_1.prev_t.tv_usec);

 VAR_5 = (VAR_8 * VAR_2 - 1000000) / VAR_2;

 VAR_6 += VAR_5;

 VAR_1.prev_t = VAR_12;
 VAR_1.curr_time++;
 if (VAR_6 - VAR_3 >= 0) {
  int VAR_14 = VAR_6 / VAR_3;

  VAR_1.curr_time += VAR_14;
  VAR_7 += VAR_14;
  VAR_6 %= VAR_3;
  VAR_4++;
 } else if (VAR_6 + VAR_3 <= 0) {
  VAR_1.curr_time--;
  VAR_7--;
  VAR_6 += VAR_3;
  VAR_4++;
 }


 for (;;) {
  struct dn_id *VAR_15;

  if (VAR_1.evheap.elements == 0 ||
      FUNC_4(VAR_1.curr_time, FUNC_5(&VAR_1.evheap)->key))
   break;
  VAR_15 = FUNC_5(&VAR_1.evheap)->object;
  FUNC_11(&VAR_1.evheap, ((void*)0));

  if (VAR_15->type == VAR_0) {
   FUNC_12(&VAR_13, (struct dn_sch_inst *)VAR_15, VAR_1.curr_time);
  } else {
   FUNC_13(&VAR_13, (struct delay_line *)VAR_15, VAR_1.curr_time);
  }
 }
 if (VAR_1.expire && ++VAR_1.expire_cycle >= VAR_1.expire) {
  VAR_1.expire_cycle = 0;
  FUNC_7();
  FUNC_6();
 }

 FUNC_8();
 FUNC_3();
 if (VAR_13.head != ((void*)0))
  FUNC_9(VAR_13.head);
 FUNC_0();
}
