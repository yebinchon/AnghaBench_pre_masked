
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static int FUNC_0(const unsigned int (*VAR_6)
      [VAR_3]
      [VAR_4]
      [VAR_5], u64 VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = (VAR_7 >> 0) & 0xff;
 if (VAR_8 >= VAR_3)
  return -VAR_1;

 VAR_9 = (VAR_7 >> 8) & 0xff;
 if (VAR_9 >= VAR_4)
  return -VAR_1;

 VAR_10 = (VAR_7 >> 16) & 0xff;
 if (VAR_10 >= VAR_5)
  return -VAR_1;

 VAR_11 = (int)(*VAR_6)[VAR_8][VAR_9][VAR_10];

 if (VAR_11 == VAR_0)
  return -VAR_2;

 return VAR_11;
}
