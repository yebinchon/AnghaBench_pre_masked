
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_pipe_t ;
struct TYPE_7__ {int iocp; } ;
typedef TYPE_2__ uv_loop_t ;
typedef int ULONG_PTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (char*,int,int,int,int,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,char*,size_t) ;

int FUNC_6(uv_loop_t* VAR_9, uv_pipe_t* VAR_10, DWORD VAR_11,
    char* VAR_12, size_t VAR_13) {
  HANDLE VAR_14;
  int VAR_15;
  char* VAR_16 = (char*)VAR_10;

  for (;;) {
    FUNC_5(VAR_16, VAR_12, VAR_13);

    VAR_14 = FUNC_2(VAR_12,
      VAR_11 | VAR_3 | VAR_2 | VAR_8,
      VAR_6 | VAR_5 | VAR_7, 1, 65536, 65536, 0,
      ((void*)0));

    if (VAR_14 != VAR_4) {

      break;
    }

    VAR_15 = FUNC_3();
    if (VAR_15 != VAR_1 && VAR_15 != VAR_0) {
      goto error;
    }


    VAR_16++;
  }

  if (FUNC_1(VAR_14,
                             VAR_9->iocp,
                             (ULONG_PTR)VAR_10,
                             0) == ((void*)0)) {
    VAR_15 = FUNC_3();
    goto error;
  }

  FUNC_4(VAR_10);
  VAR_10->handle = VAR_14;

  return 0;

 error:
  if (VAR_14 != VAR_4) {
    FUNC_0(VAR_14);
  }

  return VAR_15;
}
