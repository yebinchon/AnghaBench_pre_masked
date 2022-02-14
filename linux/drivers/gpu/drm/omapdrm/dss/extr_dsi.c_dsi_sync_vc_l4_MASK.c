
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_packet_sent_handler_data {int * completion; struct dsi_data* dsi; } ;
struct dsi_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct dsi_data*,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct dsi_data*,int,int ,struct dsi_packet_sent_handler_data*,int ) ;
 int FUNC_5 (struct dsi_data*,int,int ,struct dsi_packet_sent_handler_data*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct dsi_data *VAR_4, int VAR_5)
{
 FUNC_0(VAR_2);
 struct dsi_packet_sent_handler_data VAR_6 = {
  .dsi = VAR_4,
  .completion = &VAR_2
 };
 int VAR_7 = 0;

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_3,
  &VAR_6, VAR_0);
 if (VAR_7)
  goto err0;


 if (FUNC_3(VAR_4, FUNC_1(VAR_5), 5, 5)) {
  if (FUNC_7(&VAR_2,
    FUNC_6(10)) == 0) {
   FUNC_2("Failed to complete previous l4 transfer\n");
   VAR_7 = -VAR_1;
   goto err1;
  }
 }

 FUNC_5(VAR_4, VAR_5, VAR_3,
  &VAR_6, VAR_0);

 return 0;
err1:
 FUNC_5(VAR_4, VAR_5, VAR_3,
  &VAR_6, VAR_0);
err0:
 return VAR_7;
}
