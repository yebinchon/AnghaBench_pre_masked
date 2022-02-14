
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct b53_device *VAR_6)
{
 unsigned int VAR_7;

 FUNC_1(VAR_6, VAR_0, VAR_1,
     VAR_3 | VAR_4 | VAR_5);

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  u8 VAR_8;

  FUNC_0(VAR_6, VAR_0, VAR_1,
     &VAR_8);

  if (!(VAR_8 & VAR_3))
   return 0;

  FUNC_2(1);
 }

 FUNC_3("time out while flushing ARL\n");

 return -VAR_2;
}
