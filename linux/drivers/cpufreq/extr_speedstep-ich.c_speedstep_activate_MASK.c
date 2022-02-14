
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 u16 VAR_2 = 0;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_1, 0x00A0, &VAR_2);
 if (!(VAR_2 & 0x08)) {
  VAR_2 |= 0x08;
  FUNC_2("activating SpeedStep (TM) registers\n");
  FUNC_1(VAR_1, 0x00A0, VAR_2);
 }

 return 0;
}
