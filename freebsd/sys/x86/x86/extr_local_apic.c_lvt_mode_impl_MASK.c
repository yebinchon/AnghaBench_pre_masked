
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct lvt {scalar_t__ lvt_edgetrigger; scalar_t__ lvt_activehi; int lvt_mode; int lvt_vector; scalar_t__ lvt_masked; } ;
struct lapic {int la_id; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lapic *VAR_7, struct lvt *VAR_8, u_int VAR_9, uint32_t VAR_10)
{

 VAR_10 &= ~(VAR_3 | VAR_4 | VAR_1 | VAR_0 |
     VAR_5);
 if (VAR_8->lvt_edgetrigger == 0)
  VAR_10 |= VAR_4;
 if (VAR_8->lvt_activehi == 0)
  VAR_10 |= VAR_2;
 if (VAR_8->lvt_masked)
  VAR_10 |= VAR_3;
 VAR_10 |= VAR_8->lvt_mode;
 switch (VAR_8->lvt_mode) {
 case 129:
 case 128:
 case 130:
 case 132:
  if (!VAR_8->lvt_edgetrigger && VAR_6) {
   FUNC_1("lapic%u: Forcing LINT%u to edge trigger\n",
       VAR_7->la_id, VAR_9);
   VAR_10 &= ~VAR_4;
  }

  break;
 case 131:
  VAR_10 |= VAR_8->lvt_vector;
  break;
 default:
  FUNC_0("bad APIC LVT delivery mode: %#x\n", VAR_10);
 }
 return (VAR_10);
}
