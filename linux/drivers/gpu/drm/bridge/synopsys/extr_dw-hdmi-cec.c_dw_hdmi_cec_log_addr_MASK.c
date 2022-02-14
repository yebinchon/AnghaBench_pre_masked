
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dw_hdmi_cec {int addresses; } ;
struct cec_adapter {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dw_hdmi_cec* FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct dw_hdmi_cec*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_3, u8 VAR_4)
{
 struct dw_hdmi_cec *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 == VAR_0)
  VAR_5->addresses = 0;
 else
  VAR_5->addresses |= FUNC_0(VAR_4) | FUNC_0(15);

 FUNC_2(VAR_5, VAR_5->addresses & 255, VAR_2);
 FUNC_2(VAR_5, VAR_5->addresses >> 8, VAR_1);

 return 0;
}
