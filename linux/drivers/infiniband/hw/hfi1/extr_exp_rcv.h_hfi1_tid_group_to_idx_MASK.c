
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tid_group {int dummy; } ;
struct hfi1_ctxtdata {struct tid_group* groups; } ;



__attribute__((used)) static inline u16
FUNC_0(struct hfi1_ctxtdata *VAR_0, struct tid_group *VAR_1)
{
 return VAR_1 - &VAR_0->groups[0];
}
