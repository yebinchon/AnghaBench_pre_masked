
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int * device_t ;
typedef scalar_t__ devclass_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int) ;

device_t
FUNC_10(device_t VAR_4, uint16_t *VAR_5)
{
 devclass_t VAR_6;
 device_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 uint16_t VAR_14;
 bool VAR_15;

 VAR_6 = FUNC_2("pci");
 VAR_7 = VAR_12 = VAR_4;

 *VAR_5 = FUNC_8(VAR_4);






 for (;;) {
  VAR_8 = FUNC_5(VAR_7);
  FUNC_0(VAR_8 != ((void*)0), ("dmar_get_requester(%s): NULL parent "
      "for %s", FUNC_4(VAR_4), FUNC_4(VAR_7)));
  FUNC_0(FUNC_3(VAR_8) == VAR_6,
      ("dmar_get_requester(%s): non-pci parent %s for %s",
      FUNC_4(VAR_4), FUNC_4(VAR_8),
      FUNC_4(VAR_7)));

  VAR_9 = FUNC_5(VAR_8);
  FUNC_0(VAR_9 != ((void*)0), ("dmar_get_requester(%s): NULL bridge "
      "for %s", FUNC_4(VAR_4), FUNC_4(VAR_8)));







  VAR_10 = FUNC_5(VAR_9);
  if (FUNC_3(VAR_10) != VAR_6)
   break;
  VAR_11 = FUNC_5(VAR_10);

  if (FUNC_6(VAR_7, VAR_3, &VAR_13) == 0) {






   VAR_7 = VAR_9;
  } else {





   VAR_15 = FUNC_6(VAR_9, VAR_3,
       &VAR_13) == 0;
   VAR_12 = VAR_9;
   if (!VAR_15 && FUNC_6(VAR_11,
       VAR_3, &VAR_13) == 0) {
    VAR_14 = FUNC_9(VAR_11,
        VAR_13 + VAR_2, 2);
    if ((VAR_14 & VAR_0) !=
        VAR_1)
     VAR_15 = 1;
   }

   if (VAR_15) {
    *VAR_5 = FUNC_1(FUNC_7(VAR_7), 0, 0);
    VAR_7 = VAR_11;
   } else {







    *VAR_5 = FUNC_8(VAR_9);
    VAR_7 = VAR_9;
   }
  }
 }
 return (VAR_12);
}
