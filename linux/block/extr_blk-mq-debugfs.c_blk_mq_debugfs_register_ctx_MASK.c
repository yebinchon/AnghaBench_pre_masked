
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct blk_mq_hw_ctx {int debugfs_dir; } ;
struct blk_mq_ctx {int cpu; } ;
typedef int name ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct dentry*,struct blk_mq_ctx*,int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct blk_mq_hw_ctx *VAR_1,
     struct blk_mq_ctx *VAR_2)
{
 struct dentry *VAR_3;
 char VAR_4[20];

 FUNC_2(VAR_4, sizeof(VAR_4), "cpu%u", VAR_2->cpu);
 VAR_3 = FUNC_0(VAR_4, VAR_1->debugfs_dir);

 FUNC_1(VAR_3, VAR_2, VAR_0);
}
