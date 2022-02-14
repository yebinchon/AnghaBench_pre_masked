
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__** contents; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_5__ {int their_entry; int our_entry; int ancestor_entry; } ;
typedef TYPE_2__ git_merge_diff ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(const git_vector *VAR_0, size_t VAR_1, void *VAR_2)
{
 git_merge_diff *VAR_3 = VAR_0->contents[VAR_1];

 FUNC_1(VAR_2);

 return (!FUNC_0(VAR_3->ancestor_entry) &&
  !FUNC_0(VAR_3->our_entry) &&
  !FUNC_0(VAR_3->their_entry));
}
