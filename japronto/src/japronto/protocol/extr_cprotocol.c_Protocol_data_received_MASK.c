
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parser; int feed; int read_ops; } ;
typedef int PyObject ;
typedef TYPE_1__ Protocol ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static PyObject*
FUNC_3(Protocol* VAR_1, PyObject* VAR_2)
{
  if(!FUNC_0(&VAR_1->parser, VAR_2))
    goto error;


  goto finally;

  error:
  return ((void*)0);
  finally:
  VAR_0;
}
