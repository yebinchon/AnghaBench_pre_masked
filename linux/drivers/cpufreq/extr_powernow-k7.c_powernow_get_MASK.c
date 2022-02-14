
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int CFID; } ;
union msr_fidvidstatus {TYPE_1__ bits; int val; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3)
{
 union msr_fidvidstatus VAR_4;
 unsigned int VAR_5;

 if (VAR_3)
  return 0;
 FUNC_0(VAR_0, VAR_4.val);
 VAR_5 = VAR_4.bits.CFID;

 return VAR_2 * VAR_1[VAR_5] / 10;
}
