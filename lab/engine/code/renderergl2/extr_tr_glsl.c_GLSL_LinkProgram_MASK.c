
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Error ) (int ,char*) ;} ;
typedef int GLuint ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(GLuint VAR_5)
{
 GLint VAR_6;

 FUNC_2(VAR_5);

 FUNC_1(VAR_5, VAR_2, &VAR_6);
 if(!VAR_6)
 {
  FUNC_0(VAR_5, VAR_1, VAR_3);
  VAR_4.Error(VAR_0, "shaders failed to link");
 }
}
