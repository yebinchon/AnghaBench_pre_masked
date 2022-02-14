
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_ctx; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1)
{

 int VAR_2;
 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 VAR_2 = FUNC_3(VAR_0, VAR_1);

 FUNC_4(FUNC_0(FUNC_2(VAR_1))->i_ctx);
 return VAR_2;
}
