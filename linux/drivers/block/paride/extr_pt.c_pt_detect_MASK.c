
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int present; int drive; int * pi; int name; int * bufptr; scalar_t__ last_sense; scalar_t__ flags; int available; int pia; } ;


 int* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int) ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int *,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,...) ;
 struct pt_unit* VAR_14 ;
 int FUNC_7 (struct pt_unit*) ;
 int VAR_15 ;
 int FUNC_8 (int ,int ,char*,char*,int) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_9(void)
{
 struct pt_unit *VAR_17;
 int VAR_18 = 0, VAR_19 = 0;
 int VAR_20;

 FUNC_6("%s: %s version %s, major %d\n", VAR_12, VAR_12, VAR_10, VAR_11);

 VAR_13 = FUNC_2(VAR_12);
 if (!VAR_13) {
  FUNC_5("failed to register %s driver\n", VAR_12);
  return -1;
 }

 VAR_18 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
  struct pt_unit *VAR_21 = &VAR_14[VAR_20];
  VAR_21->pi = &VAR_21->pia;
  FUNC_0(&VAR_21->available, 1);
  VAR_21->flags = 0;
  VAR_21->last_sense = 0;
  VAR_21->present = 0;
  VAR_21->bufptr = ((void*)0);
  VAR_21->drive = VAR_0[VAR_5];
  FUNC_8(VAR_21->name, VAR_8, "%s%d", VAR_12, VAR_20);
  if (!VAR_0[VAR_4])
   continue;
  VAR_18++;
  if (FUNC_1(VAR_21->pi, 0, VAR_0[VAR_4], VAR_0[VAR_2], VAR_0[VAR_6],
       VAR_0[VAR_3], VAR_0[VAR_1], VAR_15, VAR_7,
       VAR_16, VAR_21->name)) {
   if (!FUNC_7(VAR_21)) {
    VAR_21->present = 1;
    VAR_19++;
   } else
    FUNC_3(VAR_21->pi);
  }
 }
 if (VAR_18 == 0) {
  VAR_17 = VAR_14;
  if (FUNC_1(VAR_17->pi, 1, -1, -1, -1, -1, -1, VAR_15,
       VAR_7, VAR_16, VAR_17->name)) {
   if (!FUNC_7(VAR_17)) {
    VAR_17->present = 1;
    VAR_19++;
   } else
    FUNC_3(VAR_17->pi);
  }

 }
 if (VAR_19)
  return 0;

 FUNC_4(VAR_13);
 FUNC_6("%s: No ATAPI tape drive detected\n", VAR_12);
 return -1;
}
