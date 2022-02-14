
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {scalar_t__ um_fstype; } ;
struct inode {struct inode* i_din2; struct inode* i_din1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct inode*) ;

__attribute__((used)) static void
FUNC_1(struct ufsmount *VAR_4, struct inode *VAR_5)
{

 if (VAR_4->um_fstype == VAR_0 && VAR_5->i_din1 != ((void*)0))
  FUNC_0(VAR_2, VAR_5->i_din1);
 else if (VAR_5->i_din2 != ((void*)0))
  FUNC_0(VAR_3, VAR_5->i_din2);
 FUNC_0(VAR_1, VAR_5);
}
