
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dsi_data {TYPE_1__* vc; scalar_t__ debug_write; } ;
struct TYPE_2__ {int vc_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,int,int) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dsi_data*) ;
 int FUNC_7 (struct dsi_data*,int ) ;
 int FUNC_8 (struct dsi_data*,int,int ) ;
 int FUNC_9 (struct dsi_data*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct dsi_data *VAR_2, int VAR_3, u8 VAR_4,
        u16 VAR_5, u8 VAR_6)
{
 u32 VAR_7;
 u8 VAR_8;

 FUNC_5(!FUNC_6(VAR_2));

 if (VAR_2->debug_write)
  FUNC_2("dsi_vc_send_short(ch%d, dt %#x, b1 %#x, b2 %#x)\n",
    VAR_3,
    VAR_4, VAR_5 & 0xff, (VAR_5 >> 8) & 0xff);

 FUNC_8(VAR_2, VAR_3, VAR_0);

 if (FUNC_4(FUNC_7(VAR_2, FUNC_0(VAR_3)), 16, 16)) {
  FUNC_3("ERROR FIFO FULL, aborting transfer\n");
  return -VAR_1;
 }

 VAR_8 = VAR_4 | VAR_2->vc[VAR_3].vc_id << 6;

 VAR_7 = (VAR_8 << 0) | (VAR_5 << 8) | (VAR_6 << 24);

 FUNC_9(VAR_2, FUNC_1(VAR_3), VAR_7);

 return 0;
}
