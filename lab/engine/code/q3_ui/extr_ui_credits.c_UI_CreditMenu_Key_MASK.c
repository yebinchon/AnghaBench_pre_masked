
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_3__ {int draw; } ;
struct TYPE_4__ {int frame; TYPE_1__ menu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static sfxHandle_t FUNC_1( int VAR_5 ) {
 if( VAR_5 & VAR_1 ) {
  return 0;
 }

 VAR_4.frame++;
 if (VAR_4.frame == 1) {
  VAR_4.menu.draw = VAR_3;
 }
  else if (VAR_4.frame == 2) {
  VAR_4.menu.draw = VAR_2;
 }
  else {
  FUNC_0( VAR_0, "quit\n" );
 }
 return 0;
}
