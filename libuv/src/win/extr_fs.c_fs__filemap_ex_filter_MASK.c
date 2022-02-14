
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ExceptionRecord; } ;
struct TYPE_4__ {int NumberParameters; int * ExceptionInformation; } ;
typedef TYPE_2__* PEXCEPTION_POINTERS ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

LONG FUNC_2(LONG VAR_5, PEXCEPTION_POINTERS VAR_6,
                           int* VAR_7) {
  if (VAR_5 != VAR_3) {
    return VAR_1;
  }

  FUNC_0(VAR_7 != ((void*)0));
  if (VAR_6 != ((void*)0) && VAR_6->ExceptionRecord != ((void*)0) &&
      VAR_6->ExceptionRecord->NumberParameters >= 3) {
    NTSTATUS VAR_8 = (NTSTATUS)VAR_6->ExceptionRecord->ExceptionInformation[3];
    *VAR_7 = FUNC_1(VAR_8);
    if (*VAR_7 != VAR_0) {
      return VAR_2;
    }
  }
  *VAR_7 = VAR_4;
  return VAR_2;
}
