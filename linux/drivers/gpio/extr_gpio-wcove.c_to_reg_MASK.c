
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ctrl_register { ____Placeholder_ctrl_register } ctrl_register ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_0(int VAR_5, enum ctrl_register VAR_6)
{
 unsigned int VAR_7;

 if (VAR_5 >= VAR_4)
  return -VAR_1;

 if (VAR_6 == VAR_0)
  VAR_7 = VAR_2 + VAR_5;
 else
  VAR_7 = VAR_3 + VAR_5;

 return VAR_7;
}
