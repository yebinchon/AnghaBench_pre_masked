
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vidWidth; int buffWidth; int vidHeight; int buffHeight; } ;
typedef TYPE_1__ glconfig_t ;



__attribute__((used)) static void FUNC_0( glconfig_t* VAR_0 ) {
 int VAR_1 = VAR_0->vidWidth;
 VAR_0->vidWidth = VAR_0->buffWidth;
 VAR_0->buffWidth = VAR_1;
 VAR_1 = VAR_0->vidHeight;
 VAR_0->vidHeight = VAR_0->buffHeight;
 VAR_0->buffHeight = VAR_1;
}
