
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {int node; } ;
struct evdev {int client_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct evdev *VAR_0,
    struct evdev_client *VAR_1)
{
 FUNC_1(&VAR_0->client_lock);
 FUNC_0(&VAR_1->node);
 FUNC_2(&VAR_0->client_lock);
 FUNC_3();
}
