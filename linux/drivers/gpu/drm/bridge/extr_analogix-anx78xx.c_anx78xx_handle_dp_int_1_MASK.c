
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct anx78xx {int * map; } ;


 int FUNC_0 (char*,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct anx78xx*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct anx78xx *VAR_3, u8 VAR_4)
{
 int VAR_5;

 FUNC_0("Handle DP interrupt 1: %02x\n", VAR_4);

 VAR_5 = FUNC_2(VAR_3->map[VAR_0], VAR_1,
      VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 & VAR_2) {
  FUNC_0("IRQ: hardware link training finished\n");
  VAR_5 = FUNC_1(VAR_3);
 }

 return VAR_5;
}
