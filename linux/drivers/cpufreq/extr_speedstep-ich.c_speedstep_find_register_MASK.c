
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int,int*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (!VAR_2)
  return -VAR_0;


 FUNC_0(VAR_2, 0x40, &VAR_1);
 if (!(VAR_1 & 0x01)) {
  FUNC_2("could not find speedstep register\n");
  return -VAR_0;
 }

 VAR_1 &= 0xFFFFFFFE;
 if (!VAR_1) {
  FUNC_2("could not find speedstep register\n");
  return -VAR_0;
 }

 FUNC_1("pmbase is 0x%x\n", VAR_1);
 return 0;
}
