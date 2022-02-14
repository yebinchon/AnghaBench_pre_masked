
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* per_cpu; } ;
struct TYPE_3__ {int resume_addr; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(unsigned int VAR_4, uint32_t VAR_5)
{
 if (!VAR_3)
  return -VAR_0;







 FUNC_2(VAR_5,
        &VAR_1->per_cpu[VAR_4].resume_addr);


 FUNC_1(VAR_2, FUNC_0(VAR_4), 0);

 return 0;
}
