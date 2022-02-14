
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {scalar_t__ pktcnt; scalar_t__ pktsize; int packet; struct hgpk_data* private; } ;
struct hgpk_data {scalar_t__ mode; scalar_t__ recalib_window; int recalib_wq; } ;
typedef int psmouse_ret_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct psmouse*,int ) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct psmouse*,char*) ;
 int FUNC_5 (struct psmouse*,int *,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static psmouse_ret_t FUNC_7(struct psmouse *VAR_6)
{
 struct hgpk_data *VAR_7 = VAR_6->private;

 if (!FUNC_0(VAR_6, VAR_6->packet))
  return VAR_1;

 if (VAR_6->pktcnt >= VAR_6->pktsize) {
  if (VAR_7->mode == VAR_0)
   FUNC_2(VAR_6);
  else
   FUNC_1(VAR_6);
  return VAR_2;
 }

 if (VAR_7->recalib_window) {
  if (FUNC_6(VAR_4, VAR_7->recalib_window)) {




   FUNC_4(VAR_6,
        "packet inside calibration window, queueing another recalibration\n");
   FUNC_5(VAR_6, &VAR_7->recalib_wq,
     FUNC_3(VAR_5));
  }
  VAR_7->recalib_window = 0;
 }

 return VAR_3;
}
