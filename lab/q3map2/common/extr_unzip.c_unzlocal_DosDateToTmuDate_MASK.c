
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uLong ;
typedef void* uInt ;
typedef int uDate ;
struct TYPE_3__ {void* tm_sec; void* tm_min; void* tm_hour; void* tm_year; void* tm_mon; void* tm_mday; } ;
typedef TYPE_1__ tm_unz ;



__attribute__((used)) static void FUNC_0 (uLong VAR_0, tm_unz* VAR_1)
{
    uLong VAR_2;
    VAR_2 = (uLong)(VAR_0>>16);
    VAR_1->tm_mday = (uInt)(VAR_2&0x1f) ;
    VAR_1->tm_mon = (uInt)((((VAR_2)&0x1E0)/0x20)-1) ;
    VAR_1->tm_year = (uInt)(((VAR_2&0x0FE00)/0x0200)+1980) ;

    VAR_1->tm_hour = (uInt) ((VAR_0 &0xF800)/0x800);
    VAR_1->tm_min = (uInt) ((VAR_0&0x7E0)/0x20) ;
    VAR_1->tm_sec = (uInt) (2*(VAR_0&0x1f)) ;
}
