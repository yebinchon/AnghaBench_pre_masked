
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct psmouse*) ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int ,struct psmouse*,int,int) ;
 unsigned int VAR_22 ;
 int FUNC_5 (struct psmouse*) ;
 scalar_t__ FUNC_6 (struct psmouse*,unsigned int,unsigned int*,int,int) ;
 int VAR_23 ;
 int FUNC_7 (struct psmouse*) ;
 int FUNC_8 (struct psmouse*) ;

__attribute__((used)) static int FUNC_9(struct psmouse *VAR_24,
         unsigned int VAR_25, bool VAR_26)
{
 bool VAR_27 = 0;
 int VAR_28;





 if (FUNC_4(VAR_21,
         VAR_24, 0, VAR_26)) {
  if (VAR_25 > VAR_11 &&
      FUNC_0(VAR_0) &&
      (!VAR_26 || FUNC_2(VAR_24) == 0)) {
   return VAR_7;
  }
  VAR_22 = VAR_25 = VAR_14;
 }





 if (FUNC_6(VAR_24, VAR_13, &VAR_25,
     VAR_26, VAR_25 > VAR_11))
  return VAR_13;

 if (FUNC_6(VAR_24, VAR_20, &VAR_25,
     VAR_26, VAR_25 > VAR_11))
  return VAR_20;





 if (VAR_25 > VAR_11 &&
     FUNC_6(VAR_24, VAR_17, &VAR_25,
     VAR_26, 1)) {
  return VAR_17;
 }







 if (VAR_25 > VAR_14 &&
     FUNC_4(VAR_23,
         VAR_24, 0, VAR_26)) {
  VAR_27 = 1;

  if (VAR_25 > VAR_11) {





   if (FUNC_0(VAR_1) ||
       FUNC_0(VAR_2)) {
    if (!VAR_26)
     return VAR_16;

    VAR_28 = FUNC_7(VAR_24);
    if (VAR_28 >= 0)
     return VAR_28;
   }







   VAR_25 = VAR_11;
  }





  FUNC_8(VAR_24);
 }






 if (VAR_25 > VAR_11 &&
     FUNC_6(VAR_24, VAR_5, &VAR_25,
     VAR_26, 1)) {
  return VAR_5;
 }


 if (VAR_25 > VAR_11) {
  FUNC_3(&VAR_24->ps2dev, ((void*)0), VAR_4);
  if (FUNC_6(VAR_24, VAR_3,
      &VAR_25, VAR_26, 1))
   return VAR_3;
 }


 if (VAR_25 > VAR_11 &&
     FUNC_6(VAR_24, VAR_10, &VAR_25,
     VAR_26, 1)) {
  return VAR_10;
 }


 if (VAR_25 > VAR_11 &&
     FUNC_6(VAR_24, VAR_6,
     &VAR_25, VAR_26, 0)) {
  if (!VAR_26)
   return VAR_6;

  VAR_28 = FUNC_1(VAR_24);
  if (VAR_28 >= 0)
   return VAR_28;
 }

 if (VAR_25 > VAR_11) {
  if (FUNC_6(VAR_24, VAR_9,
      &VAR_25, VAR_26, 1))
   return VAR_9;

  if (FUNC_6(VAR_24, VAR_15,
      &VAR_25, VAR_26, 1))
   return VAR_15;

  if (FUNC_6(VAR_24, VAR_19,
      &VAR_25, VAR_26, 1))
   return VAR_19;

  if (FUNC_6(VAR_24, VAR_18,
      &VAR_25, VAR_26, 1))
   return VAR_18;
 }





 if (VAR_25 > VAR_11 &&
     FUNC_6(VAR_24, VAR_8,
     &VAR_25, VAR_26, 1)) {
  return VAR_8;
 }






 FUNC_3(&VAR_24->ps2dev, ((void*)0), VAR_4);
 FUNC_5(VAR_24);

 if (VAR_25 >= VAR_11 &&
     FUNC_6(VAR_24, VAR_11,
     &VAR_25, VAR_26, 1)) {
  return VAR_11;
 }

 if (VAR_25 >= VAR_12 &&
     FUNC_6(VAR_24, VAR_12,
     &VAR_25, VAR_26, 1)) {
  return VAR_12;
 }





 FUNC_6(VAR_24, VAR_14,
        &VAR_25, VAR_26, 1);

 if (VAR_27) {






  FUNC_5(VAR_24);
 }

 return VAR_14;
}
