
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dsi_data {TYPE_2__* vc; TYPE_1__* data; } ;
typedef enum dsi_vc_source { ____Placeholder_dsi_vc_source } dsi_vc_source ;
struct TYPE_4__ {int source; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct dsi_data*,int ,int,int,int) ;
 int FUNC_4 (struct dsi_data*,int) ;
 int FUNC_5 (struct dsi_data*,int,int) ;
 int FUNC_6 (struct dsi_data*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct dsi_data *VAR_3, int VAR_4,
    enum dsi_vc_source VAR_5)
{
 if (VAR_3->vc[VAR_4].source == VAR_5)
  return 0;

 FUNC_1("Source config of virtual channel %d", VAR_4);

 FUNC_4(VAR_3, VAR_4);

 FUNC_5(VAR_3, VAR_4, 0);


 if (!FUNC_6(VAR_3, FUNC_0(VAR_4), 15, 0)) {
  FUNC_2("vc(%d) busy when trying to config for VP\n", VAR_4);
  return -VAR_2;
 }


 FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_5, 1, 1);


 if (VAR_3->data->quirks & VAR_0) {
  bool VAR_6 = VAR_5 == VAR_1;
  FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_6, 30, 30);
 }

 FUNC_5(VAR_3, VAR_4, 1);

 VAR_3->vc[VAR_4].source = VAR_5;

 return 0;
}
