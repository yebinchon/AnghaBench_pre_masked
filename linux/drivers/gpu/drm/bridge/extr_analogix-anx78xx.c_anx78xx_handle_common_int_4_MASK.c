
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct anx78xx {int * edid; int * map; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct anx78xx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct anx78xx *VAR_4, u8 VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;

 FUNC_0("Handle common interrupt 4: %02x\n", VAR_5);

 VAR_7 = FUNC_4(VAR_4->map[VAR_0],
      VAR_1, VAR_5);
 if (VAR_7) {
  FUNC_1("Failed to write SP_COMMON_INT_STATUS4 %d\n", VAR_7);
  return VAR_6;
 }

 if (VAR_5 & VAR_2) {
  FUNC_0("IRQ: Hot plug detect - cable is pulled out\n");
  VAR_6 = 1;
  FUNC_2(VAR_4);

  FUNC_3(VAR_4->edid);
  VAR_4->edid = ((void*)0);
 } else if (VAR_5 & VAR_3) {
  FUNC_0("IRQ: Hot plug detect - cable plug\n");
  VAR_6 = 1;
 }

 return VAR_6;
}
