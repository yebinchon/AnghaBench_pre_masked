
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sdma_engine {scalar_t__ descq_cnt; } ;


 scalar_t__ FUNC_0 (struct sdma_engine*) ;

__attribute__((used)) static inline u16 FUNC_1(struct sdma_engine *VAR_0)
{
 return VAR_0->descq_cnt - FUNC_0(VAR_0);
}
