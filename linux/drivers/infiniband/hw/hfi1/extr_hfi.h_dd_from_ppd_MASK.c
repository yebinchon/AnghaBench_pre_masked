
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;



__attribute__((used)) static inline struct hfi1_devdata *FUNC_0(struct hfi1_pportdata *VAR_0)
{
 return VAR_0->dd;
}
