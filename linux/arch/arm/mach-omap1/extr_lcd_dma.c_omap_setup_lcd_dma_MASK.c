
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int single_transfer; int active; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 FUNC_0(VAR_3.active);
 if (!FUNC_1()) {

  FUNC_3(0x5440, VAR_0);
  FUNC_3(0x9102, VAR_1);
  FUNC_3(0x0004, VAR_2);
 }
 FUNC_4();
 if (!FUNC_1()) {
  u16 VAR_4;

  VAR_4 = FUNC_2(VAR_0);





  VAR_4 |= 1 << 11;
  if (!VAR_3.single_transfer)
   VAR_4 |= (3 << 8);
  FUNC_3(VAR_4, VAR_0);
 }
}
