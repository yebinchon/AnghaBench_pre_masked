
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int stack_buffer ;
struct TYPE_10__ {int CounterNameTitleIndex; int CounterSize; int CounterOffset; int CounterType; int ByteLength; } ;
struct TYPE_9__ {int HeaderLength; int Signature; } ;
struct TYPE_7__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
struct TYPE_8__ {scalar_t__ NumInstances; int HeaderLength; int NumCounters; int DefinitionLength; TYPE_2__ PerfFreq; TYPE_1__ PerfTime; } ;
typedef TYPE_3__ PERF_OBJECT_TYPE ;
typedef TYPE_4__ PERF_DATA_BLOCK ;
typedef TYPE_5__ PERF_COUNTER_DEFINITION ;
typedef scalar_t__ LONG ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int *,int *,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 double FUNC_1 (double) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

int FUNC_6(double* VAR_8) {
  BYTE VAR_9[4096];
  BYTE* VAR_10 = ((void*)0);
  BYTE* VAR_11 = (BYTE*) VAR_9;
  size_t VAR_12 = sizeof(VAR_9);
  DWORD VAR_13;

  PERF_DATA_BLOCK* VAR_14;
  PERF_OBJECT_TYPE* VAR_15;
  PERF_COUNTER_DEFINITION* VAR_16;

  DWORD VAR_17;

  for (;;) {
    LONG VAR_18;

    VAR_13 = (DWORD) VAR_12;
    VAR_18 = FUNC_0(VAR_2,
                              L"2",
                              ((void*)0),
                              ((void*)0),
                              VAR_11,
                              &VAR_13);
    if (VAR_18 == VAR_1) {
      break;
    } else if (VAR_18 != VAR_0) {
      *VAR_8 = 0;
      return FUNC_4(VAR_18);
    }

    VAR_12 *= 2;

    if (VAR_12 > 1 << 20) {
      goto internalError;
    }

    FUNC_2(VAR_10);

    VAR_11 = VAR_10 = (BYTE*) FUNC_3(VAR_12);
    if (VAR_10 == ((void*)0)) {
      *VAR_8 = 0;
      return VAR_6;
    }
  }

  if (VAR_13 < sizeof(*VAR_14))
    goto internalError;

  VAR_14 = (PERF_DATA_BLOCK*) VAR_11;

  if (FUNC_5(VAR_14->Signature, L"PERF", 4) != 0)
    goto internalError;

  if (VAR_13 < VAR_14->HeaderLength + sizeof(*VAR_15))
    goto internalError;

  VAR_15 = (PERF_OBJECT_TYPE*) (VAR_11 + VAR_14->HeaderLength);

  if (VAR_15->NumInstances != VAR_3)
    goto internalError;

  VAR_16 = (PERF_COUNTER_DEFINITION*) (VAR_11 +
      VAR_14->HeaderLength + VAR_15->HeaderLength);
  for (VAR_17 = 0; VAR_17 < VAR_15->NumCounters; VAR_17++) {
    if ((BYTE*) VAR_16 + sizeof(*VAR_16) >
        VAR_11 + VAR_13) {
      break;
    }

    if (VAR_16->CounterNameTitleIndex == 674 &&
        VAR_16->CounterSize == sizeof(uint64_t)) {
      if (VAR_16->CounterOffset + sizeof(uint64_t) > VAR_13 ||
          !(VAR_16->CounterType & VAR_4)) {
        goto internalError;
      } else {
        BYTE* VAR_19 = (BYTE*) VAR_15 + VAR_15->DefinitionLength +
                        VAR_16->CounterOffset;
        uint64_t VAR_20 = *((uint64_t*) VAR_19);
        *VAR_8 = FUNC_1((double) (VAR_15->PerfTime.QuadPart - VAR_20) /
                        (double) VAR_15->PerfFreq.QuadPart);
        FUNC_2(VAR_10);
        return 0;
      }
    }

    VAR_16 = (PERF_COUNTER_DEFINITION*)
        ((BYTE*) VAR_16 + VAR_16->ByteLength);
  }


  FUNC_2(VAR_10);
  *VAR_8 = 0;
  return VAR_7;

 internalError:
  FUNC_2(VAR_10);
  *VAR_8 = 0;
  return VAR_5;
}
