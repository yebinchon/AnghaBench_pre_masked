
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_firewall {int reloc; int num_relocs; int offset; int cmdbuf; int class; int dev; TYPE_1__* job; } ;
struct TYPE_2__ {scalar_t__ (* is_addr_reg ) (int ,int ,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct host1x_firewall *VAR_1, unsigned long VAR_2)
{
 if (!VAR_1->job->is_addr_reg)
  return 0;

 if (VAR_1->job->is_addr_reg(VAR_1->dev, VAR_1->class, VAR_2)) {
  if (!VAR_1->num_relocs)
   return -VAR_0;

  if (!FUNC_0(VAR_1->reloc, VAR_1->cmdbuf, VAR_1->offset))
   return -VAR_0;

  VAR_1->num_relocs--;
  VAR_1->reloc++;
 }

 return 0;
}
