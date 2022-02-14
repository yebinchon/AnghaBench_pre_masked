
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int imgFlags_t ;
struct TYPE_5__ {int image; } ;
typedef TYPE_2__ cubemap_t ;
struct TYPE_6__ {int numCubemaps; TYPE_1__* world; TYPE_2__* cubemaps; } ;
struct TYPE_4__ {int baseName; } ;


 int FUNC_0 (char*,int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_3__ VAR_6 ;

void FUNC_2(void)
{
 int VAR_7;
 imgFlags_t VAR_8 = VAR_0 | VAR_2 | VAR_3 | VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_6.numCubemaps; VAR_7++)
 {
  char VAR_9[VAR_5];
  cubemap_t *VAR_10 = &VAR_6.cubemaps[VAR_7];

  FUNC_0(VAR_9, VAR_5, "cubemaps/%s/%03d.dds", VAR_6.world->baseName, VAR_7);

  VAR_10->image = FUNC_1(VAR_9, VAR_4, VAR_8);
 }
}
