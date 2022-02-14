
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct skl_wrpll_params {int kdiv; int pdiv; int qdiv_ratio; int qdiv_mode; int dco_integer; int dco_fraction; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct skl_wrpll_params *VAR_0,
          u32 VAR_1, u32 VAR_2,
          int VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6;

 switch (VAR_5) {
 case 1:
  VAR_0->kdiv = 1;
  break;
 case 2:
  VAR_0->kdiv = 2;
  break;
 case 3:
  VAR_0->kdiv = 4;
  break;
 default:
  FUNC_0(1, "Incorrect KDiv\n");
 }

 switch (VAR_3) {
 case 2:
  VAR_0->pdiv = 1;
  break;
 case 3:
  VAR_0->pdiv = 2;
  break;
 case 5:
  VAR_0->pdiv = 4;
  break;
 case 7:
  VAR_0->pdiv = 8;
  break;
 default:
  FUNC_0(1, "Incorrect PDiv\n");
 }

 FUNC_1(VAR_5 != 2 && VAR_4 != 1);

 VAR_0->qdiv_ratio = VAR_4;
 VAR_0->qdiv_mode = (VAR_4 == 1) ? 0 : 1;

 VAR_6 = FUNC_2((u64)VAR_1 << 15, VAR_2);

 VAR_0->dco_integer = VAR_6 >> 15;
 VAR_0->dco_fraction = VAR_6 & 0x7fff;
}
