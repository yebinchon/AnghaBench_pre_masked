
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_mods {scalar_t__ Mflag; scalar_t__ fflag; scalar_t__ iflag; scalar_t__ dflag; scalar_t__ bflag; } ;
struct keys_array {int dummy; } ;
struct key_specs {struct sort_mods sm; } ;
struct bwstring {int dummy; } ;
struct TYPE_2__ {scalar_t__ kflag; } ;


 struct bwstring* FUNC_0 (struct bwstring*) ;
 struct bwstring* FUNC_1 (struct bwstring*,struct key_specs*) ;
 struct sort_mods* VAR_0 ;
 struct bwstring* FUNC_2 (struct bwstring*) ;
 struct bwstring* FUNC_3 (struct bwstring*) ;
 struct bwstring* FUNC_4 (struct bwstring*) ;
 struct bwstring* FUNC_5 (struct bwstring*) ;
 struct key_specs* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_6 (struct keys_array*,struct bwstring*,size_t) ;
 TYPE_1__ VAR_3 ;

int
FUNC_7(struct bwstring *VAR_4, struct keys_array *VAR_5)
{

 if (VAR_3.kflag)
  for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   struct bwstring *VAR_7;
   struct key_specs *VAR_8;
   struct sort_mods *VAR_9;

   VAR_8 = &(VAR_1[VAR_6]);
   VAR_7 = FUNC_1(VAR_4, VAR_8);

   VAR_9 = &(VAR_8->sm);
   if (VAR_9->dflag)
    VAR_7 = FUNC_2(VAR_7);
   else if (VAR_9->iflag)
    VAR_7 = FUNC_5(VAR_7);
   if (VAR_9->fflag || VAR_9->Mflag)
    VAR_7 = FUNC_3(VAR_7);

   FUNC_6(VAR_5, VAR_7, VAR_6);
  }
 else {
  struct bwstring *VAR_10 = ((void*)0);
  struct sort_mods *VAR_11 = VAR_0;

  if (VAR_11->bflag) {
   if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_0(VAR_4);
   VAR_10 = FUNC_4(VAR_10);
  }
  if (VAR_11->dflag) {
   if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_0(VAR_4);
   VAR_10 = FUNC_2(VAR_10);
  } else if (VAR_11->iflag) {
   if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_0(VAR_4);
   VAR_10 = FUNC_5(VAR_10);
  }
  if (VAR_11->fflag || VAR_11->Mflag) {
   if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_0(VAR_4);
   VAR_10 = FUNC_3(VAR_10);
  }
  if (VAR_10 == ((void*)0))
   FUNC_6(VAR_5, VAR_4, 0);
  else
   FUNC_6(VAR_5, VAR_10, 0);
 }

 return 0;
}
