
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec_t ;
typedef int* vec3_t ;
typedef int tx ;
struct TYPE_7__ {int** vecs; scalar_t__ flags; scalar_t__ value; int nexttexinfo; scalar_t__* texture; } ;
typedef TYPE_1__ texinfo_t ;
typedef int plane_t ;
struct TYPE_8__ {int* scale; int rotate; float* shift; scalar_t__ flags; scalar_t__ value; scalar_t__* name; } ;
typedef TYPE_2__ brush_texture_t ;
struct TYPE_9__ {scalar_t__* animname; } ;


 float FUNC_0 (int*,int*) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_3__* VAR_3 ;

int FUNC_8(plane_t *VAR_4, brush_texture_t *VAR_5, vec3_t VAR_6)
{
 vec3_t VAR_7[2];
 int VAR_8, VAR_9;
 vec_t VAR_10, VAR_11, VAR_12;
 vec_t VAR_13, VAR_14;
 texinfo_t VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 float VAR_20[2];
 brush_texture_t VAR_21;
 int VAR_22;

 if (!VAR_5->name[0])
  return 0;

 FUNC_4 (&VAR_15, 0, sizeof(VAR_15));
 FUNC_7 (VAR_15.texture, VAR_5->name);

 FUNC_2(VAR_4, VAR_7[0], VAR_7[1]);

 VAR_20[0] = FUNC_0 (VAR_6, VAR_7[0]);
 VAR_20[1] = FUNC_0 (VAR_6, VAR_7[1]);

 if (!VAR_5->scale[0])
  VAR_5->scale[0] = 1;
 if (!VAR_5->scale[1])
  VAR_5->scale[1] = 1;



 if (VAR_5->rotate == 0)
  { VAR_11 = 0 ; VAR_12 = 1; }
 else if (VAR_5->rotate == 90)
  { VAR_11 = 1 ; VAR_12 = 0; }
 else if (VAR_5->rotate == 180)
  { VAR_11 = 0 ; VAR_12 = -1; }
 else if (VAR_5->rotate == 270)
  { VAR_11 = -1 ; VAR_12 = 0; }
 else
 {
  VAR_10 = VAR_5->rotate / 180 * VAR_0;
  VAR_11 = FUNC_5(VAR_10);
  VAR_12 = FUNC_3(VAR_10);
 }

 if (VAR_7[0][0])
  VAR_8 = 0;
 else if (VAR_7[0][1])
  VAR_8 = 1;
 else
  VAR_8 = 2;

 if (VAR_7[1][0])
  VAR_9 = 0;
 else if (VAR_7[1][1])
  VAR_9 = 1;
 else
  VAR_9 = 2;

 for (VAR_17=0 ; VAR_17<2 ; VAR_17++)
 {
  VAR_13 = VAR_12 * VAR_7[VAR_17][VAR_8] - VAR_11 * VAR_7[VAR_17][VAR_9];
  VAR_14 = VAR_11 * VAR_7[VAR_17][VAR_8] + VAR_12 * VAR_7[VAR_17][VAR_9];
  VAR_7[VAR_17][VAR_8] = VAR_13;
  VAR_7[VAR_17][VAR_9] = VAR_14;
 }

 for (VAR_17=0 ; VAR_17<2 ; VAR_17++)
  for (VAR_18=0 ; VAR_18<3 ; VAR_18++)
   VAR_15.vecs[VAR_17][VAR_18] = VAR_7[VAR_17][VAR_18] / VAR_5->scale[VAR_17];

 VAR_15.vecs[0][3] = VAR_5->shift[0] + VAR_20[0];
 VAR_15.vecs[1][3] = VAR_5->shift[1] + VAR_20[1];
 VAR_15.flags = VAR_5->flags;
 VAR_15.value = VAR_5->value;




 VAR_16 = VAR_2;
 for (VAR_17=0 ; VAR_17<VAR_1 ; VAR_17++, VAR_16++)
 {
  if (VAR_16->flags != VAR_15.flags)
   continue;
  if (VAR_16->value != VAR_15.value)
   continue;
  for (VAR_18=0 ; VAR_18<2 ; VAR_18++)
  {
   if (FUNC_6 (VAR_16->texture, VAR_15.texture))
    goto skip;
   for (VAR_19=0 ; VAR_19<4 ; VAR_19++)
   {
    if (VAR_16->vecs[VAR_18][VAR_19] != VAR_15.vecs[VAR_18][VAR_19])
     goto skip;
   }
  }
  return VAR_17;
skip:;
 }
 *VAR_16 = VAR_15;
 VAR_1++;


 VAR_22 = FUNC_1 (VAR_5->name);
 if (VAR_3[VAR_22].animname[0])
 {
  VAR_21 = *VAR_5;
  FUNC_7 (VAR_21.name, VAR_3[VAR_22].animname);
  VAR_16->nexttexinfo = FUNC_8 (VAR_4, &VAR_21, VAR_6);
 }
 else
  VAR_16->nexttexinfo = -1;


 return VAR_17;
}
