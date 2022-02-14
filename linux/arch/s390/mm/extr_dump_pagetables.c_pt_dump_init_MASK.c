
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kernel_asce; } ;
struct TYPE_3__ {unsigned long start_address; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__ VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (char*,int,int *,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_1(void)
{





 VAR_8 = (VAR_2.kernel_asce & VAR_6) >> 2;
 VAR_8 = 1UL << (VAR_8 * 11 + 31);
 VAR_7[VAR_0].start_address = VAR_1;
 VAR_7[VAR_5].start_address = (unsigned long) VAR_10;
 VAR_7[VAR_3].start_address = VAR_4;
 FUNC_0("kernel_page_tables", 0400, ((void*)0), ((void*)0), &VAR_9);
 return 0;
}
