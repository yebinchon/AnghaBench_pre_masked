
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int magic; int root; } ;
struct rdt_fs_context {TYPE_1__ kfc; } ;
struct fs_context {int global; int user_ns; int * ops; TYPE_1__* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct rdt_fs_context* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct fs_context *VAR_6)
{
 struct rdt_fs_context *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct rdt_fs_context), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->kfc.root = VAR_5;
 VAR_7->kfc.magic = VAR_2;
 VAR_6->fs_private = &VAR_7->kfc;
 VAR_6->ops = &VAR_4;
 FUNC_2(VAR_6->user_ns);
 VAR_6->user_ns = FUNC_0(&VAR_3);
 VAR_6->global = 1;
 return 0;
}
