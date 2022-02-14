
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_type {int sectrac; int secsize; int datalen; int gap; int tracks; int heads; int f_gap; int f_inter; int offset_side2; int size; int flags; void* trans; } ;
typedef enum fd_drivetype { ____Placeholder_fd_drivetype } fd_drivetype ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*) ;

void
FUNC_10(const char *VAR_9, enum fd_drivetype VAR_10,
   struct fd_type VAR_11, struct fd_type *VAR_12)
{
 int VAR_13, VAR_14;
 const char *VAR_15;
 char *VAR_16;

 *VAR_12 = VAR_11;

 for (VAR_13 = 0;; VAR_13++) {
  if (VAR_9 == ((void*)0))
   break;

  if ((VAR_15 = FUNC_6(VAR_9, ',')) == ((void*)0)) {
   VAR_16 = FUNC_8(VAR_9);
   if (VAR_16 == ((void*)0))
    FUNC_0();
   VAR_9 = 0;
  } else {
   VAR_16 = FUNC_4(VAR_15 - VAR_9 + 1);
   if (VAR_16 == ((void*)0))
    FUNC_0();
   FUNC_5(VAR_16, VAR_9, VAR_15 - VAR_9);
   VAR_16[VAR_15 - VAR_9] = 0;

   VAR_9 = VAR_15 + 1;
  }
  if (FUNC_9(VAR_16) == 0) {
   FUNC_2(VAR_16);
   continue;
  }

  switch (VAR_13) {
  case 0:
   if (FUNC_3(VAR_16, &VAR_12->sectrac))
    FUNC_1(VAR_0,
         "bad numeric value for sectrac: %s", VAR_16);
   break;

  case 1:
   if (FUNC_3(VAR_16, &VAR_14))
    FUNC_1(VAR_0,
         "bad numeric value for secsize: %s", VAR_16);
   if (VAR_14 == 128) VAR_12->secsize = 0;
   else if (VAR_14 == 256) VAR_12->secsize = 1;
   else if (VAR_14 == 512) VAR_12->secsize = 2;
   else if (VAR_14 == 1024) VAR_12->secsize = 3;
   else
    FUNC_1(VAR_0, "bad sector size %d", VAR_14);
   break;

  case 2:
   if (FUNC_3(VAR_16, &VAR_14))
    FUNC_1(VAR_0,
         "bad numeric value for datalen: %s", VAR_16);
   if (VAR_14 >= 256)
    FUNC_1(VAR_0, "bad datalen %d", VAR_14);
   VAR_12->datalen = VAR_14;
   break;

  case 3:
   if (FUNC_3(VAR_16, &VAR_12->gap))
    FUNC_1(VAR_0,
         "bad numeric value for gap: %s", VAR_16);
   break;

  case 4:
   if (FUNC_3(VAR_16, &VAR_14))
    FUNC_1(VAR_0,
         "bad numeric value for ncyls: %s", VAR_16);
   if (VAR_14 > 85)
    FUNC_1(VAR_0, "bad # of cylinders %d", VAR_14);
   VAR_12->tracks = VAR_14;
   break;

  case 5:
   if (FUNC_3(VAR_16, &VAR_14))
    FUNC_1(VAR_0,
         "bad numeric value for speed: %s", VAR_16);
   switch (VAR_10) {
   default:
    FUNC_0();

   case 129:
   case 128:
    if (VAR_14 == 250)
     VAR_12->trans = VAR_2;
    else
     FUNC_1(VAR_0, "bad speed %d", VAR_14);
    break;

   case 132:
    if (VAR_14 == 300)
     VAR_12->trans = VAR_3;
    else if (VAR_14 == 250)
     VAR_12->trans = VAR_2;
    else if (VAR_14 == 500)
     VAR_12->trans = VAR_4;
    else
     FUNC_1(VAR_0, "bad speed %d", VAR_14);
    break;

   case 130:
    if (VAR_14 == 1000)
     VAR_12->trans = VAR_1;

   case 131:
    if (VAR_14 == 250)
     VAR_12->trans = VAR_2;
    else if (VAR_14 == 500)
     VAR_12->trans = VAR_4;
    else
     FUNC_1(VAR_0, "bad speed %d", VAR_14);
    break;
   }
   break;

  case 6:
   if (FUNC_3(VAR_16, &VAR_14))
    FUNC_1(VAR_0,
         "bad numeric value for heads: %s", VAR_16);
   if (VAR_14 == 1 || VAR_14 == 2)
    VAR_12->heads = VAR_14;
   else
    FUNC_1(VAR_0, "bad # of heads %d", VAR_14);
   break;

  case 7:
   if (FUNC_3(VAR_16, &VAR_12->f_gap))
    FUNC_1(VAR_0,
         "bad numeric value for f_gap: %s", VAR_16);
   break;

  case 8:
   if (FUNC_3(VAR_16, &VAR_12->f_inter))
    FUNC_1(VAR_0,
         "bad numeric value for f_inter: %s", VAR_16);
   break;

  case 9:
   if (FUNC_3(VAR_16, &VAR_12->offset_side2))
    FUNC_1(VAR_0,
         "bad numeric value for offs2: %s", VAR_16);
   break;

  default:
   if (FUNC_7(VAR_16, "+mfm") == 0)
    VAR_12->flags |= VAR_7;
   else if (FUNC_7(VAR_16, "-mfm") == 0)
    VAR_12->flags &= ~VAR_7;
   else if (FUNC_7(VAR_16, "+auto") == 0)
    VAR_12->flags |= VAR_6;
   else if (FUNC_7(VAR_16, "-auto") == 0)
    VAR_12->flags &= ~VAR_6;
   else if (FUNC_7(VAR_16, "+2step") == 0)
    VAR_12->flags |= VAR_5;
   else if (FUNC_7(VAR_16, "-2step") == 0)
    VAR_12->flags &= ~VAR_5;
   else if (FUNC_7(VAR_16, "+perpnd") == 0)
    VAR_12->flags |= VAR_8;
   else if (FUNC_7(VAR_16, "-perpnd") == 0)
    VAR_12->flags &= ~VAR_8;
   else
    FUNC_1(VAR_0, "bad flag: %s", VAR_16);
   break;
  }
  FUNC_2(VAR_16);
 }

 VAR_12->size = VAR_12->tracks * VAR_12->heads * VAR_12->sectrac;
}
