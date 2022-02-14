
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_init_data {char const** parent_names; size_t num_parents; int flags; int * ops; int name; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct bcm2835_cprman {char** real_parent_names; int dev; } ;
struct bcm2835_clock_data {size_t num_mux_parents; char** parents; int flags; int ctl_reg; scalar_t__ is_vpu_clock; scalar_t__ set_rate_parent; int name; } ;
struct bcm2835_clock {struct clk_hw hw; struct bcm2835_clock_data const* data; struct bcm2835_cprman* cprman; } ;
typedef int init ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct clk_hw* FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bcm2835_cprman*,int ) ;
 int FUNC_3 (int ,struct clk_hw*) ;
 struct bcm2835_clock* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,char const*) ;
 int FUNC_6 (struct clk_init_data*,int ,int) ;

__attribute__((used)) static struct clk_hw *FUNC_7(struct bcm2835_cprman *VAR_11,
       const struct bcm2835_clock_data *VAR_12)
{
 struct bcm2835_clock *VAR_13;
 struct clk_init_data VAR_14;
 const char *VAR_15[1 << VAR_6];
 size_t VAR_16;
 int VAR_17;





 for (VAR_16 = 0; VAR_16 < VAR_12->num_mux_parents; VAR_16++) {
  VAR_15[VAR_16] = VAR_12->parents[VAR_16];

  VAR_17 = FUNC_5(VAR_10,
       FUNC_0(VAR_10),
       VAR_15[VAR_16]);
  if (VAR_17 >= 0)
   VAR_15[VAR_16] = VAR_11->real_parent_names[VAR_17];
 }

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.parent_names = VAR_15;
 VAR_14.num_parents = VAR_12->num_mux_parents;
 VAR_14.name = VAR_12->name;
 VAR_14.flags = VAR_12->flags | VAR_0;





 if (VAR_12->set_rate_parent)
  VAR_14.flags |= VAR_4;

 if (VAR_12->is_vpu_clock) {
  VAR_14.ops = &VAR_9;
 } else {
  VAR_14.ops = &VAR_8;
  VAR_14.flags |= VAR_3 | VAR_2;




  if (!(FUNC_2(VAR_11, VAR_12->ctl_reg) & VAR_5))
   VAR_14.flags &= ~VAR_1;
 }

 VAR_13 = FUNC_4(VAR_11->dev, sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return ((void*)0);

 VAR_13->cprman = VAR_11;
 VAR_13->data = VAR_12;
 VAR_13->hw.init = &VAR_14;

 VAR_17 = FUNC_3(VAR_11->dev, &VAR_13->hw);
 if (VAR_17)
  return FUNC_1(VAR_17);
 return &VAR_13->hw;
}
