
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int filename ;
struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {int (* FS_ReadFile ) (char*,void**) ;int (* FS_FreeFile ) (char*) ;int (* Printf ) (int ,char*,char*) ;} ;
typedef scalar_t__ GLenum ;
typedef char GLchar ;


 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,void**) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_5, const char *VAR_6,
 GLenum VAR_7, char *VAR_8, int VAR_9)
{
 char VAR_10[VAR_1];
 GLchar *VAR_11 = ((void*)0);
 const GLchar *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14;

 if(VAR_7 == VAR_0)
 {
  FUNC_0(VAR_10, sizeof(VAR_10), "glsl/%s_vp.glsl", VAR_5);
 }
 else
 {
  FUNC_0(VAR_10, sizeof(VAR_10), "glsl/%s_fp.glsl", VAR_5);
 }

 if ( VAR_3->integer ) {
  VAR_13 = VAR_4.FS_ReadFile(VAR_10, (void **)&VAR_11);
 } else {
  VAR_13 = 0;
  VAR_11 = ((void*)0);
 }

 if(!VAR_11)
 {
  if (VAR_6)
  {
   VAR_4.Printf(VAR_2, "...loading built-in '%s'\n", VAR_10);
   VAR_12 = VAR_6;
   VAR_13 = FUNC_2(VAR_12);
  }
  else
  {
   VAR_4.Printf(VAR_2, "couldn't load '%s'\n", VAR_10);
   return 0;
  }
 }
 else
 {
  VAR_4.Printf(VAR_2, "...loading '%s'\n", VAR_10);
  VAR_12 = VAR_11;
 }

 if (VAR_13 > VAR_9)
 {
  VAR_14 = 0;
 }
 else
 {
  FUNC_1(VAR_8, VAR_12, VAR_13 + 1);
  VAR_14 = 1;
 }

 if (VAR_11)
 {
  VAR_4.FS_FreeFile(VAR_11);
 }

 return VAR_14;
}
