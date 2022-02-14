
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct s10_priv {TYPE_1__* svc_bufs; } ;
struct fpga_manager {struct s10_priv* priv; } ;
struct TYPE_2__ {int buf; } ;


 size_t VAR_0 ;

__attribute__((used)) static uint FUNC_0(struct fpga_manager *VAR_1)
{
 struct s10_priv *VAR_2 = VAR_1->priv;
 uint VAR_3 = 0;
 uint VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (!VAR_2->svc_bufs[VAR_4].buf)
   VAR_3++;

 return VAR_3;
}
