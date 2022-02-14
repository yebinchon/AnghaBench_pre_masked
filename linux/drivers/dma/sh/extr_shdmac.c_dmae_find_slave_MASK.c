
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_dmae_slave_config {int slave_id; int mid_rid; } ;
struct sh_dmae_pdata {int slave_num; struct sh_dmae_slave_config* slave; } ;
struct sh_dmae_device {struct sh_dmae_pdata* pdata; } ;
struct TYPE_4__ {int slave_id; TYPE_1__* dev; } ;
struct sh_dmae_chan {TYPE_2__ shdma_chan; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 struct sh_dmae_device* FUNC_0 (struct sh_dmae_chan*) ;

__attribute__((used)) static const struct sh_dmae_slave_config *FUNC_1(
 struct sh_dmae_chan *VAR_1, int VAR_2)
{
 struct sh_dmae_device *VAR_3 = FUNC_0(VAR_1);
 const struct sh_dmae_pdata *VAR_4 = VAR_3->pdata;
 const struct sh_dmae_slave_config *VAR_5;
 int VAR_6;

 if (!VAR_1->shdma_chan.dev->of_node) {
  if (VAR_2 >= VAR_0)
   return ((void*)0);

  for (VAR_6 = 0, VAR_5 = VAR_4->slave; VAR_6 < VAR_4->slave_num; VAR_6++, VAR_5++)
   if (VAR_5->slave_id == VAR_2)
    return VAR_5;
 } else {
  for (VAR_6 = 0, VAR_5 = VAR_4->slave; VAR_6 < VAR_4->slave_num; VAR_6++, VAR_5++)
   if (VAR_5->mid_rid == VAR_2) {
    VAR_1->shdma_chan.slave_id = VAR_6;
    return VAR_5;
   }
 }

 return ((void*)0);
}
