
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isac_hw {int state; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*) ;
 int FUNC_2 (char*,int ,int,...) ;

__attribute__((used)) static void
FUNC_3(struct isac_hw *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_2("%s: ISACX CIR0 %02X\n", VAR_2->name, VAR_3);
 if (VAR_3 & VAR_1) {
  FUNC_2("%s: ph_state change %x->%x\n", VAR_2->name,
    VAR_2->state, VAR_3 >> 4);
  VAR_2->state = VAR_3 >> 4;
  FUNC_1(VAR_2);
 }
}
