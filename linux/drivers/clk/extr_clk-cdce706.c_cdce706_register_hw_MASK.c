
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_init_data {char* name; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct cdce706_hw_data {unsigned int idx; TYPE_2__ hw; struct cdce706_dev_data* dev_data; } ;
struct cdce706_dev_data {TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,char const* const) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct cdce706_dev_data *VAR_0,
          struct cdce706_hw_data *VAR_1, unsigned VAR_2,
          const char * const *VAR_3,
          struct clk_init_data *VAR_4)
{
 unsigned VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5, ++VAR_1) {
  VAR_4->name = VAR_3[VAR_5];
  VAR_1->dev_data = VAR_0;
  VAR_1->idx = VAR_5;
  VAR_1->hw.init = VAR_4;
  VAR_6 = FUNC_1(&VAR_0->client->dev,
         &VAR_1->hw);
  if (VAR_6) {
   FUNC_0(&VAR_0->client->dev, "Failed to register %s\n",
    VAR_3[VAR_5]);
   return VAR_6;
  }
 }
 return 0;
}
