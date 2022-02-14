
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {scalar_t__ debug_read; scalar_t__ debug_write; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct dsi_data*,int ,int,int,int) ;
 scalar_t__ FUNC_4 (struct dsi_data*,int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dsi_data*) ;
 int FUNC_7 (struct dsi_data*,int ) ;
 int FUNC_8 (struct dsi_data*,int) ;

__attribute__((used)) static int FUNC_9(struct dsi_data *VAR_0, int VAR_1)
{
 if (VAR_0->debug_write || VAR_0->debug_read)
  FUNC_1("dsi_vc_send_bta %d\n", VAR_1);

 FUNC_5(!FUNC_6(VAR_0));


 if (FUNC_4(VAR_0, FUNC_0(VAR_1), 20, 20)) {
  FUNC_2("rx fifo not empty when sending BTA, dumping data:\n");
  FUNC_8(VAR_0, VAR_1);
 }

 FUNC_3(VAR_0, FUNC_0(VAR_1), 1, 6, 6);


 FUNC_7(VAR_0, FUNC_0(VAR_1));

 return 0;
}
