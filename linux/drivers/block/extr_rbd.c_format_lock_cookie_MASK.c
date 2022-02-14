
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int watch_mutex; int watch_cookie; } ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_1, char *VAR_2)
{
 FUNC_0(&VAR_1->watch_mutex);
 FUNC_2(VAR_2, "%s %llu", VAR_0, VAR_1->watch_cookie);
 FUNC_1(&VAR_1->watch_mutex);
}
