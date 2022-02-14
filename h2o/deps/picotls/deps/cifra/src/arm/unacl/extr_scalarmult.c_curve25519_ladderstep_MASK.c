
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fe25519 ;
struct TYPE_3__ {int x0; int zq; int xq; int zp; int xp; int * pZq; int * pXq; int * pZp; int * pXp; } ;
typedef TYPE_1__ ST_curve25519ladderstepWorkingState ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(
    ST_curve25519ladderstepWorkingState* VAR_0
)
{
    fe25519 VAR_1, VAR_2;





    fe25519 *VAR_3=&VAR_0->xp; fe25519 *VAR_4=&VAR_0->zp;
    fe25519 *VAR_5=&VAR_0->xq; fe25519 *VAR_6=&VAR_0->zq;


    fe25519 *VAR_7= &VAR_1; fe25519 *VAR_8=&VAR_2;

    FUNC_0(VAR_7,VAR_3,VAR_4);
    FUNC_4(VAR_8,VAR_3,VAR_4);
    FUNC_0(VAR_3,VAR_5,VAR_6);
    FUNC_4(VAR_4,VAR_5,VAR_6);
    FUNC_2(VAR_5,VAR_4,VAR_7);
    FUNC_2(VAR_4,VAR_3,VAR_8);
    FUNC_0(VAR_3,VAR_4,VAR_5);
    FUNC_4(VAR_6,VAR_5,VAR_4);
    FUNC_3(VAR_5,VAR_3);
    FUNC_3(VAR_3,VAR_6);
    FUNC_2(VAR_6,VAR_3,&VAR_0->x0);
    FUNC_3(VAR_3,VAR_7);
    FUNC_3(VAR_7,VAR_8);
    FUNC_4(VAR_4,VAR_3,VAR_7);
    FUNC_2(VAR_3,VAR_7,VAR_3);
    FUNC_1 (VAR_8,VAR_4);
    FUNC_0(VAR_8,VAR_8,VAR_7);
    FUNC_2(VAR_4,VAR_8,VAR_4);
}
