
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fileName; int height; int width; int y; int x; scalar_t__ jpeg; } ;
typedef TYPE_1__ screenshotCommand_t ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

const void *FUNC_2( const void *VAR_0 ) {
 const screenshotCommand_t *VAR_1;

 VAR_1 = (const screenshotCommand_t *)VAR_0;

 if (VAR_1->jpeg)
  FUNC_1( VAR_1->x, VAR_1->y, VAR_1->width, VAR_1->height, VAR_1->fileName);
 else
  FUNC_0( VAR_1->x, VAR_1->y, VAR_1->width, VAR_1->height, VAR_1->fileName);

 return (const void *)(VAR_1 + 1);
}
