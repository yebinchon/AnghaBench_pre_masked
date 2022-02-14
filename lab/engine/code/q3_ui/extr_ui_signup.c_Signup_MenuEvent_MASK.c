
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int id; } ;
typedef TYPE_9__ menucommon_s ;
struct TYPE_18__ {int buffer; } ;
struct TYPE_19__ {TYPE_7__ field; } ;
struct TYPE_16__ {int buffer; } ;
struct TYPE_17__ {TYPE_5__ field; } ;
struct TYPE_14__ {int buffer; } ;
struct TYPE_15__ {TYPE_3__ field; } ;
struct TYPE_12__ {int buffer; } ;
struct TYPE_13__ {TYPE_1__ field; } ;
struct TYPE_11__ {TYPE_8__ email_box; TYPE_6__ password_box; TYPE_4__ name_box; TYPE_2__ again_box; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_10__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4( void* VAR_2, int VAR_3 ) {


 if( VAR_3 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 128:
  if( FUNC_2(VAR_1.password_box.field.buffer,
   VAR_1.again_box.field.buffer) != 0 )
  {

   break;
  }
  FUNC_3(
   VAR_1.name_box.field.buffer,
   VAR_1.password_box.field.buffer,
   VAR_1.email_box.field.buffer );

  FUNC_0();
  break;

 case 129:
  FUNC_1();
  break;
 }
}
