
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_3__ {int type; float dist; int signbits; scalar_t__* normal; } ;
typedef TYPE_1__ plane_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0 (vec3_t VAR_3, vec3_t VAR_4, plane_t *VAR_5)
{
 float VAR_6, VAR_7;
 int VAR_8;


 if (VAR_5->type < 3)
 {
  VAR_8 = 0;
  if (VAR_4[VAR_5->type] > VAR_5->dist+VAR_0) VAR_8 |= VAR_2;
  if (VAR_3[VAR_5->type] < VAR_5->dist-VAR_0) VAR_8 |= VAR_1;
  return VAR_8;
 }


 switch (VAR_5->signbits)
 {
 case 0:
  VAR_6 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_4[2];
  VAR_7 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_3[2];
  break;
 case 1:
  VAR_6 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_4[2];
  VAR_7 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_3[2];
  break;
 case 2:
  VAR_6 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_4[2];
  VAR_7 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_3[2];
  break;
 case 3:
  VAR_6 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_4[2];
  VAR_7 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_3[2];
  break;
 case 4:
  VAR_6 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_3[2];
  VAR_7 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_4[2];
  break;
 case 5:
  VAR_6 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_3[2];
  VAR_7 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_4[2];
  break;
 case 6:
  VAR_6 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_3[2];
  VAR_7 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_4[2];
  break;
 case 7:
  VAR_6 = VAR_5->normal[0]*VAR_3[0] + VAR_5->normal[1]*VAR_3[1] + VAR_5->normal[2]*VAR_3[2];
  VAR_7 = VAR_5->normal[0]*VAR_4[0] + VAR_5->normal[1]*VAR_4[1] + VAR_5->normal[2]*VAR_4[2];
  break;
 default:
  VAR_6 = VAR_7 = 0;

  break;
 }

 VAR_8 = 0;
 if (VAR_6 - VAR_5->dist >= VAR_0) VAR_8 = VAR_2;
 if (VAR_7 - VAR_5->dist < VAR_0) VAR_8 |= VAR_1;



 return VAR_8;
}
