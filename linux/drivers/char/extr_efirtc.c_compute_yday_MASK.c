
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int month; int day; int year; } ;
typedef TYPE_1__ efi_time_t ;


 int** VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(efi_time_t *VAR_1)
{

 return VAR_0[FUNC_0(VAR_1->year)][VAR_1->month-1]+ VAR_1->day -1;
}
