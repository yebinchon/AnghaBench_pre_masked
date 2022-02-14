
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qib_pportdata {scalar_t__ sdma_descq_head; scalar_t__ sdma_descq_tail; scalar_t__ sdma_descq_cnt; int * sdma_head_dma; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qib_pportdata*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct qib_devdata*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(struct qib_pportdata *VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_2->dd;
 int VAR_4;
 int VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9;

 VAR_5 = FUNC_0(VAR_2) &&
  (VAR_3->flags & VAR_0);
retry:
 VAR_9 = VAR_5 ?
  (u16)FUNC_1(*VAR_2->sdma_head_dma) :
  (u16)FUNC_2(VAR_3, VAR_1);

 VAR_6 = VAR_2->sdma_descq_head;
 VAR_7 = VAR_2->sdma_descq_tail;
 VAR_8 = VAR_2->sdma_descq_cnt;

 if (VAR_6 < VAR_7) {

  VAR_4 = (VAR_9 >= VAR_6) & (VAR_9 <= VAR_7);
 } else if (VAR_6 > VAR_7) {

  VAR_4 = ((VAR_9 >= VAR_6) && (VAR_9 < VAR_8)) ||
   (VAR_9 <= VAR_7);
 } else {

  VAR_4 = (VAR_9 == VAR_6);
 }

 if (FUNC_3(!VAR_4)) {
  if (VAR_5) {

   VAR_5 = 0;
   goto retry;
  }

  VAR_9 = VAR_6;
 }

 return VAR_9;
}
