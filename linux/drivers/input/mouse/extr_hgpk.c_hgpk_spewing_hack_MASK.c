
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int x_tally; int y_tally; int spew_flag; int recalib_wq; int spew_count; } ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hgpk_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct psmouse*,int *,int ) ;
 int FUNC_4 (struct psmouse*,char*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct psmouse *VAR_2,
         int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct hgpk_data *VAR_7 = VAR_2->private;



 if (VAR_3 || VAR_4)
  return;


 if (!VAR_1)
  return;

 if (FUNC_0(VAR_5) > 3 || FUNC_0(VAR_6) > 3) {

  FUNC_1(VAR_7);
  return;
 }



 VAR_7->x_tally += VAR_5;
 VAR_7->y_tally += VAR_6;

 switch (VAR_7->spew_flag) {
 case 130:

  VAR_7->spew_flag = 131;



 case 131:
  VAR_7->spew_count++;

  if (VAR_7->spew_count < VAR_0)
   break;


  VAR_7->spew_flag = 128;



 case 128:




  if (FUNC_0(VAR_7->x_tally) < 3 && FUNC_0(VAR_7->y_tally) < 3) {
   FUNC_4(VAR_2, "packet spew detected (%d,%d)\n",
         VAR_7->x_tally, VAR_7->y_tally);
   VAR_7->spew_flag = 129;
   FUNC_3(VAR_2, &VAR_7->recalib_wq,
        FUNC_2(VAR_1));
  }

  break;
 case 129:


  break;
 }
}
