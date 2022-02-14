
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_hash_ctx ;
struct TYPE_2__ {int (* update_fn ) (int *,unsigned int*,int) ;} ;


 scalar_t__ FUNC_0 (int *,int,unsigned int*,int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int*,int) ;
 int FUNC_3 (int *,unsigned int*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_4(git_hash_ctx *VAR_1, git_hash_ctx *VAR_2,
      int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 VAR_4 = FUNC_1(VAR_4);
 VAR_5 = FUNC_1(VAR_5);
 if (VAR_2) {
  VAR_0->update_fn(VAR_2, &VAR_4, 4);
  VAR_0->update_fn(VAR_2, &VAR_5, 4);
 }
 return ((FUNC_0(VAR_1, VAR_3, &VAR_4, 4) < 0) ||
  (FUNC_0(VAR_1, VAR_3, &VAR_5, 4) < 0)) ? -1 : 0;
}
