
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct hdmi_wp_data {int base; } ;
struct hdmi_core_data {int adap; struct hdmi_wp_data* wp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int *,struct hdmi_core_data*,char*,int const,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_6 ;

int FUNC_5(struct platform_device *VAR_7, struct hdmi_core_data *VAR_8,
    struct hdmi_wp_data *VAR_9)
{
 const u32 VAR_10 = VAR_3 | VAR_0 |
    VAR_1 | VAR_2;
 int VAR_11;

 VAR_8->adap = FUNC_2(&VAR_6, VAR_8,
  "omap4", VAR_10, VAR_4);
 VAR_11 = FUNC_0(VAR_8->adap);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_8->wp = VAR_9;


 FUNC_1(VAR_8->wp->base, VAR_5, 0, 5, 0);

 VAR_11 = FUNC_4(VAR_8->adap, &VAR_7->dev);
 if (VAR_11 < 0) {
  FUNC_3(VAR_8->adap);
  return VAR_11;
 }
 return 0;
}
