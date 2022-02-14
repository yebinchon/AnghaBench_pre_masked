
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int * vhost_pattern; int virtualhosts; } ;


 int FUNC_0 (int *,struct evhttp*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

int
FUNC_2(struct evhttp* VAR_1, struct evhttp* VAR_2)
{
 if (VAR_2->vhost_pattern == ((void*)0))
  return (-1);

 FUNC_0(&VAR_1->virtualhosts, VAR_2, VAR_0);

 FUNC_1(VAR_2->vhost_pattern);
 VAR_2->vhost_pattern = ((void*)0);

 return (0);
}
