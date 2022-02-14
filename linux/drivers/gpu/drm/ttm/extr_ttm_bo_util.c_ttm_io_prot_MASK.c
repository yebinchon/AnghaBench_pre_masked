
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pgprot_t ;
struct TYPE_2__ {int x86; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

pgprot_t FUNC_2(uint32_t VAR_3, pgprot_t VAR_4)
{

 if (VAR_3 & VAR_0)
  return VAR_4;


 if (VAR_3 & VAR_1)
  VAR_4 = FUNC_1(VAR_4);
 else if (VAR_2.x86 > 3)
  VAR_4 = FUNC_0(VAR_4);
 return VAR_4;
}
