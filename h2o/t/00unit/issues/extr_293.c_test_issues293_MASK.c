
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_globalconf_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_3 ;

void FUNC_8()
{
    h2o_globalconf_t VAR_4;

    FUNC_3(&VAR_4);


    FUNC_7(&VAR_4, FUNC_6(FUNC_0("default")), 65535);
    FUNC_7(&VAR_4, FUNC_6(FUNC_0("host1")), 80);
    FUNC_7(&VAR_4, FUNC_6(FUNC_0("host1")), 443);
    FUNC_7(&VAR_4, FUNC_6(FUNC_0("host2")), 80);
    FUNC_7(&VAR_4, FUNC_6(FUNC_0("host2")), 443);
    FUNC_7(&VAR_4, FUNC_6(FUNC_0("host3")), 65535);

    FUNC_5(&VAR_2, VAR_3, &VAR_4);


    FUNC_1(&VAR_0, "host1", "host1:80");
    FUNC_1(&VAR_1, "host1", "host1:443");
    FUNC_1(&VAR_0, "host2", "host2:80");
    FUNC_1(&VAR_1, "host2", "host2:443");


    FUNC_1(&VAR_0, "host1:80", "host1:80");
    FUNC_1(&VAR_0, "host1:443", "host1:443");
    FUNC_1(&VAR_1, "host1:80", "host1:80");
    FUNC_1(&VAR_1, "host1:443", "host1:443");
    FUNC_1(&VAR_0, "host2:80", "host2:80");
    FUNC_1(&VAR_0, "host2:443", "host2:443");
    FUNC_1(&VAR_1, "host2:80", "host2:80");
    FUNC_1(&VAR_1, "host2:443", "host2:443");


    FUNC_1(&VAR_0, "host3", "host3:65535");
    FUNC_1(&VAR_1, "host3", "host3:65535");
    FUNC_1(&VAR_0, "host3", "host3:65535");
    FUNC_1(&VAR_1, "host3", "host3:65535");
    FUNC_1(&VAR_0, "host3:80", "host3:65535");
    FUNC_1(&VAR_1, "host3:80", "default:65535");
    FUNC_1(&VAR_0, "host3:443", "default:65535");
    FUNC_1(&VAR_1, "host3:443", "host3:65535");


    FUNC_1(&VAR_0, "HoST1", "host1:80");
    FUNC_1(&VAR_0, "HoST1:80", "host1:80");
    FUNC_1(&VAR_1, "HoST1", "host1:443");
    FUNC_1(&VAR_1, "HoST1:443", "host1:443");

    FUNC_4(&VAR_2);
    FUNC_2(&VAR_4);
}
