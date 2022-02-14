
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,struct inode*,struct file*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned int VAR_3 = 0;

 FUNC_1(VAR_0,
  "mwavedd::mwave_open, entry inode %p file %p\n",
   VAR_1, VAR_2);
 FUNC_0(VAR_0,
  "mwavedd::mwave_open, exit return retval %x\n", VAR_3);

 return VAR_3;
}
