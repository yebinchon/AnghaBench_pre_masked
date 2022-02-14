
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree {int seq; int lock; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(bool VAR_0, struct btree *VAR_1, int VAR_2)
{
 VAR_0 ? FUNC_1(&VAR_1->lock, VAR_2 + 1)
   : FUNC_0(&VAR_1->lock, VAR_2 + 1);
 if (VAR_0)
  VAR_1->seq++;
}
