
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int base; int flags; } ;
typedef TYPE_1__ git_patch_generated ;
typedef int git_diff ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,size_t) ;

__attribute__((used)) static int FUNC_5(
 git_patch_generated **VAR_1, git_diff *VAR_2, size_t VAR_3)
{
 int VAR_4;
 git_patch_generated *VAR_5 = FUNC_2(1, sizeof(git_patch_generated));
 FUNC_0(VAR_5);

 if (!(VAR_4 = FUNC_4(VAR_5, VAR_2, VAR_3))) {
  VAR_5->flags |= VAR_0;
  FUNC_1(&VAR_5->base);
 } else {
  FUNC_3(VAR_5);
  VAR_5 = ((void*)0);
 }

 *VAR_1 = VAR_5;
 return VAR_4;
}
