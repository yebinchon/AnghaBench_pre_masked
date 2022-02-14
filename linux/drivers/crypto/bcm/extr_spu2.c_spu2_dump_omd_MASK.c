
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0, u16 VAR_1, u16 VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 u8 *VAR_5 = VAR_0;

 FUNC_1(" OMD:\n");

 if (VAR_1) {
  FUNC_1("  Hash Key Length %u bytes\n", VAR_1);
  FUNC_0("  KEY: ", VAR_5, VAR_1);
  VAR_5 += VAR_1;
 }

 if (VAR_2) {
  FUNC_1("  Cipher Key Length %u bytes\n", VAR_2);
  FUNC_0("  KEY: ", VAR_5, VAR_2);
  VAR_5 += VAR_2;
 }

 if (VAR_3) {
  FUNC_1("  Hash IV Length %u bytes\n", VAR_3);
  FUNC_0("  hash IV: ", VAR_5, VAR_3);
  VAR_5 += VAR_2;
 }

 if (VAR_4) {
  FUNC_1("  Cipher IV Length %u bytes\n", VAR_4);
  FUNC_0("  cipher IV: ", VAR_5, VAR_4);
 }
}
