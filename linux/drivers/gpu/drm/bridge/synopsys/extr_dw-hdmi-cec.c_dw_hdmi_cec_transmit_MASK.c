
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dw_hdmi_cec {int dummy; } ;
struct cec_msg {unsigned int len; unsigned int* msg; } ;
struct cec_adapter {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct dw_hdmi_cec* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct dw_hdmi_cec*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_7, u8 VAR_8,
    u32 VAR_9, struct cec_msg *VAR_10)
{
 struct dw_hdmi_cec *VAR_11 = FUNC_0(VAR_7);
 unsigned int VAR_12, VAR_13;

 switch (VAR_9) {
 case 128:
  VAR_13 = VAR_2;
  break;
 case 130:
 default:
  VAR_13 = VAR_1;
  break;
 case 129:
  VAR_13 = VAR_0;
  break;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10->len; VAR_12++)
  FUNC_1(VAR_11, VAR_10->msg[VAR_12], VAR_6 + VAR_12);

 FUNC_1(VAR_11, VAR_10->len, VAR_5);
 FUNC_1(VAR_11, VAR_13 | VAR_3, VAR_4);

 return 0;
}
