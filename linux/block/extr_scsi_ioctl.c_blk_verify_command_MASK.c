
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_cmd_filter {int write_ok; int read_ok; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct blk_cmd_filter VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char,int ) ;

int FUNC_2(unsigned char *VAR_4, fmode_t VAR_5)
{
 struct blk_cmd_filter *VAR_6 = &VAR_3;


 if (FUNC_0(VAR_0))
  return 0;


 if (FUNC_1(VAR_4[0], VAR_6->read_ok))
  return 0;


 if (FUNC_1(VAR_4[0], VAR_6->write_ok) && (VAR_5 & VAR_2))
  return 0;

 return -VAR_1;
}
