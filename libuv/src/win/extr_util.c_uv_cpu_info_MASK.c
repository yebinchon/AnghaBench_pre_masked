
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int user; int sys; int idle; int irq; scalar_t__ nice; } ;
struct TYPE_19__ {int QuadPart; } ;
struct TYPE_18__ {int QuadPart; } ;
struct TYPE_17__ {int QuadPart; } ;
struct TYPE_16__ {int QuadPart; } ;
struct TYPE_21__ {int speed; struct TYPE_21__* model; TYPE_5__ cpu_times; TYPE_4__ InterruptTime; TYPE_3__ IdleTime; TYPE_2__ KernelTime; TYPE_1__ UserTime; } ;
typedef TYPE_6__ uv_cpu_info_t ;
typedef int cpu_speed ;
typedef int cpu_brand ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_22__ {int dwNumberOfProcessors; } ;
typedef TYPE_6__ SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION ;
typedef TYPE_8__ SYSTEM_INFO ;
typedef int NTSTATUS ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int ,int *) ;
 int FUNC_5 (int ,char*,int *,int *,int *,int*) ;
 int VAR_4 ;
 size_t FUNC_6 (int *,size_t,char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,TYPE_6__*,int,int*) ;
 int FUNC_9 (int ) ;
 TYPE_6__* FUNC_10 (int,int) ;
 int FUNC_11 (int *,int,TYPE_6__**) ;
 int FUNC_12 (TYPE_6__*) ;
 TYPE_6__* FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;

int FUNC_16(uv_cpu_info_t** VAR_5, int* VAR_6) {
  uv_cpu_info_t* VAR_7;
  SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION* VAR_8;
  DWORD VAR_9;
  SYSTEM_INFO VAR_10;
  DWORD VAR_11, VAR_12;
  NTSTATUS VAR_13;
  ULONG VAR_14;
  int VAR_15;
  uv_cpu_info_t* VAR_16;

  VAR_7 = ((void*)0);
  VAR_11 = 0;
  VAR_8 = ((void*)0);

  FUNC_14();

  FUNC_1(&VAR_10);
  VAR_11 = VAR_10.dwNumberOfProcessors;

  VAR_7 = FUNC_10(VAR_11, sizeof *VAR_7);
  if (VAR_7 == ((void*)0)) {
    VAR_15 = VAR_0;
    goto error;
  }

  VAR_9 = VAR_11 * sizeof(*VAR_8);
  VAR_8 = FUNC_13(VAR_9);
  if (VAR_8 == ((void*)0)) {
    VAR_15 = VAR_0;
    goto error;
  }

  VAR_13 = FUNC_8(VAR_4,
                                     VAR_8,
                                     VAR_9,
                                     &VAR_14);
  if (!FUNC_2(VAR_13)) {
    VAR_15 = FUNC_9(VAR_13);
    goto error;
  }

  FUNC_7(VAR_14 == VAR_9);

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
    WCHAR VAR_17[128];
    HKEY VAR_18;
    DWORD VAR_19;
    DWORD VAR_20 = sizeof(VAR_19);
    WCHAR VAR_21[256];
    DWORD VAR_22 = sizeof(VAR_21);
    size_t VAR_23;

    VAR_23 = FUNC_6(VAR_17,
                     FUNC_0(VAR_17),
                     L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\%d",
                     VAR_12);

    FUNC_7(VAR_23 > 0 && VAR_23 < FUNC_0(VAR_17));

    VAR_15 = FUNC_4(VAR_2,
                        VAR_17,
                        0,
                        VAR_3,
                        &VAR_18);
    if (VAR_15 != VAR_1) {
      goto error;
    }

    VAR_15 = FUNC_5(VAR_18,
                           L"~MHz",
                           ((void*)0),
                           ((void*)0),
                           (BYTE*)&VAR_19,
                           &VAR_20);
    if (VAR_15 != VAR_1) {
      FUNC_3(VAR_18);
      goto error;
    }

    VAR_15 = FUNC_5(VAR_18,
                           L"ProcessorNameString",
                           ((void*)0),
                           ((void*)0),
                           (BYTE*)&VAR_21,
                           &VAR_22);
    FUNC_3(VAR_18);
    if (VAR_15 != VAR_1)
      goto error;

    VAR_16 = &VAR_7[VAR_12];
    VAR_16->speed = VAR_19;
    VAR_16->cpu_times.user = VAR_8[VAR_12].UserTime.QuadPart / 10000;
    VAR_16->cpu_times.sys = (VAR_8[VAR_12].KernelTime.QuadPart -
        VAR_8[VAR_12].IdleTime.QuadPart) / 10000;
    VAR_16->cpu_times.idle = VAR_8[VAR_12].IdleTime.QuadPart / 10000;
    VAR_16->cpu_times.irq = VAR_8[VAR_12].InterruptTime.QuadPart / 10000;
    VAR_16->cpu_times.nice = 0;

    FUNC_11(VAR_21,
                              VAR_22 / sizeof(WCHAR),
                              &(VAR_16->model));
  }

  FUNC_12(VAR_8);

  *VAR_6 = VAR_11;
  *VAR_5 = VAR_7;

  return 0;

 error:
  if (VAR_7 != ((void*)0)) {

    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
      FUNC_12(VAR_7[VAR_12].model);
  }

  FUNC_12(VAR_7);
  FUNC_12(VAR_8);

  return FUNC_15(VAR_15);
}
