
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree {int written; int c; } ;
typedef void bset ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct btree*) ;

__attribute__((used)) static inline struct bset *FUNC_2(struct btree *VAR_0)
{
 return ((void *) FUNC_1(VAR_0)) + VAR_0->written * FUNC_0(VAR_0->c);
}
