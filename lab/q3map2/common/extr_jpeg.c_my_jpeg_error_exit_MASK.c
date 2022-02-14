
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_8__ {int setjmp_buffer; } ;
typedef TYPE_3__ bt_jpeg_error_mgr ;
struct TYPE_7__ {TYPE_1__* err; } ;
struct TYPE_6__ {int (* format_message ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2( j_common_ptr VAR_1 ){
 bt_jpeg_error_mgr* VAR_2 = (bt_jpeg_error_mgr*) VAR_1->err;

 ( *VAR_1->err->format_message )( VAR_1, VAR_0 );

 FUNC_0( VAR_2->setjmp_buffer, 1 );
}
