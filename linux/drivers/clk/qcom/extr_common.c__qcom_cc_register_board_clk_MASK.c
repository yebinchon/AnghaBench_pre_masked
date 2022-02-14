
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; int * ops; scalar_t__ flags; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_fixed_rate {unsigned long fixed_rate; TYPE_1__ hw; } ;
struct clk_fixed_factor {int mult; int div; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,TYPE_1__*) ;
 void* FUNC_1 (struct device*,int,int ) ;
 struct device_node* FUNC_2 (char*) ;
 struct device_node* FUNC_3 (struct device_node*,char const*) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, const char *VAR_5,
           const char *VAR_6, unsigned long VAR_7,
           bool VAR_8)
{
 struct device_node *VAR_9 = ((void*)0);
 struct device_node *VAR_10;
 struct clk_fixed_factor *VAR_11;
 struct clk_fixed_rate *VAR_12;
 struct clk_init_data VAR_13 = { };
 int VAR_14;

 VAR_10 = FUNC_2("/clocks");
 if (VAR_10) {
  VAR_9 = FUNC_3(VAR_10, VAR_5);
  FUNC_4(VAR_10);
 }

 if (!VAR_9) {
  VAR_12 = FUNC_1(VAR_4, sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   return -VAR_0;

  VAR_12->fixed_rate = VAR_7;
  VAR_12->hw.init = &VAR_13;

  VAR_13.name = VAR_5;
  VAR_13.ops = &VAR_3;

  VAR_14 = FUNC_0(VAR_4, &VAR_12->hw);
  if (VAR_14)
   return VAR_14;
 }
 FUNC_4(VAR_9);

 if (VAR_8) {
  VAR_11 = FUNC_1(VAR_4, sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   return -VAR_0;

  VAR_11->mult = VAR_11->div = 1;
  VAR_11->hw.init = &VAR_13;

  VAR_13.name = VAR_6;
  VAR_13.parent_names = &VAR_5;
  VAR_13.num_parents = 1;
  VAR_13.flags = 0;
  VAR_13.ops = &VAR_2;

  VAR_14 = FUNC_0(VAR_4, &VAR_11->hw);
  if (VAR_14)
   return VAR_14;
 }

 return 0;
}
