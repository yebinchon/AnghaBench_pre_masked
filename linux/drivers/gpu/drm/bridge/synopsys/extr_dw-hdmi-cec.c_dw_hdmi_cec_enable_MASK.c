
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_hdmi_cec {int hdmi; TYPE_1__* ops; int adap; } ;
struct cec_adapter {int dummy; } ;
struct TYPE_2__ {int (* enable ) (int ) ;int (* disable ) (int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dw_hdmi_cec* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dw_hdmi_cec*,unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cec_adapter *VAR_11, bool VAR_12)
{
 struct dw_hdmi_cec *VAR_13 = FUNC_0(VAR_11);

 if (!VAR_12) {
  FUNC_2(VAR_13, ~0, VAR_7);
  FUNC_2(VAR_13, ~0, VAR_10);
  FUNC_2(VAR_13, 0, VAR_8);

  VAR_13->ops->disable(VAR_13->hdmi);
 } else {
  unsigned int VAR_14;

  FUNC_2(VAR_13, 0, VAR_5);
  FUNC_2(VAR_13, ~0, VAR_9);
  FUNC_2(VAR_13, 0, VAR_6);

  FUNC_1(VAR_13->adap, VAR_0);

  VAR_13->ops->enable(VAR_13->hdmi);

  VAR_14 = VAR_3 | VAR_4 | VAR_2 |
         VAR_1;
  FUNC_2(VAR_13, VAR_14, VAR_8);
  FUNC_2(VAR_13, ~VAR_14, VAR_7);
  FUNC_2(VAR_13, ~VAR_14, VAR_10);
 }
 return 0;
}
