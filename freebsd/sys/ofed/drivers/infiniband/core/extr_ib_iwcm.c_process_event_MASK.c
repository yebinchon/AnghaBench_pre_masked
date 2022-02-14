
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwcm_id_private {int dummy; } ;
struct iw_cm_event {int event; } ;


 int FUNC_0 () ;





 int FUNC_1 (struct iwcm_id_private*,struct iw_cm_event*) ;
 int FUNC_2 (struct iwcm_id_private*,struct iw_cm_event*) ;
 int FUNC_3 (struct iwcm_id_private*,struct iw_cm_event*) ;
 int FUNC_4 (struct iwcm_id_private*,struct iw_cm_event*) ;
 int FUNC_5 (struct iwcm_id_private*,struct iw_cm_event*) ;

__attribute__((used)) static int FUNC_6(struct iwcm_id_private *VAR_0,
    struct iw_cm_event *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->event) {
 case 130:
  FUNC_4(VAR_0, VAR_1);
  break;
 case 131:
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_5(VAR_0, VAR_1);
  break;
 case 132:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  break;
 default:
  FUNC_0();
 }

 return VAR_2;
}
