
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int bufev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct evhttp_connection *VAR_2)
{
 VAR_2->flags |= VAR_0;
 FUNC_0(VAR_2->bufev, VAR_1);
}
