
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_sge {int lkey; int length; int laddr; } ;
struct ib_sge {int lkey; int length; int addr; } ;



__attribute__((used)) static inline void FUNC_0(struct ib_sge *VAR_0, struct siw_sge *VAR_1,
    int VAR_2)
{
 while (VAR_2--) {
  VAR_1->laddr = VAR_0->addr;
  VAR_1->length = VAR_0->length;
  VAR_1->lkey = VAR_0->lkey;

  VAR_1++;
  VAR_0++;
 }
}
