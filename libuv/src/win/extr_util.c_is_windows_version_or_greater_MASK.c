
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* WORD ;
struct TYPE_4__ {int dwOSVersionInfoSize; void* wServicePackMinor; void* wServicePackMajor; void* dwMinorVersion; void* dwMajorVersion; } ;
typedef TYPE_1__ OSVERSIONINFOEX ;
typedef int DWORDLONG ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(DWORD VAR_5,
                                         DWORD VAR_6,
                                         WORD VAR_7,
                                         WORD VAR_8) {
  OSVERSIONINFOEX VAR_9;
  DWORDLONG VAR_10 = 0;
  int VAR_11 = VAR_0;


  FUNC_2(&VAR_9, sizeof(OSVERSIONINFOEX));
  VAR_9.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
  VAR_9.dwMajorVersion = VAR_5;
  VAR_9.dwMinorVersion = VAR_6;
  VAR_9.wServicePackMajor = VAR_7;
  VAR_9.wServicePackMinor = VAR_8;


  FUNC_0(VAR_10, VAR_1, VAR_11);
  FUNC_0(VAR_10, VAR_2, VAR_11);
  FUNC_0(VAR_10, VAR_3, VAR_11);
  FUNC_0(VAR_10, VAR_4, VAR_11);


  return (int) FUNC_1(
    &VAR_9,
    VAR_1 | VAR_2 |
    VAR_3 | VAR_4,
    VAR_10);
}
