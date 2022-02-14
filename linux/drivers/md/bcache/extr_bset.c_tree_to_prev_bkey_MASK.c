
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bset_tree {int* prev; } ;
typedef void bkey ;


 scalar_t__ FUNC_0 (struct bset_tree*,unsigned int) ;

__attribute__((used)) static struct bkey *FUNC_1(struct bset_tree *VAR_0, unsigned int VAR_1)
{
 return (void *) (((uint64_t *) FUNC_0(VAR_0, VAR_1)) - VAR_0->prev[VAR_1]);
}
