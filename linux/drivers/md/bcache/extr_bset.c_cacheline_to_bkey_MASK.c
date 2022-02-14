
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bset_tree {scalar_t__ data; } ;
typedef void bkey ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct bkey *FUNC_0(struct bset_tree *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 return ((void *) VAR_1->data) + VAR_2 * VAR_0 + VAR_3 * 8;
}
