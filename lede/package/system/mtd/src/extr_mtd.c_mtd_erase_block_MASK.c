
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erase_info_user {int start; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct erase_info_user*) ;

int FUNC_1(int VAR_3, int VAR_4)
{
 struct erase_info_user VAR_5;

 VAR_5.start = VAR_4;
 VAR_5.length = VAR_2;
 FUNC_0(VAR_3, VAR_1, &VAR_5);
 if (FUNC_0 (VAR_3, VAR_0, &VAR_5) < 0)
  return -1;

 return 0;
}
