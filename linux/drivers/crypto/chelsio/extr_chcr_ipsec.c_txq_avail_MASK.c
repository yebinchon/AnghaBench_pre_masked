
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int size; int in_use; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct sge_txq *VAR_0)
{
 return VAR_0->size - 1 - VAR_0->in_use;
}
