
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_wc {int dummy; } ;
struct ib_mad_agent {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;

int FUNC_1(struct ib_mad_agent *VAR_0,
        struct ib_wc *VAR_1)
{
 FUNC_0(&VAR_0->device->dev,
  "ib_process_mad_wc() not implemented yet\n");
 return 0;
}
