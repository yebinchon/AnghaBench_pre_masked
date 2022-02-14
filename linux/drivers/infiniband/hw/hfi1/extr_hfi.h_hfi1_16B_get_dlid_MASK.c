
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_16b_header {int* lrh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_0(struct hfi1_16b_header *VAR_4)
{
 return (u32)((VAR_4->lrh[1] & VAR_3) |
       (((VAR_4->lrh[2] & VAR_1) >>
       VAR_0) << VAR_2));
}
