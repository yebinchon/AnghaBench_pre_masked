
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* version; int* length; } ;
struct TYPE_10__ {char* flags; char* component; TYPE_2__ h; } ;
struct TYPE_11__ {TYPE_3__ SL; } ;
struct TYPE_12__ {TYPE_4__ rr_entry; } ;
struct ISO_SUSP_ATTRIBUTES {TYPE_5__ attr; } ;
struct TYPE_13__ {int head; TYPE_1__* node; } ;
typedef TYPE_6__ cd9660node ;
struct TYPE_8__ {char* symlink; } ;


 char VAR_0 ;
 char VAR_1 ;
 void* VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct ISO_SUSP_ATTRIBUTES*,int ) ;
 struct ISO_SUSP_ATTRIBUTES* FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_8 ;

void
FUNC_3(cd9660node *VAR_9)
{
 struct ISO_SUSP_ATTRIBUTES* VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 char VAR_17[255];
 char VAR_18[255];
 char* VAR_19;

 VAR_19 = VAR_9->node->symlink;

 VAR_13 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_16 = 0;
 VAR_10 = FUNC_1(VAR_7,
     VAR_5, "SL", VAR_6);

 VAR_10->attr.rr_entry.SL.h.version[0] = 1;
 VAR_10->attr.rr_entry.SL.flags[0] = VAR_2;

 if (*VAR_19 == '/') {
  VAR_17[0] = VAR_4;
  VAR_17[1] = 0;
  FUNC_2(VAR_10->attr.rr_entry.SL.component + VAR_11,
      VAR_17, 2);
  VAR_11 += 2;
  VAR_19++;
 }

 for (VAR_14 = 0; VAR_14 < (VAR_12 + 2); VAR_14++)
  VAR_17[VAR_14] = '\0';

 while (!VAR_13) {
  while ((*VAR_19 != '/') && (*VAR_19 != '\0')) {
   VAR_16 = 1;
   if (*VAR_19 == '.') {
    if ((*(VAR_19 + 1) == '/') || (*(VAR_19 + 1)
         == '\0')) {
     VAR_17[0] = VAR_1;
     VAR_19++;
    } else if(*(VAR_19 + 1) == '.') {
     if ((*(VAR_19 + 2) == '/') ||
         (*(VAR_19 + 2) == '\0')) {
      VAR_17[0] = VAR_3;
      VAR_19 += 2;
     }
    } else {
     VAR_17[VAR_12+2] = *VAR_19;
     VAR_19++;
     VAR_12++;
    }
   } else {
    VAR_17[VAR_12 + 2] = *VAR_19;
    VAR_19++;
    VAR_12++;
   }
  }

  if ((VAR_11 + VAR_12) >= 249) {
   VAR_10->attr.rr_entry.SL.flags[0] |= VAR_0;

   VAR_15 = 0;

   if (VAR_11 <= 249) {
    while(VAR_15 != (249 - VAR_11)) {
     VAR_18[VAR_15] = VAR_17[VAR_15];
     VAR_15++;
    }
    VAR_18[0] = VAR_0;
    VAR_18[1] = VAR_15 - 2;
    FUNC_2(
        VAR_10->attr.rr_entry.SL.component +
     VAR_11,
        VAR_18, VAR_15);
   }

   VAR_11 += VAR_15;
   VAR_10->attr.rr_entry.SL.h.length[0] = VAR_11 + 5;
   FUNC_0(&VAR_9->head, VAR_10, VAR_8);
   VAR_10= FUNC_1(VAR_7,
          VAR_5, "SL", VAR_6);
   VAR_10->attr.rr_entry.SL.h.version[0] = 1;
   VAR_10->attr.rr_entry.SL.flags[0] = VAR_2;

   VAR_11 = 0;

   if (VAR_12 > 2) {
    while (VAR_15 != VAR_12 + 2) {
     VAR_10->attr.rr_entry.SL.component[
         VAR_11 + 2] = VAR_17[VAR_15];
     VAR_15++;
     VAR_11++;
    }
    VAR_10->attr.rr_entry.SL.component[1]
        = VAR_11;
    VAR_11+= 2;
   } else {
    while(VAR_15 != VAR_12) {
     VAR_10->attr.rr_entry.SL.component[
         VAR_11+2] = VAR_17[VAR_15];
     VAR_15++;
     VAR_11++;
    }
   }
  } else {
   if (VAR_16 == 1) {
    VAR_17[1] = VAR_12;
    FUNC_2(VAR_10->attr.rr_entry.SL.component +
     VAR_11,
        VAR_17, VAR_12 + 2);
    VAR_11 += VAR_12 + 2;
   }
  }

  if (*VAR_19 == '\0') {
   VAR_13 = 1;
   VAR_10->attr.rr_entry.SL.h.length[0] = VAR_11 + 5;
   FUNC_0(&VAR_9->head, VAR_10, VAR_8);
  } else {
   VAR_19++;
   VAR_12 = 0;
   VAR_16 = 0;
   for(VAR_14 = 0; VAR_14 < 255; VAR_14++) {
    VAR_17[VAR_14] = '\0';
   }
  }
 }
}
