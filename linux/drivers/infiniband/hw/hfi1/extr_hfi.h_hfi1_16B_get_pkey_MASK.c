
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_16b_header {int* lrh; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u16 FUNC_0(struct hfi1_16b_header *VAR_2)
{
 return (u16)((VAR_2->lrh[2] & VAR_0) >> VAR_1);
}
