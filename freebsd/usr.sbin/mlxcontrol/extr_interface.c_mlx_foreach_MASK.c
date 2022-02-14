
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(void (*VAR_0)(int VAR_1, void *VAR_2), void *VAR_3)
{
    int VAR_4, VAR_5;


    for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {

 if ((VAR_5 = FUNC_2(FUNC_1(VAR_4), 0)) >= 0)
     FUNC_0(VAR_5);

 if (VAR_5 >= 0) {
     VAR_0(VAR_4, VAR_3);
 }
    }
}
