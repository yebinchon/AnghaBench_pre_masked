
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_txreq {scalar_t__ num_desc; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,struct sdma_txreq*) ;

__attribute__((used)) static inline void FUNC_1(struct hfi1_devdata *VAR_0, struct sdma_txreq *VAR_1)
{
 if (VAR_1->num_desc)
  FUNC_0(VAR_0, VAR_1);
}
