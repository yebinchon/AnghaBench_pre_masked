
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct adv7511 {int num_dsi_lanes; int use_timing_gen; int rgb; int embedded_sync; int host_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

int FUNC_4(struct device_node *VAR_2, struct adv7511 *VAR_3)
{
 u32 VAR_4;

 FUNC_3(VAR_2, "adi,dsi-lanes", &VAR_4);

 if (VAR_4 < 1 || VAR_4 > 4)
  return -VAR_0;

 VAR_3->num_dsi_lanes = VAR_4;

 VAR_3->host_node = FUNC_0(VAR_2, 0, 0);
 if (!VAR_3->host_node)
  return -VAR_1;

 FUNC_1(VAR_3->host_node);

 VAR_3->use_timing_gen = !FUNC_2(VAR_2,
      "adi,disable-timing-generator");


 VAR_3->rgb = 1;
 VAR_3->embedded_sync = 0;

 return 0;
}
