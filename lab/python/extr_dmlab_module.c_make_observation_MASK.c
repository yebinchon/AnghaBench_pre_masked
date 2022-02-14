
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bytes; scalar_t__ doubles; int string; } ;
struct TYPE_5__ {scalar_t__ type; long* shape; int dims; } ;
struct TYPE_7__ {TYPE_2__ payload; TYPE_1__ spec; } ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_3__ EnvCApi_Observation ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,long*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int FUNC_6 (int ,long) ;
 int * FUNC_7 (int ) ;
 long* FUNC_8 (int,int) ;
 int FUNC_9 (long*) ;
 int FUNC_10 (int ,void const*,int ) ;

__attribute__((used)) static PyObject* FUNC_11(const EnvCApi_Observation* VAR_3) {
  if (VAR_3->spec.type == VAR_1) {
    PyObject* VAR_4 =



        FUNC_6(

            VAR_3->payload.string, VAR_3->spec.shape[0]);

    if (VAR_4 == ((void*)0)) FUNC_4();
    return VAR_4;
  }

  int VAR_5 = FUNC_0(VAR_3->spec.type);
  if (VAR_5 == -1) {
    FUNC_5(VAR_2, "Invalid observation spec.");
    return ((void*)0);
  }

  long* VAR_6 = FUNC_8(VAR_3->spec.dims, sizeof(long));
  if (VAR_6 == ((void*)0)) {
    FUNC_4();
    return ((void*)0);
  }

  for (int VAR_7 = 0; VAR_7 < VAR_3->spec.dims; ++VAR_7) {
    VAR_6[VAR_7] = VAR_3->spec.shape[VAR_7];
  }

  PyArrayObject* VAR_8 = (PyArrayObject*)FUNC_3(
      VAR_3->spec.dims, VAR_6, VAR_5);
  FUNC_9(VAR_6);

  if (VAR_8 == ((void*)0)) {
    FUNC_4();
    return ((void*)0);
  }

  const void* VAR_9 = VAR_3->spec.type == VAR_0
                            ? (void*)VAR_3->payload.doubles
                            : (void*)VAR_3->payload.bytes;
  FUNC_10(FUNC_1(VAR_8), VAR_9, FUNC_2(VAR_8));
  return (PyObject*)VAR_8;
}
