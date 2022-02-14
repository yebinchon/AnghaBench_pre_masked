
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct region_descriptor {scalar_t__ rd_base; scalar_t__ rd_limit; } ;
struct TYPE_2__ {int RESCFG; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct region_descriptor*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct region_descriptor VAR_4;
 int VAR_5;

 FUNC_2();
 FUNC_5(VAR_1 + 4, 0xFE);
 FUNC_0(500000);
 FUNC_5(0xcf9, 0x2);
 FUNC_5(0xcf9, 0x6);
 FUNC_0(500000);
 VAR_5 = FUNC_3(0x92);
 if (VAR_5 != 0xff) {
  if ((VAR_5 & 0x1) != 0)
   FUNC_5(0x92, VAR_5 & 0xfe);
  FUNC_5(0x92, VAR_5 | 0x1);
  FUNC_0(500000);
 }

 FUNC_7("No known reset method worked, attempting CPU shutdown\n");
 FUNC_0(1000000);


 VAR_4.rd_limit = 0;
 VAR_4.rd_base = 0;
 FUNC_4(&VAR_4);


 FUNC_1();


 while(1);
}
