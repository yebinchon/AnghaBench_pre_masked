
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_hash_ctx ;
typedef int buf ;
struct TYPE_2__ {int (* update_fn ) (int *,char*,int) ;} ;


 int FUNC_0 (int *,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(git_hash_ctx *VAR_1, unsigned VAR_2)
{

 char VAR_3[12];
 int VAR_4 = FUNC_1(VAR_3, sizeof(VAR_3), "%06o", VAR_2);
 VAR_0->update_fn(VAR_1, VAR_3, VAR_4);
}
