
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct TYPE_2__ {unsigned int lfb_linelength; } ;


 unsigned long* FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned long*,unsigned int) ;
 int FUNC_2 (unsigned long*,int ,unsigned int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1)
{
 unsigned long *VAR_2;
 u16 VAR_3;

 VAR_3 = VAR_0.lfb_linelength;
 VAR_2 = FUNC_0(VAR_1*VAR_3, VAR_3);
 if (!VAR_2)
  return;

 FUNC_2(VAR_2, 0, VAR_3);
 FUNC_1(VAR_2, VAR_3);
}
