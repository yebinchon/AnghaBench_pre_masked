
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct net_conf {int ping_timeo; scalar_t__ sock_check_timeo; } ;
struct drbd_connection {int net_conf; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket**) ;
 struct net_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct drbd_connection *VAR_1,
       struct socket **VAR_2,
       struct socket **VAR_3)
{
 struct net_conf *VAR_4;
 int VAR_5;
 bool VAR_6;

 if (!*VAR_2 || !*VAR_3)
  return 0;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_1->net_conf);
 VAR_5 = (VAR_4->sock_check_timeo ?: VAR_4->ping_timeo) * VAR_0 / 10;
 FUNC_3();
 FUNC_4(VAR_5);

 VAR_6 = FUNC_0(VAR_2);
 VAR_6 = FUNC_0(VAR_3) && VAR_6;

 return VAR_6;
}
