
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_3__ {int flags; int head_oid; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static void FUNC_2(
 git_submodule *VAR_3, mode_t VAR_4, const git_oid *VAR_5)
{
 if (!FUNC_0(VAR_4))
  VAR_3->flags |= VAR_1;
 else {
  FUNC_1(&VAR_3->head_oid, VAR_5);

  VAR_3->flags |= VAR_0 |
   VAR_2;
 }
}
