
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int FUNC_0 (int***) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int*** VAR_3 ;

__attribute__((used)) static int FUNC_2(u64 VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = (VAR_4 >> 0) & 0xff;
 VAR_6 = (VAR_4 >> 8) & 0xff;
 VAR_7 = (VAR_4 >> 16) & 0xff;

 if (VAR_5 >= FUNC_0(VAR_3) ||
     VAR_6 >= FUNC_1(VAR_1) ||
     VAR_7 >= FUNC_1(VAR_2))
  return -VAR_0;

 VAR_8 = VAR_3[VAR_5][VAR_6][VAR_7];

 if (VAR_8 == 0)
  return -VAR_0;

 return VAR_8;
}
