
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void FUNC_7(int VAR_8)
{
 unsigned VAR_9, VAR_10[] = { VAR_4 >> 4, VAR_5 >> 4, VAR_7 >> 4 };
 const char * const VAR_11[] = { "ID", "VERSION", "SPIV" };
 int VAR_12;
 u32 VAR_13;

 FUNC_4("Inquiring remote APIC 0x%x...\n", VAR_8);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_10); VAR_9++) {
  FUNC_4("... APIC 0x%x %s: ", VAR_8, VAR_11[VAR_9]);




  VAR_13 = FUNC_5();
  if (VAR_13)
   FUNC_3("a previous APIC delivery may have failed\n");

  FUNC_1(VAR_0 | VAR_10[VAR_9], VAR_8);

  VAR_12 = 0;
  do {
   FUNC_6(100);
   VAR_13 = FUNC_2(VAR_1) & VAR_3;
  } while (VAR_13 == VAR_2 && VAR_12++ < 1000);

  switch (VAR_13) {
  case 128:
   VAR_13 = FUNC_2(VAR_6);
   FUNC_3("%08x\n", VAR_13);
   break;
  default:
   FUNC_3("failed\n");
  }
 }
}
