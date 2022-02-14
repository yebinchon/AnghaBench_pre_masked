
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct xive_q {int count; int pending_count; } ;
struct xive_cpu {int pending_prio; size_t cppr; struct xive_q* queue; } ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int ) ;
 size_t FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,size_t) ;
 int FUNC_8 (char*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct xive_q*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_10(struct xive_cpu *VAR_3, bool VAR_4)
{
 u32 VAR_5 = 0;
 u8 VAR_6 = 0;


 while (VAR_3->pending_prio != 0) {
  struct xive_q *VAR_7;

  VAR_6 = FUNC_5(VAR_3->pending_prio) - 1;
  FUNC_0("scan_irq: trying prio %d\n", VAR_6);


  VAR_5 = FUNC_9(&VAR_3->queue[VAR_6], VAR_4);


  if (VAR_5) {
   if (VAR_4 || FUNC_6(VAR_5))
    break;





   FUNC_8("xive: got interrupt %d without descriptor, dropping\n",
    VAR_5);
   FUNC_1(1);
   continue;
  }


  VAR_3->pending_prio &= ~(1 << VAR_6);






  VAR_7 = &VAR_3->queue[VAR_6];
  if (FUNC_2(&VAR_7->pending_count)) {
   int VAR_8 = FUNC_4(&VAR_7->pending_count, 0);
   if (VAR_8) {
    FUNC_1(VAR_8 > FUNC_2(&VAR_7->count));
    FUNC_3(VAR_8, &VAR_7->count);
   }
  }
 }


 if (VAR_5 == 0)
  VAR_6 = 0xff;


 if (VAR_6 != VAR_3->cppr) {
  FUNC_0("scan_irq: adjusting CPPR to %d\n", VAR_6);
  VAR_3->cppr = VAR_6;
  FUNC_7(VAR_1 + VAR_2 + VAR_0, VAR_6);
 }

 return VAR_5;
}
