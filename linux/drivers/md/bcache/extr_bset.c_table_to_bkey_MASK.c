
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bset_tree {int * prev; } ;
struct bkey {int dummy; } ;


 struct bkey* FUNC_0 (struct bset_tree*,unsigned int,int ) ;

__attribute__((used)) static struct bkey *FUNC_1(struct bset_tree *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_0->prev[VAR_1]);
}
