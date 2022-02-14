
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_hash_ctx ;
struct TYPE_2__ {int (* update_fn ) (int *,int ,unsigned int) ;} ;


 int FUNC_0 (int *,int ,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(git_hash_ctx *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 if (VAR_5) {
  VAR_0->update_fn(VAR_3, VAR_1, VAR_5);
  if (FUNC_1(VAR_4, VAR_1, VAR_5) < 0)
   return -1;
  VAR_2 = 0;
 }
 return 0;
}
