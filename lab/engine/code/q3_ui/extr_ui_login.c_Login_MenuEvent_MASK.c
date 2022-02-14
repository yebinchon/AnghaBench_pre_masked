
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
typedef TYPE_5__ menucommon_s ;
struct TYPE_9__ {int buffer; } ;
struct TYPE_10__ {TYPE_3__ field; } ;
struct TYPE_7__ {int buffer; } ;
struct TYPE_8__ {TYPE_1__ field; } ;
struct TYPE_12__ {TYPE_4__ password_box; TYPE_2__ name_box; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( void* VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 128:
  FUNC_2(
   VAR_1.name_box.field.buffer,
   VAR_1.password_box.field.buffer );

  FUNC_0();
  break;

 case 129:
  FUNC_1();
  break;
 }
}
