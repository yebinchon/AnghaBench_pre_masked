
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct skl_wrpll_params {int central_freq; int pdiv; int kdiv; int qdiv_ratio; int qdiv_mode; int dco_integer; int dco_fraction; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct skl_wrpll_params *VAR_0,
          u64 VAR_1,
          u64 VAR_2,
          u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u64 VAR_6;

 switch (VAR_2) {
 case 9600000000ULL:
  VAR_0->central_freq = 0;
  break;
 case 9000000000ULL:
  VAR_0->central_freq = 1;
  break;
 case 8400000000ULL:
  VAR_0->central_freq = 3;
 }

 switch (VAR_3) {
 case 1:
  VAR_0->pdiv = 0;
  break;
 case 2:
  VAR_0->pdiv = 1;
  break;
 case 3:
  VAR_0->pdiv = 2;
  break;
 case 7:
  VAR_0->pdiv = 4;
  break;
 default:
  FUNC_1(1, "Incorrect PDiv\n");
 }

 switch (VAR_5) {
 case 5:
  VAR_0->kdiv = 0;
  break;
 case 2:
  VAR_0->kdiv = 1;
  break;
 case 3:
  VAR_0->kdiv = 2;
  break;
 case 1:
  VAR_0->kdiv = 3;
  break;
 default:
  FUNC_1(1, "Incorrect KDiv\n");
 }

 VAR_0->qdiv_ratio = VAR_4;
 VAR_0->qdiv_mode = (VAR_0->qdiv_ratio == 1) ? 0 : 1;

 VAR_6 = VAR_3 * VAR_4 * VAR_5 * VAR_1;





 VAR_0->dco_integer = FUNC_2(VAR_6, 24 * FUNC_0(1));
 VAR_0->dco_fraction =
  FUNC_2((FUNC_2(VAR_6, 24) -
    VAR_0->dco_integer * FUNC_0(1)) * 0x8000, FUNC_0(1));
}
