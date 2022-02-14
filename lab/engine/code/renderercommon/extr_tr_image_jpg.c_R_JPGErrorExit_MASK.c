
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int setjmp_buffer; } ;
typedef TYPE_2__ q_jpeg_error_mgr_t ;
typedef TYPE_3__* j_common_ptr ;
struct TYPE_10__ {int (* Printf ) (int ,char*,char*) ;} ;
struct TYPE_9__ {TYPE_1__* err; } ;
struct TYPE_7__ {int (* format_message ) (TYPE_3__*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(j_common_ptr VAR_3)
{
  char VAR_4[VAR_0];


  q_jpeg_error_mgr_t *VAR_5 = (q_jpeg_error_mgr_t *)VAR_3->err;

  (*VAR_3->err->format_message) (VAR_3, VAR_4);

  VAR_2.Printf(VAR_1, "Error: %s", VAR_4);


  FUNC_0(VAR_5->setjmp_buffer, 1);
}
