
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* tp_free ) (int *) ;} ;
struct TYPE_6__ {int prev_buffer; } ;
struct TYPE_7__ {int parser; int feed; int feed_disconnect; int pipeline; int static_request; int app; int matcher; int error_handler; int transport; int writelines; int write; int create_task; int request_logger; TYPE_1__ gather; } ;
typedef int PyObject ;
typedef TYPE_2__ Protocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(Protocol* VAR_0)
{
  FUNC_3(VAR_0->gather.prev_buffer);
  FUNC_3(VAR_0->request_logger);
  FUNC_3(VAR_0->create_task);
  FUNC_3(VAR_0->write);
  FUNC_3(VAR_0->writelines);
  FUNC_3(VAR_0->transport);
  FUNC_3(VAR_0->error_handler);
  FUNC_3(VAR_0->matcher);
  FUNC_3(VAR_0->app);
  FUNC_4(&VAR_0->static_request);
  FUNC_1(&VAR_0->pipeline);




  FUNC_0(&VAR_0->parser);


  FUNC_2(VAR_0)->tp_free((PyObject*)VAR_0);
}
