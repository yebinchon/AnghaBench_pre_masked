
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 unsigned long VAR_5;

 if (VAR_2 > 0x1)
  return;


 FUNC_2(VAR_5);


 VAR_4 = FUNC_0(VAR_0 + 0x50);

 FUNC_4("read at pmbase 0x%x + 0x50 returned 0x%x\n", VAR_0, VAR_4);


 VAR_4 &= 0xFE;
 VAR_4 |= VAR_2;

 FUNC_4("writing 0x%x to pmbase 0x%x + 0x50\n", VAR_4, VAR_0);


 VAR_3 = FUNC_0(VAR_0 + 0x20);
 VAR_3 |= 0x01;
 FUNC_3(VAR_3, (VAR_0 + 0x20));


 FUNC_3(VAR_4, (VAR_0 + 0x50));


 VAR_3 &= 0xfe;
 FUNC_3(VAR_3, (VAR_0 + 0x20));


 VAR_4 = FUNC_0(VAR_0 + 0x50);


 FUNC_1(VAR_5);

 FUNC_4("read at pmbase 0x%x + 0x50 returned 0x%x\n", VAR_0, VAR_4);

 if (VAR_2 == (VAR_4 & 0x1))
  FUNC_4("change to %u MHz succeeded\n",
   FUNC_6(VAR_1) / 1000);
 else
  FUNC_5("change failed - I/O error\n");

 return;
}
