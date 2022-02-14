
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmar_unit {int inv_queue_avail; int inv_queue_tail; int inv_queue_full; scalar_t__ inv_queue_size; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (struct dmar_unit*,int ) ;

__attribute__((used)) static void
FUNC_4(struct dmar_unit *VAR_4, int VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);
 VAR_7 = VAR_5 << VAR_3;
 for (;;) {
  if (VAR_7 <= VAR_4->inv_queue_avail)
   break;

  VAR_6 = FUNC_3(VAR_4, VAR_1);
  VAR_6 &= VAR_0;
  VAR_4->inv_queue_avail = VAR_6 - VAR_4->inv_queue_tail -
      VAR_2;
  if (VAR_6 <= VAR_4->inv_queue_tail)
   VAR_4->inv_queue_avail += VAR_4->inv_queue_size;
  if (VAR_7 <= VAR_4->inv_queue_avail)
   break;
  FUNC_2(VAR_4);
  VAR_4->inv_queue_full++;
  FUNC_1();
 }
 VAR_4->inv_queue_avail -= VAR_7;
}
