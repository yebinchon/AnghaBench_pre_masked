
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t areanum; int backcluster; int frontcluster; } ;
typedef TYPE_2__ aas_portal_t ;
struct TYPE_6__ {int numportals; TYPE_1__* areasettings; TYPE_2__* portals; } ;
struct TYPE_4__ {int contents; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(void)
{
 int VAR_4;
 aas_portal_t *VAR_5;

 for (VAR_4 = 1; VAR_4 < VAR_1.numportals; VAR_4++)
 {
  VAR_5 = &VAR_1.portals[VAR_4];
  if (!VAR_5->frontcluster)
  {
   VAR_1.areasettings[VAR_5->areanum].contents &= ~VAR_0;
   FUNC_0("portal area %d has no front cluster\r\n", VAR_5->areanum);
   return VAR_2;
  }
  if (!VAR_5->backcluster)
  {
   VAR_1.areasettings[VAR_5->areanum].contents &= ~VAR_0;
   FUNC_0("portal area %d has no back cluster\r\n", VAR_5->areanum);
   return VAR_2;
  }
 }
 return VAR_3;
}
