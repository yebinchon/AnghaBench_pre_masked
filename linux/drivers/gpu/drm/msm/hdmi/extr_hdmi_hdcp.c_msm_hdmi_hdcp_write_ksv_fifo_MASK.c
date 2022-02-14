
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hdmi_hdcp_ctrl {int dev_count; int ksv_fifo_w_index; int* ksv_list; struct hdmi* hdmi; } ;
struct hdmi {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hdmi*,int ) ;
 int FUNC_2 (struct hdmi_hdcp_ctrl*,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct hdmi_hdcp_ctrl *VAR_6)
{
 int VAR_7;
 struct hdmi *VAR_8 = VAR_6->hdmi;
 u32 VAR_9, VAR_10 = 0;
 u8 *VAR_11 = ((void*)0);
 u32 VAR_12, VAR_13, VAR_14;
 u32 VAR_15 = 0;

 VAR_9 = 5 * VAR_6->dev_count;


 if (VAR_6->ksv_fifo_w_index) {
  VAR_12 = FUNC_1(VAR_8, VAR_5);
  FUNC_0("HDCP_SHA_STATUS=%08x", VAR_12);
  if (VAR_6->ksv_fifo_w_index == VAR_9) {

   if (VAR_12 & VAR_3) {
    FUNC_0("COMP_DONE");
    return 0;
   } else {
    return -VAR_0;
   }
  } else {

   if (!(VAR_12 & VAR_2))
    return -VAR_0;

   FUNC_0("BLOCK_DONE");
  }
 }

 VAR_9 -= VAR_6->ksv_fifo_w_index;
 if (VAR_9 <= 64)
  VAR_10 = 1;
 else
  VAR_9 = 64;

 VAR_11 = VAR_6->ksv_list;
 VAR_11 += VAR_6->ksv_fifo_w_index;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {

  VAR_12 = VAR_11[VAR_7] << 16;
  if ((VAR_7 == (VAR_9 - 1)) && VAR_10)
   VAR_12 |= VAR_1;

  VAR_14 = VAR_4;
  VAR_13 = VAR_12;
  VAR_15 = FUNC_2(VAR_6, &VAR_14, &VAR_13, 1);

  if (VAR_15)
   return VAR_15;
 }

 VAR_6->ksv_fifo_w_index += VAR_9;




 return -VAR_0;
}
