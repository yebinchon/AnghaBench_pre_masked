
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dax_device {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 struct dax_device* FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_1)
{
 struct dax_device *VAR_2 = FUNC_2(VAR_1);
 FUNC_0(FUNC_1(VAR_0, &VAR_2->flags),
   "kill_dax() must be called before final iput()\n");
}
