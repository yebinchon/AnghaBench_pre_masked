
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {int buffWidth; int buffHeight; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int (* Cvar_Set ) (char*,char*) ;} ;
typedef int GLubyte ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (char*,char*) ;

void FUNC_6(qboolean VAR_7) {
  VAR_4->value = 16;
  VAR_5->value = 24;
  FUNC_1();

  VAR_2 =
      FUNC_2(VAR_0, VAR_5->value, 0, 0, ((void*)0));
  if (!VAR_2) {
    FUNC_3("OSMesaCreateContext failed!");
  }


  VAR_3 =
      FUNC_4(VAR_1.buffWidth * VAR_1.buffHeight * 4, sizeof(GLubyte));
  if (!VAR_3) {
    FUNC_3("Alloc image buffer failed!");
  }



  VAR_6.Cvar_Set("r_drawBuffer", "GL_FRONT");

  FUNC_0();
}
