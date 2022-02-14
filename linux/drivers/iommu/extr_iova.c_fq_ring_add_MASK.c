
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_fq {unsigned int tail; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned FUNC_1(struct iova_fq *VAR_1)
{
 unsigned VAR_2 = VAR_1->tail;

 FUNC_0(&VAR_1->lock);

 VAR_1->tail = (VAR_2 + 1) % VAR_0;

 return VAR_2;
}
