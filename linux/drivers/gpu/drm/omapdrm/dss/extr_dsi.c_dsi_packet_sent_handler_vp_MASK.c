
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dsi_packet_sent_handler_data {int completion; struct dsi_data* dsi; } ;
struct dsi_data {int update_channel; scalar_t__ te_enabled; } ;


 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (struct dsi_data*,int ,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, u32 VAR_1)
{
 struct dsi_packet_sent_handler_data *VAR_2 =
  (struct dsi_packet_sent_handler_data *) VAR_0;
 struct dsi_data *VAR_3 = VAR_2->dsi;
 const int VAR_4 = VAR_3->update_channel;
 u8 VAR_5 = VAR_3->te_enabled ? 30 : 31;

 if (FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_5, VAR_5) == 0)
  FUNC_2(VAR_2->completion);
}
