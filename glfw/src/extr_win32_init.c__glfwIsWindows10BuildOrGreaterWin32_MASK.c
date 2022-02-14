
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int osvi ;
typedef int WORD ;
typedef scalar_t__ ULONGLONG ;
struct TYPE_3__ {int member_0; int member_1; int member_3; int member_2; } ;
typedef TYPE_1__ OSVERSIONINFOEXW ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;

BOOL FUNC_2(WORD VAR_4)
{
    OSVERSIONINFOEXW VAR_5 = { sizeof(VAR_5), 10, 0, VAR_4 };
    DWORD VAR_6 = VAR_2 | VAR_3 | VAR_0;
    ULONGLONG VAR_7 = FUNC_1(0, VAR_2, VAR_1);
    VAR_7 = FUNC_1(VAR_7, VAR_3, VAR_1);
    VAR_7 = FUNC_1(VAR_7, VAR_0, VAR_1);



    return FUNC_0(&VAR_5, VAR_6, VAR_7) == 0;
}
