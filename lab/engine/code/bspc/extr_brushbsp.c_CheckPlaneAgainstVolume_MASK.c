
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int volume; } ;
typedef TYPE_1__ node_t ;
typedef int bspbrush_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int **,int **) ;

qboolean FUNC_2 (int VAR_0, node_t *VAR_1)
{
 bspbrush_t *VAR_2, *VAR_3;
 qboolean VAR_4;

 FUNC_1 (VAR_1->volume, VAR_0, &VAR_2, &VAR_3);

 VAR_4 = (VAR_2 && VAR_3);

 if (VAR_2) FUNC_0 (VAR_2);
 if (VAR_3) FUNC_0 (VAR_3);

 return VAR_4;
}
