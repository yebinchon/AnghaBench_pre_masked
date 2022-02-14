
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_device *VAR_13,
        uint32_t VAR_14)
{
 uint64_t VAR_15 = 0;

 if (VAR_14 & VAR_5)
  VAR_15 |= VAR_0;
 if (VAR_14 & VAR_7)
  VAR_15 |= VAR_2;
 if (VAR_14 & VAR_8)
  VAR_15 |= VAR_3;

 switch (VAR_14 & VAR_4) {
 case 131:
  VAR_15 |= FUNC_0(VAR_10);
  break;
 case 130:
  VAR_15 |= FUNC_0(VAR_10);
  break;
 case 128:
  VAR_15 |= FUNC_0(VAR_12);
  break;
 case 132:
  VAR_15 |= FUNC_0(VAR_9);
  break;
 case 129:
  VAR_15 |= FUNC_0(VAR_11);
  break;
 default:
  VAR_15 |= FUNC_0(VAR_10);
  break;
 }

 if (VAR_14 & VAR_6)
  VAR_15 |= VAR_1;

 return VAR_15;
}
