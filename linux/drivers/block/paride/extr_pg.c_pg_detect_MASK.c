
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int present; int pi; int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pg* VAR_8 ;
 int*** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct pg*) ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,...) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_7(void)
{
 struct pg *VAR_16 = &VAR_8[0];
 int VAR_17, VAR_18;

 FUNC_6("%s: %s version %s, major %d\n", VAR_11, VAR_11, VAR_6, VAR_10);

 VAR_12 = FUNC_2(VAR_11);
 if (!VAR_12) {
  FUNC_5("failed to register %s driver\n", VAR_11);
  return -1;
 }

 VAR_17 = 0;
 if (VAR_13 == 0) {
  if (FUNC_1(VAR_16->pi, 1, -1, -1, -1, -1, -1, VAR_14,
       VAR_7, VAR_15, VAR_16->name)) {
   if (!FUNC_0(VAR_16)) {
    VAR_16->present = 1;
    VAR_17++;
   } else
    FUNC_3(VAR_16->pi);
  }

 } else
  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++, VAR_16++) {
   int *VAR_19 = *VAR_9[VAR_18];
   if (!VAR_19[VAR_3])
    continue;
   if (FUNC_1(VAR_16->pi, 0, VAR_19[VAR_3], VAR_19[VAR_1],
        VAR_19[VAR_4], VAR_19[VAR_2], VAR_19[VAR_0],
        VAR_14, VAR_7, VAR_15, VAR_16->name)) {
    if (!FUNC_0(VAR_16)) {
     VAR_16->present = 1;
     VAR_17++;
    } else
     FUNC_3(VAR_16->pi);
   }
  }

 if (VAR_17)
  return 0;

 FUNC_4(VAR_12);
 FUNC_6("%s: No ATAPI device detected\n", VAR_11);
 return -1;
}
