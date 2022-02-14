
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int texnum; } ;
typedef TYPE_1__ image_t ;
struct TYPE_6__ {TYPE_1__** colorImage; int frameBuffer; } ;
typedef int GLuint ;
typedef int GLenum ;
typedef TYPE_2__ FBO_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ,int ) ;

void FUNC_1(FBO_t *VAR_4, image_t *VAR_5, GLenum VAR_6, GLuint VAR_7)
{
 GLenum VAR_8 = VAR_1;
 int VAR_9;

 if (VAR_5->flags & VAR_3)
  VAR_8 = VAR_2 + VAR_7;

 FUNC_0(VAR_4->frameBuffer, VAR_6, VAR_8, VAR_5->texnum, 0);
 VAR_9 = VAR_6 - VAR_0;
 if (VAR_9 >= 0 && VAR_9 <= 15)
  VAR_4->colorImage[VAR_9] = VAR_5;
}
