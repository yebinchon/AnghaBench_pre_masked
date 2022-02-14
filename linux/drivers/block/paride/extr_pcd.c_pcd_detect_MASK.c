
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcd_unit {int present; TYPE_1__* disk; int tag_set; int pi; int name; } ;
struct TYPE_2__ {int * queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int*** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct pcd_unit* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct pcd_unit*,int,char*) ;
 scalar_t__ FUNC_3 (int ,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_10(void)
{
 char VAR_18[18];
 int VAR_19, VAR_20;
 struct pcd_unit *VAR_21;

 FUNC_8("%s: %s version %s, major %d, nice %d\n",
        VAR_11, VAR_11, VAR_7, VAR_10, VAR_12);

 VAR_13 = FUNC_4(VAR_11);
 if (!VAR_13) {
  FUNC_7("failed to register %s driver\n", VAR_11);
  return -1;
 }

 VAR_19 = 0;
 if (VAR_16 == 0) {
  VAR_21 = VAR_14;
  if (VAR_21->disk && FUNC_3(VAR_21->pi, 1, -1, -1, -1, -1, -1,
       VAR_15, VAR_8, VAR_17, VAR_21->name)) {
   if (!FUNC_2(VAR_21, -1, VAR_18)) {
    VAR_21->present = 1;
    VAR_19++;
   } else
    FUNC_5(VAR_21->pi);
  }
 } else {
  for (VAR_20 = 0, VAR_21 = VAR_14; VAR_20 < VAR_6; VAR_20++, VAR_21++) {
   int *VAR_22 = *VAR_9[VAR_20];
   if (!VAR_22[VAR_3])
    continue;
   if (!VAR_21->disk)
    continue;
   if (!FUNC_3(VAR_21->pi, 0, VAR_22[VAR_3], VAR_22[VAR_1],
         VAR_22[VAR_5], VAR_22[VAR_2], VAR_22[VAR_0],
         VAR_15, VAR_8, VAR_17, VAR_21->name))
    continue;
   if (!FUNC_2(VAR_21, VAR_22[VAR_4], VAR_18)) {
    VAR_21->present = 1;
    VAR_19++;
   } else
    FUNC_5(VAR_21->pi);
  }
 }
 if (VAR_19)
  return 0;

 FUNC_8("%s: No CD-ROM drive found\n", VAR_11);
 for (VAR_20 = 0, VAR_21 = VAR_14; VAR_20 < VAR_6; VAR_20++, VAR_21++) {
  if (!VAR_21->disk)
   continue;
  FUNC_0(VAR_21->disk->queue);
  VAR_21->disk->queue = ((void*)0);
  FUNC_1(&VAR_21->tag_set);
  FUNC_9(VAR_21->disk);
 }
 FUNC_6(VAR_13);
 return -1;
}
