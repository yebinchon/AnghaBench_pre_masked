
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_5__ {float accuracy; float assistCount; float defendCount; float excellentCount; float impressiveCount; float perfect; float guantletCount; float captures; } ;
typedef TYPE_1__ score_t ;
struct TYPE_6__ {float w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ rectDef_t ;
typedef int qhandle_t ;
struct TYPE_7__ {size_t selectedScore; TYPE_1__* scores; } ;






 int FUNC_0 (scalar_t__,scalar_t__,float,scalar_t__,int ) ;




 int FUNC_1 (scalar_t__,scalar_t__,float,double*,char*,int ,int ,int ) ;
 float FUNC_2 (char*,float,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (double*) ;
 char* FUNC_4 (char*,int) ;

void FUNC_5(int VAR_1, rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qhandle_t VAR_5) {
 score_t *VAR_6 = &VAR_0.scores[VAR_0.selectedScore];
 float VAR_7 = 0;
 char *VAR_8 = ((void*)0);
 VAR_4[3] = 0.25;

 switch (VAR_1) {
  case 135:
   VAR_7 = VAR_6->accuracy;
   break;
  case 134:
   VAR_7 = VAR_6->assistCount;
   break;
  case 132:
   VAR_7 = VAR_6->defendCount;
   break;
  case 131:
   VAR_7 = VAR_6->excellentCount;
   break;
  case 129:
   VAR_7 = VAR_6->impressiveCount;
   break;
  case 128:
   VAR_7 = VAR_6->perfect;
   break;
  case 130:
   VAR_7 = VAR_6->guantletCount;
   break;
  case 133:
   VAR_7 = VAR_6->captures;
   break;
 }

 if (VAR_7 > 0) {
  if (VAR_1 != 128) {
   if (VAR_1 == 135) {
    VAR_8 = FUNC_4("%i%%", (int)VAR_7);
    if (VAR_7 > 50) {
     VAR_4[3] = 1.0;
    }
   } else {
    VAR_8 = FUNC_4("%i", (int)VAR_7);
    VAR_4[3] = 1.0;
   }
  } else {
   if (VAR_7) {
    VAR_4[3] = 1.0;
   }
   VAR_8 = "Wow";
  }
 }

 FUNC_3(VAR_4);
 FUNC_0( VAR_2->x, VAR_2->y, VAR_2->w, VAR_2->h, VAR_5 );

 if (VAR_8) {
  VAR_4[3] = 1.0;
  VAR_7 = FUNC_2(VAR_8, VAR_3, 0);
  FUNC_1(VAR_2->x + (VAR_2->w - VAR_7) / 2, VAR_2->y + VAR_2->h + 10 , VAR_3, VAR_4, VAR_8, 0, 0, 0);
 }
 FUNC_3(((void*)0));

}
