
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_resource {scalar_t__ release; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, void *VAR_2, void *VAR_3)
{
 struct client_resource *VAR_4 = VAR_2;

 return VAR_4->release == VAR_0;
}
