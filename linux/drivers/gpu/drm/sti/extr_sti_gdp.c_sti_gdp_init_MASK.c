
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sti_gdp_node {int dummy; } ;
struct TYPE_6__ {int desc; } ;
struct sti_gdp {void* clk_aux_parent; TYPE_3__* dev; void* clk_main_parent; void* clk_pix; TYPE_2__ plane; TYPE_1__* node_list; } ;
struct device_node {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct TYPE_5__ {int top_field_paddr; int btm_field_paddr; void* btm_field; void* top_field; } ;


 int FUNC_0 (char*,unsigned int,void*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;




 void* FUNC_3 (TYPE_3__*,char*) ;
 void* FUNC_4 (TYPE_3__*,unsigned int,int*,int ) ;
 int FUNC_5 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_7(struct sti_gdp *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 dma_addr_t VAR_5;
 void *VAR_6;
 unsigned int VAR_7, VAR_8;


 VAR_8 = sizeof(struct sti_gdp_node) *
     VAR_1 * VAR_0;
 VAR_6 = FUNC_4(VAR_3->dev, VAR_8, &VAR_5, VAR_2);

 if (!VAR_6) {
  FUNC_1("Failed to allocate memory for GDP node\n");
  return;
 }
 FUNC_5(VAR_6, 0, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_5 & 0xF) {
   FUNC_1("Mem alignment failed\n");
   return;
  }
  VAR_3->node_list[VAR_7].top_field = VAR_6;
  VAR_3->node_list[VAR_7].top_field_paddr = VAR_5;

  FUNC_0("node[%d].top_field=%p\n", VAR_7, VAR_6);
  VAR_6 += sizeof(struct sti_gdp_node);
  VAR_5 += sizeof(struct sti_gdp_node);

  if (VAR_5 & 0xF) {
   FUNC_1("Mem alignment failed\n");
   return;
  }
  VAR_3->node_list[VAR_7].btm_field = VAR_6;
  VAR_3->node_list[VAR_7].btm_field_paddr = VAR_5;
  FUNC_0("node[%d].btm_field=%p\n", VAR_7, VAR_6);
  VAR_6 += sizeof(struct sti_gdp_node);
  VAR_5 += sizeof(struct sti_gdp_node);
 }

 if (FUNC_6(VAR_4, "st,stih407-compositor")) {

  char *VAR_9;

  switch (VAR_3->plane.desc) {
  case 131:
   VAR_9 = "pix_gdp1";
   break;
  case 130:
   VAR_9 = "pix_gdp2";
   break;
  case 129:
   VAR_9 = "pix_gdp3";
   break;
  case 128:
   VAR_9 = "pix_gdp4";
   break;
  default:
   FUNC_1("GDP id not recognized\n");
   return;
  }

  VAR_3->clk_pix = FUNC_3(VAR_3->dev, VAR_9);
  if (FUNC_2(VAR_3->clk_pix))
   FUNC_1("Cannot get %s clock\n", VAR_9);

  VAR_3->clk_main_parent = FUNC_3(VAR_3->dev, "main_parent");
  if (FUNC_2(VAR_3->clk_main_parent))
   FUNC_1("Cannot get main_parent clock\n");

  VAR_3->clk_aux_parent = FUNC_3(VAR_3->dev, "aux_parent");
  if (FUNC_2(VAR_3->clk_aux_parent))
   FUNC_1("Cannot get aux_parent clock\n");
 }
}
