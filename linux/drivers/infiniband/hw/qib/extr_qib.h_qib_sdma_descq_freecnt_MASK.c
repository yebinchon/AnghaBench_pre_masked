
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qib_pportdata {scalar_t__ sdma_descq_removed; scalar_t__ sdma_descq_added; scalar_t__ sdma_descq_cnt; } ;



__attribute__((used)) static inline u16 FUNC_0(const struct qib_pportdata *VAR_0)
{
 return VAR_0->sdma_descq_cnt -
  (VAR_0->sdma_descq_added - VAR_0->sdma_descq_removed) - 1;
}
