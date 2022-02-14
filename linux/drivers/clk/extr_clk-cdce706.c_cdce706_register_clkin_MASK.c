
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct clk_init_data {unsigned int num_parents; TYPE_2__* parent_names; int * ops; } ;
struct clk {int dummy; } ;
struct cdce706_dev_data {TYPE_2__* clkin; struct clk** clkin_clk; TYPE_2__* clkin_name; TYPE_1__* client; } ;
struct TYPE_8__ {int parent; } ;
struct TYPE_7__ {int dev; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 TYPE_2__ FUNC_2 (struct clk*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct cdce706_dev_data*,int ,unsigned int*) ;
 int FUNC_4 (struct cdce706_dev_data*,TYPE_2__*,unsigned int,int ,struct clk_init_data*) ;
 TYPE_2__* VAR_7 ;
 struct clk* FUNC_5 (int *,TYPE_2__) ;

__attribute__((used)) static int FUNC_6(struct cdce706_dev_data *VAR_8)
{
 struct clk_init_data VAR_9 = {
  .ops = &VAR_6,
  .parent_names = VAR_8->clkin_name,
  .num_parents = FUNC_0(VAR_8->clkin_name),
 };
 unsigned VAR_10;
 int VAR_11;
 unsigned VAR_12, VAR_13;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->clkin_name); ++VAR_10) {
  struct clk *VAR_14 = FUNC_5(&VAR_8->client->dev,
        VAR_7[VAR_10]);

  if (FUNC_1(VAR_14)) {
   VAR_8->clkin_name[VAR_10] = VAR_7[VAR_10];
  } else {
   VAR_8->clkin_name[VAR_10] = FUNC_2(VAR_14);
   VAR_8->clkin_clk[VAR_10] = VAR_14;
  }
 }

 VAR_11 = FUNC_3(VAR_8, VAR_2, &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;
 if ((VAR_13 & VAR_4) ==
     VAR_3) {
  VAR_11 = FUNC_3(VAR_8, VAR_0, &VAR_12);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_8->clkin[0].parent = !!(VAR_12 & VAR_1);
 }

 VAR_11 = FUNC_4(VAR_8, VAR_8->clkin,
      FUNC_0(VAR_8->clkin),
      VAR_5, &VAR_9);
 return VAR_11;
}
