
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int mas1; } ;
typedef TYPE_1__ tlb_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(void)
{
 tlb_entry_t VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(&VAR_2, VAR_3);
  if ((VAR_2.mas1 & VAR_0) == 0)
   return (VAR_3);
 }
 return (-1);
}
