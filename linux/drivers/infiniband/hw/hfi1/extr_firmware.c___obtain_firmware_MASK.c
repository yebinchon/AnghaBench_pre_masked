
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;
 int FUNC_3 (int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_4 (struct hfi1_devdata*,int ,int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct hfi1_devdata *VAR_25)
{
 int VAR_26 = 0;

 if (VAR_24 == VAR_7)
  return;
 if (VAR_24 == VAR_6)
  return;


retry:
 if (VAR_24 == VAR_8) {




  FUNC_2(VAR_25, "using alternate firmware names\n");





  FUNC_0();
  if (VAR_12)
   FUNC_3(&VAR_11);
  if (VAR_16)
   FUNC_3(&VAR_15);
  if (VAR_22)
   FUNC_3(&VAR_21);
  if (VAR_19)
   FUNC_3(&VAR_18);
  VAR_13 = VAR_0;
  VAR_17 = VAR_1;
  VAR_23 = VAR_3;
  VAR_20 = VAR_2;







  FUNC_5(100, 120);
 }

 if (VAR_22) {
  VAR_26 = FUNC_4(VAR_25, VAR_23, &VAR_21);
  if (VAR_26)
   goto done;
 }

 if (VAR_19) {
  VAR_26 = FUNC_4(VAR_25, VAR_20, &VAR_18);
  if (VAR_26)
   goto done;
 }

 if (VAR_16) {
  VAR_26 = FUNC_4(VAR_25, VAR_17,
       &VAR_15);
  if (VAR_26)
   goto done;
 }

 if (VAR_12) {
  VAR_26 = FUNC_4(VAR_25, VAR_13, &VAR_11);
  if (VAR_26)
   goto done;
 }

done:
 if (VAR_26) {

  if (VAR_24 == VAR_5 && VAR_25->icode == VAR_10) {

   VAR_24 = VAR_8;
   goto retry;
  }
  FUNC_1(VAR_25, "unable to obtain working firmware\n");
  VAR_24 = VAR_6;
  VAR_14 = -VAR_4;
 } else {

  if (VAR_24 == VAR_5 &&
      VAR_25->icode != VAR_9)
   VAR_24 = VAR_8;
  else
   VAR_24 = VAR_7;
 }
}
