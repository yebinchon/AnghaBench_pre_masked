
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ib_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int ,int ,int *) ;
 int FUNC_2 (struct ib_device*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1, u8 VAR_2, u16 VAR_3,
         u16 *VAR_4)
{
 switch (FUNC_0(VAR_1)) {
 case 129:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 case 130:
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 default:
  return -VAR_0;
 }
}
