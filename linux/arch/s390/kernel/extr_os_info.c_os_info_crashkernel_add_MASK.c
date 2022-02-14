
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_3__ {int csum; void* crashkernel_size; void* crashkernel_addr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_0.crashkernel_addr = (u64)(unsigned long)VAR_1;
 VAR_0.crashkernel_size = (u64)(unsigned long)VAR_2;
 VAR_0.csum = FUNC_0(&VAR_0);
}
