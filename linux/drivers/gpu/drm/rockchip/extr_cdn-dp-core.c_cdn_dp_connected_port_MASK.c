
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_port {int dummy; } ;
struct cdn_dp_device {int ports; struct cdn_dp_port** port; } ;


 int FUNC_0 (struct cdn_dp_port*) ;

__attribute__((used)) static struct cdn_dp_port *FUNC_1(struct cdn_dp_device *VAR_0)
{
 struct cdn_dp_port *VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->ports; VAR_2++) {
  VAR_1 = VAR_0->port[VAR_2];
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3)
   return VAR_1;
 }
 return ((void*)0);
}
