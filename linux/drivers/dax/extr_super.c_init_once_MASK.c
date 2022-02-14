
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dax_device {struct inode inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dax_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct dax_device *VAR_1 = VAR_0;
 struct inode *VAR_2 = &VAR_1->inode;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(VAR_2);
}
