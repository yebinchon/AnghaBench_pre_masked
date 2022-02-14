
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device**) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_0 ;
 struct net_device** VAR_1 ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
    int VAR_3;

    for ( VAR_3 = 0; VAR_3 < FUNC_0(VAR_1) && VAR_1[VAR_3] != VAR_2; VAR_3++ );
    FUNC_1(VAR_3 >= 0 && VAR_3 < FUNC_0(VAR_1), "ndev = %d (wrong value)", VAR_3);


    FUNC_2(1 << (VAR_3 + 16), 0, VAR_0);


    FUNC_3(VAR_2);

    return;
}
