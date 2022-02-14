
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static int FUNC_0 (struct amdgpu_device *VAR_8,
            int VAR_9)
{
 int VAR_10;

 if (VAR_8->flags & VAR_7) {
  switch (VAR_9) {
  case 133:
  case 130:
   VAR_10 = VAR_0;
   break;
  case 132:
  case 129:
   VAR_10 = VAR_1;
   break;
  case 131:
  case 128:
   VAR_10 = VAR_2;
   break;
  default:
   VAR_10 = VAR_6;
   break;
  }
 } else {
  switch (VAR_9) {
  case 136:
   VAR_10 = VAR_3;
   break;
  case 134:
   VAR_10 = VAR_5;
   break;
  case 135:
   VAR_10 = VAR_4;
   break;
  default:
   VAR_10 = VAR_6;
   break;
  }
 }

 return VAR_10;
}
