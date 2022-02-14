
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int contents; int modelnum; int presencetype; int areaflags; } ;
typedef TYPE_1__ tmp_areasettings_t ;
struct TYPE_6__ {int contents; int presencetype; int areaflags; } ;
typedef TYPE_2__ aas_areasettings_t ;
struct TYPE_7__ {int numareasettings; TYPE_2__* areasettings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 TYPE_3__ VAR_2 ;

void FUNC_1(tmp_areasettings_t *VAR_3)
{
 aas_areasettings_t *VAR_4;

 if (VAR_2.numareasettings == 0) VAR_2.numareasettings = 1;
 VAR_4 = &VAR_2.areasettings[VAR_2.numareasettings++];
 VAR_4->areaflags = VAR_3->areaflags;
 VAR_4->presencetype = VAR_3->presencetype;
 VAR_4->contents = VAR_3->contents;
 if (VAR_3->modelnum > VAR_0)
  FUNC_0("WARNING: more than %d mover models\n", VAR_0);
 VAR_4->contents |= (VAR_3->modelnum & VAR_0) << VAR_1;
}
