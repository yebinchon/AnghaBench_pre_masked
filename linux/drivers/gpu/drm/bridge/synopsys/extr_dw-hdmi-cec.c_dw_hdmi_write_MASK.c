
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dw_hdmi_cec {int hdmi; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (int ,int ,int) ;} ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dw_hdmi_cec *VAR_0, u8 VAR_1, int VAR_2)
{
 VAR_0->ops->write(VAR_0->hdmi, VAR_1, VAR_2);
}
