
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree {int lock; int seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(bool VAR_0, struct btree *VAR_1)
{
 if (VAR_0)
  VAR_1->seq++;
 (VAR_0 ? FUNC_2 : FUNC_1)(&VAR_1->lock);
}
