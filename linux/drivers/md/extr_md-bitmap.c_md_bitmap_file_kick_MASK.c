
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ file; } ;
struct bitmap {TYPE_1__ storage; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct bitmap*) ;
 char* FUNC_2 (scalar_t__,char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bitmap*) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct bitmap *VAR_3)
{
 char *VAR_4, *VAR_5 = ((void*)0);

 if (!FUNC_7(VAR_0, &VAR_3->flags)) {
  FUNC_5(VAR_3);

  if (VAR_3->storage.file) {
   VAR_4 = FUNC_4(VAR_2, VAR_1);
   if (VAR_4)
    VAR_5 = FUNC_2(VAR_3->storage.file,
          VAR_4, VAR_2);

   FUNC_6("%s: kicking failed bitmap file %s from array!\n",
    FUNC_1(VAR_3), FUNC_0(VAR_5) ? "" : VAR_5);

   FUNC_3(VAR_4);
  } else
   FUNC_6("%s: disabling internal bitmap due to errors\n",
    FUNC_1(VAR_3));
 }
}
