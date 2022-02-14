
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* shader; } ;
typedef TYPE_2__ shaderCommands_t ;
struct TYPE_7__ {scalar_t__ vertexAnimation; } ;
struct TYPE_5__ {unsigned int vertexAttribs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static unsigned int FUNC_0( shaderCommands_t *VAR_5 )
{
 unsigned int VAR_6 = VAR_5->shader->vertexAttribs;

 if(VAR_4.vertexAnimation)
 {
  VAR_6 |= VAR_2;
  if (VAR_6 & VAR_0)
  {
   VAR_6 |= VAR_1;
   VAR_6 |= VAR_3;
  }
 }

 return VAR_6;
}
