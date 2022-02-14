
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int mnt_sb; } ;


 int FUNC_0 (char*,int) ;
 struct inode* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,TYPE_1__**,int *) ;
 int FUNC_5 (TYPE_1__**,int *) ;

__attribute__((used)) static struct inode *FUNC_6(void)
{
 struct inode *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(&VAR_2, &VAR_1, &VAR_0);
 if (VAR_4 < 0) {
  FUNC_0("Cannot mount pseudo fs: %d\n", VAR_4);
  return FUNC_1(VAR_4);
 }

 VAR_3 = FUNC_3(VAR_1->mnt_sb);
 if (FUNC_2(VAR_3))
  FUNC_5(&VAR_1, &VAR_0);

 return VAR_3;
}
