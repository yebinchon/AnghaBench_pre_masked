
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_ctxtdata {int * rcvhdrtail_kvaddr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(const struct hfi1_ctxtdata *VAR_0)
{




 return (u32)FUNC_0(*VAR_0->rcvhdrtail_kvaddr);
}
