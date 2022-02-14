
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_devdata {int flags; scalar_t__ rcvarray_wc; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct hfi1_devdata *VAR_1, u32 VAR_2)
{




 if ((VAR_1->flags & VAR_0) && VAR_1->rcvarray_wc) {
  FUNC_1(0, VAR_1->rcvarray_wc + (VAR_2 * 8));
  if ((VAR_2 & 3) == 3)
   FUNC_0();
 }
}
