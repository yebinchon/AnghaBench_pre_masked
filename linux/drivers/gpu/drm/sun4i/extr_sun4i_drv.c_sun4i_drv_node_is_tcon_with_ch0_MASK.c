
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tcon_quirks {int has_channel_0; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


 struct of_device_id* FUNC_0 (int ,struct device_node*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct device_node *VAR_1)
{
 const struct of_device_id *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  struct sun4i_tcon_quirks *VAR_3;

  VAR_3 = (struct sun4i_tcon_quirks *)VAR_2->data;

  return VAR_3->has_channel_0;
 }

 return 0;
}
