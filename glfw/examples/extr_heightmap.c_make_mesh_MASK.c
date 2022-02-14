
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int,int ,int ,int ,int ) ;
 int * VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_8(GLuint VAR_12)
{
    GLuint VAR_13;

    FUNC_5(1, &VAR_10);
    FUNC_4(4, VAR_11);
    FUNC_1(VAR_10);

    FUNC_0(VAR_2, VAR_11[3]);
    FUNC_2(VAR_2, sizeof(GLuint)* VAR_6 * 2, VAR_8, VAR_5);


    VAR_13 = FUNC_6(VAR_12, "x");
    FUNC_0(VAR_0, VAR_11[0]);
    FUNC_2(VAR_0, sizeof(GLfloat) * VAR_7, &VAR_9[0][0], VAR_5);
    FUNC_3(VAR_13);
    FUNC_7(VAR_13, 1, VAR_4, VAR_3, 0, 0);

    VAR_13 = FUNC_6(VAR_12, "z");
    FUNC_0(VAR_0, VAR_11[2]);
    FUNC_2(VAR_0, sizeof(GLfloat) * VAR_7, &VAR_9[2][0], VAR_5);
    FUNC_3(VAR_13);
    FUNC_7(VAR_13, 1, VAR_4, VAR_3, 0, 0);

    VAR_13 = FUNC_6(VAR_12, "y");
    FUNC_0(VAR_0, VAR_11[1]);
    FUNC_2(VAR_0, sizeof(GLfloat) * VAR_7, &VAR_9[1][0], VAR_1);
    FUNC_3(VAR_13);
    FUNC_7(VAR_13, 1, VAR_4, VAR_3, 0, 0);
}
