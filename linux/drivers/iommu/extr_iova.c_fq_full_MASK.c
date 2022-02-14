
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_fq {int tail; int head; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct iova_fq *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 return (((VAR_1->tail + 1) % VAR_0) == VAR_1->head);
}
