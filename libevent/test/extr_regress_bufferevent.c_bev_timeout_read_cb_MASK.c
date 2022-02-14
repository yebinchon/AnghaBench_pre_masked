
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_cb_result {int last_read_at; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_0, void *VAR_1)
{
 struct timeout_cb_result *VAR_2 = VAR_1;
 FUNC_0(&VAR_2->last_read_at, ((void*)0));
}
