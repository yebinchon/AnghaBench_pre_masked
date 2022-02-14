
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_8__ {int w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ rectDef_t ;
typedef scalar_t__ qhandle_t ;
typedef int num ;
struct TYPE_9__ {TYPE_2__* snap; } ;
struct TYPE_6__ {int* persistant; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,float,int *,char*,int ,int ,int) ;
 int FUNC_2 (char*,float,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 size_t VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qhandle_t VAR_5, int VAR_6 ) {
  char VAR_7[16];
  int VAR_8 = VAR_1.snap->ps.persistant[VAR_0];

 if (VAR_5) {
  FUNC_4( VAR_4 );
  FUNC_0(VAR_2->x, VAR_2->y, VAR_2->w, VAR_2->h, VAR_5);
  FUNC_4( ((void*)0) );
 } else {
  FUNC_3 (VAR_7, sizeof(VAR_7), "%i", VAR_8);
  VAR_8 = FUNC_2(VAR_7, VAR_3, 0);
   FUNC_1(VAR_2->x + (VAR_2->w - VAR_8) / 2, VAR_2->y + VAR_2->h, VAR_3, VAR_4, VAR_7, 0, 0, VAR_6);
 }
}
