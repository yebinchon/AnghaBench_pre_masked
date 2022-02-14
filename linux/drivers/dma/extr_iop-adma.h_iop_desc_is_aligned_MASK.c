
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_adma_desc_slot {int idx; } ;



__attribute__((used)) static inline int FUNC_0(struct iop_adma_desc_slot *VAR_0,
     int VAR_1)
{

 return (VAR_0->idx & (VAR_1 - 1)) ? 0 : 1;
}
