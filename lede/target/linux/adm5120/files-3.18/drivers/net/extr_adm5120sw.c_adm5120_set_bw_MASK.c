
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(char *VAR_2)
{
 unsigned long VAR_3;


 VAR_3 = VAR_2[0] + (VAR_2[1]<<8) + (VAR_2[2]<<16) + (VAR_2[3]<<24);
 FUNC_2(VAR_0, VAR_3);


 VAR_3 = VAR_2[4];
 if (VAR_2[5] == 1)
  FUNC_2(VAR_1, VAR_3 | 0x80000000);
 else
  FUNC_2(VAR_1, VAR_3 & ~0x8000000);

 FUNC_0("D: ctl0 0x%ux, ctl1 0x%ux\n", FUNC_1(VAR_0),
  FUNC_1(VAR_1));
}
