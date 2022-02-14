
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bset_tree {TYPE_1__* tree; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {int m; } ;


 struct bkey* FUNC_0 (struct bset_tree*,int ,int ) ;
 int FUNC_1 (unsigned int,struct bset_tree*) ;

__attribute__((used)) static struct bkey *FUNC_2(struct bset_tree *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0, FUNC_1(VAR_1, VAR_0), VAR_0->tree[VAR_1].m);
}
