
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ciabase {unsigned char icr_data; int icr_mask; int int_mask; TYPE_1__* cia; } ;
struct TYPE_4__ {int intreq; } ;
struct TYPE_3__ {unsigned char icr; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

unsigned char FUNC_0(struct ciabase *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5;

 VAR_5 = (VAR_3->icr_data |= VAR_3->cia->icr);
 if (VAR_4 & VAR_0)
  VAR_3->icr_data |= VAR_4;
 else
  VAR_3->icr_data &= ~VAR_4;
 if (VAR_3->icr_data & VAR_3->icr_mask)
  VAR_2.intreq = VAR_1 | VAR_3->int_mask;
 return VAR_5 & VAR_3->icr_mask;
}
