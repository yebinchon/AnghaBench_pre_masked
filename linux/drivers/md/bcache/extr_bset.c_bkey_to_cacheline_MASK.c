
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bset_tree {scalar_t__ data; } ;
struct bkey {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct bset_tree *VAR_1, struct bkey *VAR_2)
{
 return ((void *) VAR_2 - (void *) VAR_1->data) / VAR_0;
}
