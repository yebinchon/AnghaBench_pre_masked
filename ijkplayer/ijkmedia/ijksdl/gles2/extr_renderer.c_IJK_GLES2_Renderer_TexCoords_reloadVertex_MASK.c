
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int av2_texcoord; int texcoords; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(IJK_GLES2_Renderer *VAR_2)
{
    FUNC_2(VAR_2->av2_texcoord, 2, VAR_1, VAR_0, 0, VAR_2->texcoords); FUNC_0("glVertexAttribPointer(av2_texcoord)");
    FUNC_1(VAR_2->av2_texcoord); FUNC_0("glEnableVertexAttribArray(av2_texcoord)");
}
