
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {scalar_t__ model; struct hgpk_data* private; } ;
struct hgpk_data {scalar_t__ recalib_window; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*,char*) ;
 int FUNC_4 (struct psmouse*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_6)
{
 struct hgpk_data *VAR_7 = VAR_6->private;
 int VAR_8;


 if (VAR_6->model < VAR_0)
  return 0;

 if (!VAR_2) {
  FUNC_3(VAR_6, "recalibration disabled, ignoring\n");
  return 0;
 }

 FUNC_3(VAR_6, "recalibrating touchpad..\n");


 FUNC_4(VAR_6, VAR_1);


 VAR_8 = FUNC_0(VAR_6, 1);
 if (VAR_8)
  return VAR_8;







 if (FUNC_2(VAR_6))
  return -1;

 if (VAR_5)
  FUNC_3(VAR_6, "touchpad reactivated\n");






 if (VAR_4)
  VAR_7->recalib_window = VAR_3 +
   FUNC_1(VAR_4);

 return 0;
}
