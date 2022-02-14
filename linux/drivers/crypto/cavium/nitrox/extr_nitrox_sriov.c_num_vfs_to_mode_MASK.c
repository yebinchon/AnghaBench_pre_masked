
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vf_mode { ____Placeholder_vf_mode } vf_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline enum vf_mode FUNC_0(int VAR_5)
{
 enum vf_mode VAR_6 = 0;

 switch (VAR_5) {
 case 0:
  VAR_6 = VAR_0;
  break;
 case 16:
  VAR_6 = VAR_2;
  break;
 case 32:
  VAR_6 = VAR_3;
  break;
 case 64:
  VAR_6 = VAR_4;
  break;
 case 128:
  VAR_6 = VAR_1;
  break;
 }

 return VAR_6;
}
