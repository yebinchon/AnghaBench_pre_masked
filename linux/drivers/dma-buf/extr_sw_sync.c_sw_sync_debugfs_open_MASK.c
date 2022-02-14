
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_timeline {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct sync_timeline* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 struct sync_timeline* FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct sync_timeline *VAR_5;
 char VAR_6[VAR_1];

 FUNC_0(VAR_6, VAR_2);

 VAR_5 = FUNC_1(VAR_6);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->private_data = VAR_5;

 return 0;
}
