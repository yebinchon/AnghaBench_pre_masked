
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int osvi ;
typedef int WORD ;
typedef scalar_t__ ULONGLONG ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int member_0; int member_6; TYPE_1__ member_5; int member_4; int member_3; int member_2; int member_1; } ;
typedef TYPE_2__ OSVERSIONINFOEXW ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;

BOOL FUNC_2(WORD VAR_4, WORD VAR_5, WORD VAR_6)
{
    OSVERSIONINFOEXW VAR_7 = { sizeof(VAR_7), VAR_4, VAR_5, 0, 0, 0, VAR_6 };
    DWORD VAR_8 = VAR_1 | VAR_2 | VAR_3;
    ULONGLONG VAR_9 = FUNC_1(0, VAR_1, VAR_0);
    VAR_9 = FUNC_1(VAR_9, VAR_2, VAR_0);
    VAR_9 = FUNC_1(VAR_9, VAR_3, VAR_0);



    return FUNC_0(&VAR_7, VAR_8, VAR_9) == 0;
}
