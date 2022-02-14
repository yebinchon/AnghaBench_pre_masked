
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int framebufferObject; } ;
struct TYPE_10__ {TYPE_1__* currentFBO; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_7__ {char* name; int frameBuffer; } ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;

void FUNC_4(FBO_t * VAR_6)
{
 if (!VAR_2.framebufferObject)
 {
  VAR_5.Printf(VAR_1, "FBO_Bind() called without framebuffers enabled!\n");
  return;
 }

 if (VAR_3.currentFBO == VAR_6)
  return;

 if (VAR_4->integer)
 {

  FUNC_1(FUNC_3("--- FBO_Bind( %s ) ---\n", VAR_6 ? VAR_6->name : "NULL"));
 }

 FUNC_0(VAR_0, VAR_6 ? VAR_6->frameBuffer : 0);
 VAR_3.currentFBO = VAR_6;
}
