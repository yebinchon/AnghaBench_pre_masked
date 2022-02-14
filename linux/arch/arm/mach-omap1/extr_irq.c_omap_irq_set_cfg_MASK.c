
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long,int,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 signed int VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_1);

 VAR_2 = VAR_5 ? 0 : (VAR_2 & 0x1);
 VAR_6 = VAR_2 | ((VAR_3 & 0x1f) << 2) | ((VAR_4 & 0x1) << 1);
 VAR_7 = VAR_0 + FUNC_1(VAR_1) * 0x4;
 FUNC_2(VAR_6, VAR_5, VAR_7);
}
