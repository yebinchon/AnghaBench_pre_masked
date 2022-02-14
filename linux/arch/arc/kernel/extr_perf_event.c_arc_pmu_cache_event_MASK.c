
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int*** VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(u64 VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = (VAR_8 >> 0) & 0xff;
 VAR_10 = (VAR_8 >> 8) & 0xff;
 VAR_11 = (VAR_8 >> 16) & 0xff;
 if (VAR_9 >= VAR_3)
  return -VAR_1;
 if (VAR_10 >= VAR_4)
  return -VAR_1;
 if (VAR_11 >= VAR_5)
  return -VAR_1;

 VAR_12 = VAR_6[VAR_9][VAR_10][VAR_11];

 if (VAR_12 == VAR_0)
  return -VAR_2;

 FUNC_0("init cache event: type/op/result %d/%d/%d with h/w %d \'%s\'\n",
   VAR_9, VAR_10, VAR_11, VAR_12,
   VAR_7[VAR_12]);

 return VAR_12;
}
