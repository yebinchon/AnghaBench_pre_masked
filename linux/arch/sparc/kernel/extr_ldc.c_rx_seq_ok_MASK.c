
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ldc_channel {scalar_t__ rcv_nxt; } ;



__attribute__((used)) static int FUNC_0(struct ldc_channel *VAR_0, u32 VAR_1)
{
 return VAR_0->rcv_nxt + 1 == VAR_1;
}
