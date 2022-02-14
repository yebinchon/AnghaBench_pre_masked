
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {scalar_t__ descq_tail; scalar_t__ descq_head; } ;



__attribute__((used)) static inline int FUNC_0(struct sdma_engine *VAR_0)
{
 return VAR_0->descq_tail == VAR_0->descq_head;
}
