
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int dummy; } ;





 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (struct dib8000_state*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct dib8000_state *VAR_0, int VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0, 1288) & ~(0x7 << 4);

 switch (VAR_1) {
 case 130:
   FUNC_3("SET DEM OUT OLD INTERF ON HOST BUS\n");
   FUNC_2(VAR_0, 0);
   VAR_2 |= (1 << 6);
   break;
 case 129:
   FUNC_3("SET DIBSTREAM TX ON HOST BUS\n");
   FUNC_2(VAR_0, 0);
   VAR_2 |= (1 << 5);
   break;
 case 128:
   FUNC_3("SET MPEG MUX ON HOST BUS\n");
   VAR_2 |= (1 << 4);
   break;
 default:
   break;
 }
 FUNC_1(VAR_0, 1288, VAR_2);
}
