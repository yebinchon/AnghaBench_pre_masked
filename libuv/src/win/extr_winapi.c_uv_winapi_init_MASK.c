
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sSetWinEventHook ;
typedef int * sRtlNtStatusToDosError ;
typedef scalar_t__ sRtlGetVersion ;
typedef scalar_t__ sRtlGenRandom ;
typedef scalar_t__ sPowerRegisterSuspendResumeNotification ;
typedef int * sNtSetInformationFile ;
typedef int * sNtQueryVolumeInformationFile ;
typedef int * sNtQuerySystemInformation ;
typedef int * sNtQueryInformationProcess ;
typedef int * sNtQueryInformationFile ;
typedef scalar_t__ sNtQueryDirectoryFile ;
typedef int * sNtDeviceIoControlFile ;
typedef scalar_t__ sGetQueuedCompletionStatusEx ;
typedef int * HMODULE ;


 int FUNC_0 () ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(void) {
  HMODULE VAR_13;
  HMODULE VAR_14;
  HMODULE VAR_15;
  HMODULE VAR_16;
  HMODULE VAR_17;

  VAR_13 = FUNC_1("ntdll.dll");
  if (VAR_13 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetModuleHandleA");
  }

  VAR_10 = (sRtlGetVersion) FUNC_2(VAR_13,
                                                   "RtlGetVersion");

  VAR_11 = (sRtlNtStatusToDosError) FUNC_2(
      VAR_13,
      "RtlNtStatusToDosError");
  if (VAR_11 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_1 = (sNtDeviceIoControlFile) FUNC_2(
      VAR_13,
      "NtDeviceIoControlFile");
  if (VAR_1 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_3 = (sNtQueryInformationFile) FUNC_2(
      VAR_13,
      "NtQueryInformationFile");
  if (VAR_3 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_7 = (sNtSetInformationFile) FUNC_2(
      VAR_13,
      "NtSetInformationFile");
  if (VAR_7 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_6 = (sNtQueryVolumeInformationFile)
      FUNC_2(VAR_13, "NtQueryVolumeInformationFile");
  if (VAR_6 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_2 = (sNtQueryDirectoryFile)
      FUNC_2(VAR_13, "NtQueryDirectoryFile");
  if (VAR_6 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_5 = (sNtQuerySystemInformation) FUNC_2(
      VAR_13,
      "NtQuerySystemInformation");
  if (VAR_5 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_4 = (sNtQueryInformationProcess) FUNC_2(
      VAR_13,
      "NtQueryInformationProcess");
  if (VAR_4 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetProcAddress");
  }

  VAR_16 = FUNC_1("kernel32.dll");
  if (VAR_16 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetModuleHandleA");
  }

  VAR_0 = (sGetQueuedCompletionStatusEx) FUNC_2(
      VAR_16,
      "GetQueuedCompletionStatusEx");

  VAR_14 = FUNC_3("powrprof.dll");
  if (VAR_14 != ((void*)0)) {
    VAR_8 = (sPowerRegisterSuspendResumeNotification)
      FUNC_2(VAR_14, "PowerRegisterSuspendResumeNotification");
  }

  VAR_15 = FUNC_3("user32.dll");
  if (VAR_15 != ((void*)0)) {
    VAR_12 = (sSetWinEventHook)
      FUNC_2(VAR_15, "SetWinEventHook");
  }

  VAR_17 = FUNC_1("advapi32.dll");
  if (VAR_17 == ((void*)0)) {
    FUNC_4(FUNC_0(), "GetModuleHandleA");
  }

  VAR_9 =
      (sRtlGenRandom) FUNC_2(VAR_17, "SystemFunction036");
}
