
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int texnum; int frameUsed; } ;
typedef TYPE_2__ image_t ;
struct TYPE_9__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_8__ {int frameCount; TYPE_1__* defaultImage; } ;
struct TYPE_6__ {int texnum; } ;
typedef int GLuint ;
typedef int GLenum ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__ VAR_7 ;

void FUNC_2( image_t *VAR_8, int VAR_9 )
{
 GLuint VAR_10 = (VAR_9 == VAR_5) ? VAR_7.defaultImage->texnum : 0;
 GLenum VAR_11 = VAR_1;

 if (VAR_8)
 {
  if (VAR_8->flags & VAR_3)
   VAR_11 = VAR_2;

  VAR_8->frameUsed = VAR_7.frameCount;
  VAR_10 = VAR_8->texnum;
 }
 else
 {
  VAR_6.Printf(VAR_4, "GL_BindToTMU: NULL image\n");
 }

 FUNC_0(VAR_0 + VAR_9, VAR_11, VAR_10);
}
