
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* m; } ;
typedef TYPE_1__ IJK_GLES_Matrix ;
typedef float GLfloat ;



void FUNC_0(IJK_GLES_Matrix *VAR_0, GLfloat VAR_1, GLfloat VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5, GLfloat VAR_6)
{
    GLfloat VAR_7 = VAR_2 - VAR_1;
    GLfloat VAR_8 = VAR_4 - VAR_3;
    GLfloat VAR_9 = VAR_6 - VAR_5;
    GLfloat VAR_10 = - (VAR_2 + VAR_1) / (VAR_2 - VAR_1);
    GLfloat VAR_11 = - (VAR_4 + VAR_3) / (VAR_4 - VAR_3);
    GLfloat VAR_12 = - (VAR_6 + VAR_5) / (VAR_6 - VAR_5);

    VAR_0->m[0] = 2.0f / VAR_7;
    VAR_0->m[1] = 0.0f;
    VAR_0->m[2] = 0.0f;
    VAR_0->m[3] = 0.0f;

    VAR_0->m[4] = 0.0f;
    VAR_0->m[5] = 2.0f / VAR_8;
    VAR_0->m[6] = 0.0f;
    VAR_0->m[7] = 0.0f;

    VAR_0->m[8] = 0.0f;
    VAR_0->m[9] = 0.0f;
    VAR_0->m[10] = -2.0f / VAR_9;
    VAR_0->m[11] = 0.0f;

    VAR_0->m[12] = VAR_10;
    VAR_0->m[13] = VAR_11;
    VAR_0->m[14] = VAR_12;
    VAR_0->m[15] = 1.0f;
}
