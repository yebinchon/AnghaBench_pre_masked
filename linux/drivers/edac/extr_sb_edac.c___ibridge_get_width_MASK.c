
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dev_type { ____Placeholder_dev_type } dev_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum dev_type FUNC_0(u32 VAR_4)
{
 enum dev_type VAR_5;

 switch (VAR_4) {
 case 3:
  VAR_5 = VAR_0;
  break;
 case 2:
  VAR_5 = VAR_1;
  break;
 case 1:
  VAR_5 = VAR_3;
  break;
 case 0:
  VAR_5 = VAR_2;
  break;
 }

 return VAR_5;
}
