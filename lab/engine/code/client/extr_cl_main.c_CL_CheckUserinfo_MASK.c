
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;

void FUNC_4( void ) {

 if(VAR_2.state < VAR_0)
  return;


 if(FUNC_1())
  return;


 if(VAR_3 & VAR_1)
 {
  VAR_3 &= ~VAR_1;
  FUNC_0(FUNC_3("userinfo \"%s\"", FUNC_2( VAR_1 ) ), VAR_4);
 }
}
