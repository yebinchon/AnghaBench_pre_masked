
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_0(struct inode *VAR_4)
{

 return ((VAR_4->i_flag & (VAR_0 | VAR_1 | VAR_2 |
     VAR_3)) != 0);
}
