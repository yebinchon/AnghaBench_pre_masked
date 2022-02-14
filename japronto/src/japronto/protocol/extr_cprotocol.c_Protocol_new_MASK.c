
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int RequestType; } ;
struct TYPE_7__ {int * prev_buffer; } ;
struct TYPE_9__ {TYPE_1__ gather; int * request_logger; int * create_task; int * write; int * transport; int * error_handler; int * matcher; int * app; int static_request; int pipeline; int parser; int * feed_disconnect; int * feed; } ;
struct TYPE_8__ {scalar_t__ (* tp_alloc ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ PyTypeObject ;
typedef int PyObject ;
typedef TYPE_3__ Protocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_5__* VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static PyObject *
FUNC_4(PyTypeObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
  Protocol* VAR_4 = ((void*)0);

  VAR_4 = (Protocol*)VAR_1->tp_alloc(VAR_1, 0);
  if(!VAR_4)
    goto finally;





  FUNC_0(&VAR_4->parser);

  FUNC_1(&VAR_4->pipeline);
  FUNC_2(VAR_0->RequestType, &VAR_4->static_request);
  VAR_4->app = ((void*)0);
  VAR_4->matcher = ((void*)0);
  VAR_4->error_handler = ((void*)0);
  VAR_4->transport = ((void*)0);
  VAR_4->write = ((void*)0);
  VAR_4->create_task = ((void*)0);
  VAR_4->request_logger = ((void*)0);

  VAR_4->gather.prev_buffer = ((void*)0);

  finally:
  return (PyObject*)VAR_4;
}
