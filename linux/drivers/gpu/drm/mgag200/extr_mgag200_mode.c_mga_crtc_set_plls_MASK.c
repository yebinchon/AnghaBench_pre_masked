
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_device {int type; } ;
 int FUNC_0 (struct mga_device*,long) ;
 int FUNC_1 (struct mga_device*,long) ;
 int FUNC_2 (struct mga_device*,long) ;
 int FUNC_3 (struct mga_device*,long) ;
 int FUNC_4 (struct mga_device*,long) ;

__attribute__((used)) static int FUNC_5(struct mga_device *VAR_0, long VAR_1)
{
 switch(VAR_0->type) {
 case 130:
 case 129:
  return FUNC_3(VAR_0, VAR_1);
  break;
 case 128:
 case 131:
  return FUNC_4(VAR_0, VAR_1);
  break;
 case 132:
  return FUNC_2(VAR_0, VAR_1);
  break;
 case 135:
 case 134:
  return FUNC_0(VAR_0, VAR_1);
  break;
 case 133:
  return FUNC_1(VAR_0, VAR_1);
  break;
 }
 return 0;
}
