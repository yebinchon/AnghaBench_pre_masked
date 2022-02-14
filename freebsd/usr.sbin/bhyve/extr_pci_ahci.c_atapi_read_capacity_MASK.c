
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct ahci_port {int bctx; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahci_port*,int,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct ahci_port *VAR_4, int VAR_5, uint8_t *VAR_6)
{
 uint8_t VAR_7[8];
 uint64_t VAR_8;

 VAR_8 = FUNC_2(VAR_4->bctx) / 2048;
 FUNC_1(VAR_7, VAR_8 - 1);
 FUNC_1(VAR_7 + 4, 2048);
 VAR_6[4] = (VAR_6[4] & ~7) | VAR_0 | VAR_1;
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, sizeof(VAR_7));
 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3 | VAR_2);
}
