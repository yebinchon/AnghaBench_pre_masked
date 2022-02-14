
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t* textures; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;

int FUNC_1(GLenum VAR_5, GLenum VAR_6, GLuint VAR_7)
{
 GLuint VAR_8 = VAR_5 - VAR_0;

 if (VAR_4.textures[VAR_8] == VAR_7)
  return 0;

 if (VAR_6 >= VAR_3 && VAR_6 <= VAR_2)
  VAR_6 = VAR_1;

 FUNC_0(VAR_5, VAR_6, VAR_7);
 VAR_4.textures[VAR_8] = VAR_7;
 return 1;
}
