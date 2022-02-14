
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fileName; int height; int width; int y; int x; scalar_t__ jpeg; } ;
typedef TYPE_1__ screenshotCommand_t ;
struct TYPE_4__ {scalar_t__ numIndexes; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 TYPE_2__ VAR_0 ;

const void *FUNC_3( const void *VAR_1 ) {
 const screenshotCommand_t *VAR_2;

 VAR_2 = (const screenshotCommand_t *)VAR_1;


 if(VAR_0.numIndexes)
  FUNC_0();

 if (VAR_2->jpeg)
  FUNC_2( VAR_2->x, VAR_2->y, VAR_2->width, VAR_2->height, VAR_2->fileName);
 else
  FUNC_1( VAR_2->x, VAR_2->y, VAR_2->width, VAR_2->height, VAR_2->fileName);

 return (const void *)(VAR_2 + 1);
}
