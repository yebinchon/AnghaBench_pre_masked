
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sysc {int dev; scalar_t__ module_va; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int ) ;
 int FUNC_2 (struct sysc*,int,int) ;

__attribute__((used)) static void FUNC_3(struct sysc *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5;

 VAR_2 = 0x34;
 VAR_3 = 0x48;

 FUNC_2(VAR_1, VAR_3, 0xaaaa);
 VAR_4 = FUNC_1(VAR_1->module_va + VAR_2, VAR_5,
       !(VAR_5 & 0x10), 100,
       VAR_0);
 if (VAR_4)
  FUNC_0(VAR_1->dev, "wdt disable step1 failed\n");

 FUNC_2(VAR_1, VAR_3, 0x5555);
 VAR_4 = FUNC_1(VAR_1->module_va + VAR_2, VAR_5,
       !(VAR_5 & 0x10), 100,
       VAR_0);
 if (VAR_4)
  FUNC_0(VAR_1->dev, "wdt disable step2 failed\n");
}
