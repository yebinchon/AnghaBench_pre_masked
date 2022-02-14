
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3532_data {struct lm3532_als_data* als_data; TYPE_1__* client; int dev; } ;
struct lm3532_als_data {int als_vmin; int als_vmax; scalar_t__ als_input_mode; scalar_t__ als_avrg_time; void* als2_imp_sel; void* als1_imp_sel; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int*) ;
 int FUNC_1 (int *,char*,scalar_t__*) ;
 struct lm3532_als_data* FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lm3532_data *VAR_5)
{
 struct lm3532_als_data *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_9 = FUNC_0(&VAR_5->client->dev, "ti,als-vmin",
           &VAR_6->als_vmin);
 if (VAR_9)
  VAR_6->als_vmin = 0;

 VAR_9 = FUNC_0(&VAR_5->client->dev, "ti,als-vmax",
           &VAR_6->als_vmax);
 if (VAR_9)
  VAR_6->als_vmax = VAR_3;

 if (VAR_6->als_vmax > VAR_3) {
  VAR_9 = -VAR_0;
  return VAR_9;
 }

 VAR_9 = FUNC_0(&VAR_5->client->dev, "ti,als1-imp-sel",
          &VAR_8);
 if (VAR_9)
  VAR_6->als1_imp_sel = 0;
 else
  VAR_6->als1_imp_sel = FUNC_4(VAR_8);

 VAR_9 = FUNC_0(&VAR_5->client->dev, "ti,als2-imp-sel",
          &VAR_8);
 if (VAR_9)
  VAR_6->als2_imp_sel = 0;
 else
  VAR_6->als2_imp_sel = FUNC_4(VAR_8);

 VAR_9 = FUNC_0(&VAR_5->client->dev, "ti,als-avrg-time-us",
          &VAR_7);
 if (VAR_9)
  VAR_6->als_avrg_time = 0;
 else
  VAR_6->als_avrg_time = FUNC_3(VAR_7);

 VAR_9 = FUNC_1(&VAR_5->client->dev, "ti,als-input-mode",
          &VAR_6->als_input_mode);
 if (VAR_9)
  VAR_6->als_input_mode = 0;

 if (VAR_6->als_input_mode > VAR_4) {
  VAR_9 = -VAR_0;
  return VAR_9;
 }

 VAR_5->als_data = VAR_6;

 return VAR_9;
}
