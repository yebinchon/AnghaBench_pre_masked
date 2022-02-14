
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quicly_maxsender_t ;
typedef int quicly_maxsender_sent_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    quicly_maxsender_t VAR_0;
    quicly_maxsender_sent_t VAR_1;

    FUNC_2(&VAR_0, 100);


    FUNC_0(!FUNC_5(&VAR_0, 0, 100, 512));
    FUNC_0(FUNC_5(&VAR_0, 0, 100, 1024));
    FUNC_0(!FUNC_5(&VAR_0, 99, 100, 0));
    FUNC_0(FUNC_5(&VAR_0, 100, 100, 0));


    FUNC_0(!FUNC_5(&VAR_0, 24, 100, 768));
    FUNC_0(FUNC_5(&VAR_0, 25, 100, 768));
    FUNC_4(&VAR_0, 125, &VAR_1);
    FUNC_0(!FUNC_5(&VAR_0, 49, 100, 768));
    FUNC_0(FUNC_5(&VAR_0, 50, 100, 768));
    FUNC_1(&VAR_0, &VAR_1);
    FUNC_0(!FUNC_5(&VAR_0, 49, 100, 768));
    FUNC_0(FUNC_5(&VAR_0, 50, 100, 768));
    FUNC_4(&VAR_0, 150, &VAR_1);
    FUNC_0(!FUNC_5(&VAR_0, 74, 100, 768));
    FUNC_3(&VAR_0, &VAR_1);
    FUNC_0(FUNC_5(&VAR_0, 74, 100, 768));
}
