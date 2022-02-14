
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stp_master {int dummy; } ;
struct stm_device {TYPE_1__* data; } ;
struct TYPE_2__ {unsigned int sw_start; unsigned int sw_end; } ;


 struct stp_master* FUNC_0 (struct stm_device*,unsigned int) ;

__attribute__((used)) static inline struct stp_master *
FUNC_1(struct stm_device *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 < VAR_0->data->sw_start || VAR_1 > VAR_0->data->sw_end)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1);
}
