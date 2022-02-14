
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct dib8000_state *VAR_0, u32 VAR_1,
  u32 VAR_2, u32 VAR_3, u32 VAR_4,
  u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 FUNC_2("Configure DibStream Rx synchroMode = %d\n", VAR_3);

 if ((VAR_1 != 0) && (VAR_2 != 0)) {
  VAR_8 = FUNC_1(VAR_1, VAR_2,
    VAR_4, VAR_6);
  FUNC_0(VAR_0, 1542, VAR_8);
 }

 FUNC_0(VAR_0, 1554, 1);
 FUNC_0(VAR_0, 1536, VAR_1);
 FUNC_0(VAR_0, 1537, VAR_2);
 FUNC_0(VAR_0, 1539, VAR_3);
 FUNC_0(VAR_0, 1540, (VAR_5 >> 16) & 0xffff);
 FUNC_0(VAR_0, 1541, VAR_5 & 0xffff);
 FUNC_0(VAR_0, 1543, VAR_6);
 FUNC_0(VAR_0, 1544, VAR_7);
 FUNC_0(VAR_0, 1554, 0);
}
