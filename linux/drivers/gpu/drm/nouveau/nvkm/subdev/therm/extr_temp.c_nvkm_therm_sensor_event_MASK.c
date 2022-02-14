
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {int (* pause ) (struct nvkm_therm*,int) ;int (* downclock ) (struct nvkm_therm*,int) ;} ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_therm {TYPE_2__ emergency; TYPE_1__* func; struct nvkm_subdev subdev; } ;
typedef enum nvkm_therm_thrs_direction { ____Placeholder_nvkm_therm_thrs_direction } nvkm_therm_thrs_direction ;
typedef enum nvkm_therm_thrs { ____Placeholder_nvkm_therm_thrs } nvkm_therm_thrs ;
struct TYPE_3__ {int (* temp_get ) (struct nvkm_therm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*,int ) ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;

 struct work_struct* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,char const* const) ;
 int FUNC_3 (struct nvkm_therm*,int ) ;
 int FUNC_4 (struct nvkm_therm*,int,int) ;
 int FUNC_5 (struct work_struct*) ;
 int FUNC_6 (struct nvkm_therm*) ;
 int FUNC_7 (struct nvkm_therm*,int) ;
 int FUNC_8 (struct nvkm_therm*,int) ;

void
FUNC_9(struct nvkm_therm *VAR_5, enum nvkm_therm_thrs VAR_6,
   enum nvkm_therm_thrs_direction VAR_7)
{
 struct nvkm_subdev *VAR_8 = &VAR_5->subdev;
 bool VAR_9;
 static const char * const VAR_10[] = {
  "fanboost", "downclock", "critical", "shutdown"
 };
 int VAR_11 = VAR_5->func->temp_get(VAR_5);

 if (VAR_6 < 0 || VAR_6 > 3)
  return;

 if (VAR_7 == VAR_2)
  FUNC_2(VAR_8,
     "temperature (%i C) went below the '%s' threshold\n",
     VAR_11, VAR_10[VAR_6]);
 else
  FUNC_2(VAR_8, "temperature (%i C) hit the '%s' threshold\n",
     VAR_11, VAR_10[VAR_6]);

 VAR_9 = (VAR_7 == VAR_3);
 switch (VAR_6) {
 case 130:
  if (VAR_9) {
   FUNC_4(VAR_5, 1, 100);
   FUNC_3(VAR_5, VAR_1);
  }
  break;
 case 131:
  if (VAR_5->emergency.downclock)
   VAR_5->emergency.downclock(VAR_5, VAR_9);
  break;
 case 132:
  if (VAR_5->emergency.pause)
   VAR_5->emergency.pause(VAR_5, VAR_9);
  break;
 case 128:
  if (VAR_9) {
   struct work_struct *VAR_12;

   VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_0);
   if (VAR_12) {
    FUNC_0(VAR_12, VAR_4);
    FUNC_5(VAR_12);
   }
  }
  break;
 case 129:
  break;
 }

}
