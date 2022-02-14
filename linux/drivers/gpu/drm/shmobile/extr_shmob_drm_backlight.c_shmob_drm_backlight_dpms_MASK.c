
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shmob_drm_connector {TYPE_2__* backlight; } ;
struct TYPE_3__ {int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct shmob_drm_connector *VAR_3, int VAR_4)
{
 if (VAR_3->backlight == ((void*)0))
  return;

 VAR_3->backlight->props.power = VAR_4 == VAR_0
         ? VAR_2 : VAR_1;
 FUNC_0(VAR_3->backlight);
}
