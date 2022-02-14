
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_resource {int (* release ) (struct client*,struct client_resource*) ;} ;
struct client {int dummy; } ;


 int FUNC_0 (struct client*) ;
 int FUNC_1 (struct client*,struct client_resource*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct client_resource *VAR_3 = VAR_1;
 struct client *VAR_4 = VAR_2;

 VAR_3->release(VAR_4, VAR_3);
 FUNC_0(VAR_4);

 return 0;
}
