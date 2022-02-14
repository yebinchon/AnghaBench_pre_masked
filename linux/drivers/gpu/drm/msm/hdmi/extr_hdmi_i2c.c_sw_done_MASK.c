
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_i2c_adapter {int sw_done; struct hdmi* hdmi; } ;
struct hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdmi*,int ) ;
 int FUNC_1 (struct hdmi*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct hdmi_i2c_adapter *VAR_4)
{
 struct hdmi *VAR_5 = VAR_4->hdmi;

 if (!VAR_4->sw_done) {
  uint32_t VAR_6;

  VAR_6 = FUNC_0(VAR_5, VAR_3);

  if ((VAR_6 & VAR_2) &&
    (VAR_6 & VAR_1)) {
   VAR_4->sw_done = 1;
   FUNC_1(VAR_5, VAR_3,
     VAR_0);
  }
 }

 return VAR_4->sw_done;
}
