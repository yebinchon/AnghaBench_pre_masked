
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int*** VAR_4 ;

__attribute__((used)) static int FUNC_0(u64 VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_6 = (VAR_5 >> 0) & 0xff;
 VAR_7 = (VAR_5 >> 8) & 0xff;
 VAR_8 = (VAR_5 >> 16) & 0xff;

 if (VAR_6 >= VAR_1)
  return -VAR_0;
 if (VAR_7 >= VAR_2)
  return -VAR_0;
 if (VAR_8 >= VAR_3)
  return -VAR_0;

 return VAR_4[VAR_6][VAR_7][VAR_8];
}
