
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Error ) (int ,char*) ;} ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLenum ;
typedef int GLchar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int,int const**,int*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(GLuint VAR_6, GLuint *VAR_7, const GLchar *VAR_8, int VAR_9, GLenum VAR_10)
{
 GLint VAR_11;
 GLuint VAR_12;

 VAR_12 = FUNC_3(VAR_10);

 FUNC_7(VAR_12, 1, (const GLchar **)&VAR_8, &VAR_9);


 FUNC_2(VAR_12);


 FUNC_6(VAR_12, VAR_3, &VAR_11);
 if(!VAR_11)
 {
  FUNC_0(VAR_12, VAR_2, VAR_4);
  FUNC_0(VAR_12, VAR_1, VAR_4);
  VAR_5.Error(VAR_0, "Couldn't compile shader");
  return 0;
 }

 if (*VAR_7)
 {
  FUNC_5(VAR_6, *VAR_7);
  FUNC_4(*VAR_7);
 }


 FUNC_1(VAR_6, VAR_12);

 *VAR_7 = VAR_12;

 return 1;
}
