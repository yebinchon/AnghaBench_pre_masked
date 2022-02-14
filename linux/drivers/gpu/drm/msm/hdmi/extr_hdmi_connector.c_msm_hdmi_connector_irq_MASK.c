
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_connector {int hpd_work; struct hdmi* hdmi; } ;
struct hdmi {int workq; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hdmi*,int ) ;
 int FUNC_2 (struct hdmi*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 struct hdmi_connector* FUNC_4 (struct drm_connector*) ;

void FUNC_5(struct drm_connector *VAR_7)
{
 struct hdmi_connector *VAR_8 = FUNC_4(VAR_7);
 struct hdmi *VAR_9 = VAR_8->hdmi;
 uint32_t VAR_10, VAR_11;


 VAR_10 = FUNC_1(VAR_9, VAR_6);
 VAR_11 = FUNC_1(VAR_9, VAR_5);

 if ((VAR_11 & VAR_2) &&
   (VAR_10 & VAR_4)) {
  bool VAR_12 = !!(VAR_10 & VAR_3);


  FUNC_2(VAR_9, VAR_5,
   VAR_0);

  FUNC_0("status=%04x, ctrl=%04x", VAR_10, VAR_11);


  VAR_11 = VAR_2;
  if (!VAR_12)
   VAR_11 |= VAR_1;
  FUNC_2(VAR_9, VAR_5, VAR_11);

  FUNC_3(VAR_9->workq, &VAR_8->hpd_work);
 }
}
