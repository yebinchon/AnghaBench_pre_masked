
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dsi_data {TYPE_2__* vc; TYPE_1__* data; } ;
struct TYPE_4__ {int source; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (struct dsi_data*,int ) ;
 int FUNC_6 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct dsi_data *VAR_2, int VAR_3)
{
 u32 VAR_4;

 FUNC_1("Initial config of virtual channel %d", VAR_3);

 VAR_4 = FUNC_5(VAR_2, FUNC_0(VAR_3));

 if (FUNC_3(VAR_4, 15, 15))
  FUNC_2("VC(%d) busy when trying to configure it!\n",
    VAR_3);

 VAR_4 = FUNC_4(VAR_4, 0, 1, 1);
 VAR_4 = FUNC_4(VAR_4, 0, 2, 2);
 VAR_4 = FUNC_4(VAR_4, 0, 3, 3);
 VAR_4 = FUNC_4(VAR_4, 0, 4, 4);
 VAR_4 = FUNC_4(VAR_4, 1, 7, 7);
 VAR_4 = FUNC_4(VAR_4, 1, 8, 8);
 VAR_4 = FUNC_4(VAR_4, 0, 9, 9);
 if (VAR_2->data->quirks & VAR_0)
  VAR_4 = FUNC_4(VAR_4, 3, 11, 10);

 VAR_4 = FUNC_4(VAR_4, 4, 29, 27);
 VAR_4 = FUNC_4(VAR_4, 4, 23, 21);

 FUNC_6(VAR_2, FUNC_0(VAR_3), VAR_4);

 VAR_2->vc[VAR_3].source = VAR_1;
}
