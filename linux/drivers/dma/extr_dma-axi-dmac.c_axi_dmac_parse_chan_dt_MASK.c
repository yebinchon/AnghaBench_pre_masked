
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct axi_dmac_chan {int src_type; int dest_type; int src_width; int dest_width; int direction; scalar_t__ address_align_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct axi_dmac_chan*) ;
 scalar_t__ FUNC_1 (struct axi_dmac_chan*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_6,
 struct axi_dmac_chan *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, "reg", &VAR_8);
 if (VAR_9)
  return VAR_9;


 if (VAR_8 != 0)
  return -VAR_5;

 VAR_9 = FUNC_3(VAR_6, "adi,source-bus-type", &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (VAR_8 > VAR_0)
  return -VAR_5;
 VAR_7->src_type = VAR_8;

 VAR_9 = FUNC_3(VAR_6, "adi,destination-bus-type", &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (VAR_8 > VAR_0)
  return -VAR_5;
 VAR_7->dest_type = VAR_8;

 VAR_9 = FUNC_3(VAR_6, "adi,source-bus-width", &VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_7->src_width = VAR_8 / 8;

 VAR_9 = FUNC_3(VAR_6, "adi,destination-bus-width", &VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_7->dest_width = VAR_8 / 8;

 VAR_7->address_align_mask = FUNC_2(VAR_7->dest_width, VAR_7->src_width) - 1;

 if (FUNC_0(VAR_7) && FUNC_1(VAR_7))
  VAR_7->direction = VAR_4;
 else if (!FUNC_0(VAR_7) && FUNC_1(VAR_7))
  VAR_7->direction = VAR_3;
 else if (FUNC_0(VAR_7) && !FUNC_1(VAR_7))
  VAR_7->direction = VAR_2;
 else
  VAR_7->direction = VAR_1;

 return 0;
}
