
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axi_dmac_desc {unsigned int num_sgs; TYPE_1__* sg; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct axi_dmac_desc* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct axi_dmac_desc*,int ,unsigned int) ;

__attribute__((used)) static struct axi_dmac_desc *FUNC_2(unsigned int VAR_3)
{
 struct axi_dmac_desc *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(FUNC_1(VAR_4, VAR_2, VAR_3), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_4->sg[VAR_5].id = VAR_0;

 VAR_4->num_sgs = VAR_3;

 return VAR_4;
}
