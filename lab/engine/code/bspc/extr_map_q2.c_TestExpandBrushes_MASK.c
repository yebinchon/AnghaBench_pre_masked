
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
struct TYPE_10__ {size_t planenum; size_t texinfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_11__ {int numsides; TYPE_2__* original_sides; } ;
typedef TYPE_3__ mapbrush_t ;
struct TYPE_13__ {int* normal; int dist; } ;
struct TYPE_12__ {char* texture; } ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,...) ;
 TYPE_3__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;

void FUNC_8 (void)
{
 FILE *VAR_4;
 side_t *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 winding_t *VAR_9;
 char *VAR_10 = "expanded.map";
 mapbrush_t *VAR_11;
 vec_t VAR_12;

 FUNC_3("writing %s\n", VAR_10);
 VAR_4 = FUNC_6 (VAR_10, "wb");
 if (!VAR_4)
  FUNC_1 ("Can't write %s\n", VAR_10);

 FUNC_7 (VAR_4, "{\n\"classname\" \"worldspawn\"\n");

 for (VAR_8=0 ; VAR_8<VAR_2 ; VAR_8++)
 {
  VAR_11 = &VAR_0[VAR_8];
  FUNC_7 (VAR_4, "{\n");
  for (VAR_6=0 ; VAR_6<VAR_11->numsides ; VAR_6++)
  {
   VAR_5 = VAR_11->original_sides + VAR_6;
   VAR_12 = VAR_1[VAR_5->planenum].dist;
   for (VAR_7=0 ; VAR_7<3 ; VAR_7++)
    VAR_12 += FUNC_4( 16 * VAR_1[VAR_5->planenum].normal[VAR_7] );

   VAR_9 = FUNC_0 (VAR_1[VAR_5->planenum].normal, VAR_12);

   FUNC_7 (VAR_4,"( %i %i %i ) ", (int)VAR_9->p[0][0], (int)VAR_9->p[0][1], (int)VAR_9->p[0][2]);
   FUNC_7 (VAR_4,"( %i %i %i ) ", (int)VAR_9->p[1][0], (int)VAR_9->p[1][1], (int)VAR_9->p[1][2]);
   FUNC_7 (VAR_4,"( %i %i %i ) ", (int)VAR_9->p[2][0], (int)VAR_9->p[2][1], (int)VAR_9->p[2][2]);

   FUNC_7 (VAR_4, "%s 0 0 0 1 1\n", VAR_3[VAR_5->texinfo].texture);
   FUNC_2 (VAR_9);
  }
  FUNC_7 (VAR_4, "}\n");
 }
 FUNC_7 (VAR_4, "}\n");

 FUNC_5 (VAR_4);

 FUNC_1 ("can't proceed after expanding brushes");
}
