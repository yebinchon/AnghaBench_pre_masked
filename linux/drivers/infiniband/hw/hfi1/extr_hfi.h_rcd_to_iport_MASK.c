
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_ibport {int dummy; } ;
struct hfi1_ctxtdata {TYPE_1__* ppd; } ;
struct TYPE_2__ {struct hfi1_ibport ibport_data; } ;



__attribute__((used)) static inline struct hfi1_ibport *FUNC_0(struct hfi1_ctxtdata *VAR_0)
{
 return &VAR_0->ppd->ibport_data;
}
