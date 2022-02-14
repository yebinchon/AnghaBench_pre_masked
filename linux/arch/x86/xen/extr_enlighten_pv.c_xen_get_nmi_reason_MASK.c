
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nmi_reason; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 TYPE_2__* VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static unsigned char FUNC_1(void)
{
 unsigned char VAR_5 = 0;


 if (FUNC_0(VAR_3,
       &VAR_0->arch.nmi_reason))
  VAR_5 |= VAR_1;
 if (FUNC_0(VAR_4,
       &VAR_0->arch.nmi_reason))
  VAR_5 |= VAR_2;

 return VAR_5;
}
