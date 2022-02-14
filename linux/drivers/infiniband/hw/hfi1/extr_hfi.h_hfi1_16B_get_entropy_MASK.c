
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_16b_header {int* lrh; } ;


 int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct hfi1_16b_header *VAR_1)
{
 return (u16)(VAR_1->lrh[3] & VAR_0);
}
