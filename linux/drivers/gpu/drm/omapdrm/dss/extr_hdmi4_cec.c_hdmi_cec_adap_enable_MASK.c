
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hdmi_core_data {TYPE_1__* wp; int base; } ;
struct cec_adapter {int name; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int,int,int) ;
 struct hdmi_core_data* FUNC_3 (struct cec_adapter*) ;
 int FUNC_4 (struct hdmi_core_data*) ;
 int FUNC_5 (struct hdmi_core_data*) ;
 int FUNC_6 (struct cec_adapter*) ;
 int FUNC_7 (struct cec_adapter*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,int ) ;

__attribute__((used)) static int FUNC_15(struct cec_adapter *VAR_9, bool VAR_10)
{
 struct hdmi_core_data *VAR_11 = FUNC_3(VAR_9);
 int VAR_12, VAR_13;

 if (!VAR_10) {
  FUNC_12(VAR_11->base, VAR_1, 0);
  FUNC_12(VAR_11->base, VAR_2, 0);
  FUNC_2(VAR_11->base, VAR_6, 0, 3, 3);
  FUNC_9(VAR_11->wp, VAR_7);
  FUNC_11(VAR_11->wp, VAR_7);
  FUNC_2(VAR_11->wp->base, VAR_8, 0, 5, 0);
  FUNC_4(VAR_11);
  return 0;
 }
 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13)
  return VAR_13;





 FUNC_2(VAR_11->wp->base, VAR_8, 0x18, 5, 0);


 if (!FUNC_7(VAR_9)) {
  FUNC_14("cec-%s: could not clear TX FIFO\n", VAR_9->name);
  VAR_13 = -VAR_0;
  goto err_disable_clk;
 }


 if (!FUNC_6(VAR_9)) {
  FUNC_14("cec-%s: could not clear RX FIFO\n", VAR_9->name);
  VAR_13 = -VAR_0;
  goto err_disable_clk;
 }


 FUNC_12(VAR_11->base, VAR_4,
  FUNC_8(VAR_11->base, VAR_4));
 FUNC_12(VAR_11->base, VAR_3,
  FUNC_8(VAR_11->base, VAR_3));


 FUNC_10(VAR_11->wp, VAR_7);

 FUNC_2(VAR_11->base, VAR_6, 0x1, 3, 3);





 FUNC_12(VAR_11->base, VAR_1, 0x22);




 FUNC_12(VAR_11->base, VAR_2, 0x02);


 FUNC_12(VAR_11->base, VAR_5, 0x03);
 FUNC_13(20);
 FUNC_12(VAR_11->base, VAR_5, 0x04);

 VAR_12 = FUNC_8(VAR_11->base, VAR_5);
 if (FUNC_0(VAR_12, 4, 4) != 0) {
  VAR_12 = FUNC_1(VAR_12, 0, 4, 4);
  FUNC_12(VAR_11->base, VAR_5, VAR_12);






  VAR_12 = FUNC_8(VAR_11->base, VAR_4);
  VAR_12 = FUNC_1(0x0, 0x5, 2, 0);
  FUNC_12(VAR_11->base, VAR_4, VAR_12);
 }
 return 0;

err_disable_clk:
 FUNC_2(VAR_11->wp->base, VAR_8, 0, 5, 0);
 FUNC_4(VAR_11);

 return VAR_13;
}
