
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct tid_group {int dummy; } ;
struct hfi1_ctxtdata {struct tid_group* groups; } ;



__attribute__((used)) static inline struct tid_group *
FUNC_0(struct hfi1_ctxtdata *VAR_0, u16 VAR_1)
{
 return &VAR_0->groups[VAR_1];
}
