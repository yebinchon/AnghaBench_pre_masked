
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int description ;
struct TYPE_12__ {char* string; } ;
struct TYPE_11__ {char const* const string; } ;
struct TYPE_10__ {char const* const string; } ;
struct TYPE_9__ {char const* const string; } ;
struct TYPE_8__ {char const* const string; } ;
struct TYPE_7__ {char const* const string; } ;


 int FUNC_0 (char const* const*) ;
 char* FUNC_1 (char const* const,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char** FUNC_6 (char**,char**) ;
 int FUNC_7 (char**) ;
 int FUNC_8 (char**) ;
 char** FUNC_9 (char const* const,char*,int *,int*,scalar_t__) ;
 TYPE_6__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

int FUNC_12( char *VAR_9, int VAR_10 ) {
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 char **VAR_22 = ((void*)0);
 char **VAR_23 = ((void*)0);
 char **VAR_24 = ((void*)0);
 char *VAR_25, *VAR_26;
 char VAR_27[VAR_0];

 int VAR_28;
 char **VAR_29 = ((void*)0);
 qboolean VAR_30 = VAR_7;


 const char * const VAR_31[] = { VAR_2->string, VAR_4->string, VAR_5->string, VAR_3->string, VAR_6->string };

 *VAR_9 = 0;
 VAR_11 = VAR_15 = 0;


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_31); VAR_12++) {
  VAR_29 = FUNC_9(VAR_31[VAR_12], ((void*)0), ((void*)0), &VAR_28, VAR_8);

  VAR_22 = FUNC_6(VAR_22, VAR_29);
 }

 VAR_20 = FUNC_7(VAR_22);

 for (VAR_12 = 0; VAR_12 < VAR_20; VAR_12++) {
  VAR_25 = VAR_22[VAR_12];


  if (VAR_12 != 0) {
   VAR_30 = VAR_7;
   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
    if (FUNC_4(VAR_22[VAR_13], VAR_25) == 0) {

     VAR_30 = VAR_8;
     break;
    }
   }
  }

  if (VAR_30 || FUNC_4(VAR_25, VAR_1->string) == 0 || FUNC_5(VAR_25, ".", 1) == 0) {
   continue;
  }




  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_31); VAR_13++) {
   VAR_26 = FUNC_1(VAR_31[VAR_13], VAR_25, "");
   VAR_17 = VAR_18 = VAR_19 = 0;
   VAR_23 = FUNC_9(VAR_26, ".pk3", ((void*)0), &VAR_17, VAR_7);
   VAR_24 = FUNC_9(VAR_26, "/", ((void*)0), &VAR_18, VAR_7);
   for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {

    if (FUNC_3(VAR_24[VAR_14], ".pk3dir", FUNC_11(VAR_24[VAR_14]))) {
     VAR_19++;
    }
   }

   FUNC_8(VAR_23);
   FUNC_8(VAR_24);

   if (VAR_17 > 0 || VAR_19 > 0) {
    break;
   }
  }

  if (VAR_17 > 0 || VAR_19 > 0) {
   VAR_16 = FUNC_11(VAR_25) + 1;


   FUNC_2(VAR_25, VAR_27, sizeof(VAR_27));
   VAR_21 = FUNC_11(VAR_27) + 1;

   if (VAR_15 + VAR_16 + 1 + VAR_21 + 1 < VAR_10) {
    FUNC_10(VAR_9, VAR_25);
    VAR_9 += VAR_16;
    FUNC_10(VAR_9, VAR_27);
    VAR_9 += VAR_21;
    VAR_15 += VAR_16 + VAR_21;
    VAR_11++;
   } else {
    break;
   }
  }
 }
 FUNC_8( VAR_22 );

 return VAR_11;
}
