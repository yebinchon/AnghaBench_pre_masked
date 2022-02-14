
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uniformName ;
struct TYPE_2__ {int (* Printf ) (int ,char*,char*) ;} ;
typedef int GLuint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int *,int*,int *,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(GLuint VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 GLenum VAR_7;
 char VAR_8[1000];


 FUNC_1(VAR_3, VAR_0, &VAR_5);


 for(VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 {
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_8), ((void*)0), &VAR_6, &VAR_7, VAR_8);

  VAR_2.Printf(VAR_1, "active uniform: '%s'\n", VAR_8);
 }
}
