
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_6, int VAR_7)
{
 int VAR_8;


 FUNC_6(VAR_6, "%-8s %08x  %-8s %08x  %-8s %08x\n"
  , "Q_TXE", FUNC_5(VAR_5, VAR_4)
  , "Q_TXD", FUNC_5(VAR_5, VAR_3)
  , "Q_RDYTIMSHD", FUNC_5(VAR_5, VAR_2)
 );
 FUNC_6(VAR_6, "Q_ONESHOTARM_SC %08x  Q_ONESHOTARM_CC %08x\n"
  , FUNC_5(VAR_5, VAR_1)
  , FUNC_5(VAR_5, VAR_0)
 );
 for (VAR_8 = 0; VAR_8 < 10; VAR_8++)
  FUNC_6(VAR_6, "Q[%u] TXDP %08x CBR %08x RDYT %08x MISC %08x STS %08x\n"
   , VAR_8
   , FUNC_5(VAR_5, FUNC_4(VAR_8))
   , FUNC_5(VAR_5, FUNC_0(VAR_8))
   , FUNC_5(VAR_5, FUNC_2(VAR_8))
   , FUNC_5(VAR_5, FUNC_1(VAR_8))
   , FUNC_5(VAR_5, FUNC_3(VAR_8))
  );
}
