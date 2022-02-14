
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct net_conf {int connect_int; } ;
struct drbd_connection {int net_conf; } ;
struct accept_wait_data {int s_listen; int door_bell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct drbd_connection*,int ,int ) ;
 int FUNC_2 (struct drbd_connection*,char*,int) ;
 int FUNC_3 (int ,struct socket**,int ) ;
 int FUNC_4 () ;
 struct net_conf* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct accept_wait_data*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static struct socket *FUNC_10(struct drbd_connection *VAR_7, struct accept_wait_data *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 struct socket *VAR_12 = ((void*)0);
 struct net_conf *VAR_13;

 FUNC_6();
 VAR_13 = FUNC_5(VAR_7->net_conf);
 if (!VAR_13) {
  FUNC_7();
  return ((void*)0);
 }
 VAR_10 = VAR_13->connect_int;
 FUNC_7();

 VAR_9 = VAR_10 * VAR_5;

 VAR_9 += (FUNC_4() & 1) ? VAR_9 / 7 : -VAR_9 / 7;

 VAR_11 = FUNC_9(&VAR_8->door_bell, VAR_9);
 if (VAR_11 <= 0)
  return ((void*)0);

 VAR_11 = FUNC_3(VAR_8->s_listen, &VAR_12, 0);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_2 && VAR_11 != -VAR_3 && VAR_11 != -VAR_4) {
   FUNC_2(VAR_7, "accept failed, err = %d\n", VAR_11);
   FUNC_1(VAR_7, FUNC_0(VAR_6, VAR_1), VAR_0);
  }
 }

 if (VAR_12)
  FUNC_8(VAR_12->sk, VAR_8);

 return VAR_12;
}
