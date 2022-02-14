
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptn3460_bridge {char edid_emulation; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ptn3460_bridge*,int ,char) ;

__attribute__((used)) static int FUNC_2(struct ptn3460_bridge *VAR_4)
{
 int VAR_5;
 char VAR_6;


 VAR_5 = FUNC_1(VAR_4, VAR_3,
   VAR_4->edid_emulation);
 if (VAR_5) {
  FUNC_0("Failed to transfer EDID to sram, ret=%d\n", VAR_5);
  return VAR_5;
 }


 VAR_6 = 1 << VAR_2 |
  VAR_4->edid_emulation << VAR_1;

 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_6);
 if (VAR_5) {
  FUNC_0("Failed to write EDID value, ret=%d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
