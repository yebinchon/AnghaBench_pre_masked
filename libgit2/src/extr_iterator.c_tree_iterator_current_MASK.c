
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int size; } ;
struct TYPE_6__ {TYPE_1__* cb; } ;
struct TYPE_8__ {int entry; TYPE_3__ frames; TYPE_2__ base; } ;
typedef TYPE_4__ tree_iterator ;
typedef int git_iterator ;
typedef int git_index_entry ;
struct TYPE_5__ {int (* advance ) (int const**,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const**,int *) ;

__attribute__((used)) static int FUNC_2(
 const git_index_entry **VAR_1, git_iterator *VAR_2)
{
 tree_iterator *VAR_3 = (tree_iterator *)VAR_2;

 if (!FUNC_0(VAR_2))
  return VAR_3->base.cb->advance(VAR_1, VAR_2);

 if (!VAR_3->frames.size) {
  *VAR_1 = ((void*)0);
  return VAR_0;
 }

 *VAR_1 = &VAR_3->entry;
 return 0;
}
