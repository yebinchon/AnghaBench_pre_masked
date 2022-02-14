
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int sm_shmem_out_base; TYPE_1__* chip; } ;
struct TYPE_3__ {unsigned int shmem_size; int cmd_shmem_out_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(void *VAR_3, unsigned int VAR_4, unsigned int VAR_5,
         u32 VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 if (!VAR_2.chip)
  return -VAR_1;

 if (!VAR_2.chip->cmd_shmem_out_base)
  return -VAR_0;

 if (VAR_4 > VAR_2.chip->shmem_size)
  return -VAR_0;

 if (FUNC_1(VAR_5, &VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10) < 0)
  return -VAR_0;

 if (VAR_11 > VAR_4)
  return -VAR_0;

 VAR_12 = VAR_11;

 if (!VAR_11)
  VAR_11 = VAR_4;

 if (VAR_3)
  FUNC_0(VAR_3, VAR_2.sm_shmem_out_base, VAR_11);

 return VAR_12;
}
