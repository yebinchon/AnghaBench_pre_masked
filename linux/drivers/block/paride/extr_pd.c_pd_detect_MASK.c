
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int changed; int drive; int alt_geom; int standby; scalar_t__ gd; scalar_t__ capacity; int * pi; int name; int rq_list; scalar_t__ access; int pia; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int*** VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 struct pd_unit* VAR_14 ;
 int FUNC_2 (struct pd_unit*) ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int *,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int ,char*,char*,char) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_11(void)
{
 int VAR_17 = 0, VAR_18, VAR_19 = 0;
 struct pd_unit *VAR_20;

 for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
  int *VAR_21 = *VAR_11[VAR_18];
  struct pd_unit *VAR_22 = VAR_14 + VAR_18;
  VAR_22->pi = &VAR_22->pia;
  VAR_22->access = 0;
  VAR_22->changed = 1;
  VAR_22->capacity = 0;
  VAR_22->drive = VAR_21[VAR_6];
  FUNC_10(VAR_22->name, VAR_8, "%s%c", VAR_12, 'a'+VAR_18);
  VAR_22->alt_geom = VAR_21[VAR_1];
  VAR_22->standby = VAR_21[VAR_5];
  if (VAR_21[VAR_4])
   VAR_19++;
  FUNC_0(&VAR_22->rq_list);
 }

 VAR_13 = FUNC_4(VAR_12);
 if (!VAR_13) {
  FUNC_7("failed to register %s driver\n", VAR_12);
  return -1;
 }

 if (VAR_19 == 0) {
  VAR_20 = VAR_14;
  if (FUNC_3(VAR_20->pi, 1, -1, -1, -1, -1, -1, VAR_15,
       VAR_10, VAR_16, VAR_20->name)) {
   FUNC_2(VAR_20);
   if (!VAR_20->gd)
    FUNC_5(VAR_20->pi);
  }

 } else {
  for (VAR_18 = 0, VAR_20 = VAR_14; VAR_18 < VAR_9; VAR_18++, VAR_20++) {
   int *VAR_23 = *VAR_11[VAR_18];
   if (!VAR_23[VAR_4])
    continue;
   if (FUNC_3(VAR_20->pi, 0, VAR_23[VAR_4], VAR_23[VAR_2],
         VAR_23[VAR_7], VAR_23[VAR_3], VAR_23[VAR_0],
         VAR_15, VAR_10, VAR_16, VAR_20->name)) {
    FUNC_2(VAR_20);
    if (!VAR_20->gd)
     FUNC_5(VAR_20->pi);
   }
  }
 }
 for (VAR_18 = 0, VAR_20 = VAR_14; VAR_18 < VAR_9; VAR_18++, VAR_20++) {
  if (VAR_20->gd) {
   FUNC_9(VAR_20->gd, VAR_20->capacity);
   FUNC_1(VAR_20->gd);
   VAR_17 = 1;
  }
 }
 if (!VAR_17) {
  FUNC_8("%s: no valid drive found\n", VAR_12);
  FUNC_6(VAR_13);
 }
 return VAR_17;
}
