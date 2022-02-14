
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 u_int VAR_7[4];
 int VAR_8;
 int VAR_9;


 VAR_9 = (VAR_3 & VAR_0) != 0 ?
     (VAR_5 & VAR_1) >> 16 : 1;
 if (VAR_9 <= 1)
  return;

 if (VAR_4 >= 0x4) {
  FUNC_1(0x04, 0, VAR_7);
  VAR_8 = ((VAR_7[0] >> 26) & 0x3f) + 1;
 } else
  VAR_8 = 1;

 VAR_2 = FUNC_2(VAR_9/VAR_8);
 FUNC_0(VAR_2 >= 0,
     ("intel topo: max_cores > max_logical\n"));
 VAR_6 = VAR_2 + FUNC_2(VAR_8);
}
