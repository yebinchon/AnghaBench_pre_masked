
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {int user; int (* remove ) (int *) ;} ;
struct uml_net {int list; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 struct uml_net* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct uml_net*) ;
 int FUNC_3 (int *) ;
 struct uml_net_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct uml_net *VAR_1 = FUNC_0(VAR_0);
 struct net_device *VAR_2 = VAR_1->dev;
 struct uml_net_private *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->remove != ((void*)0))
  (*VAR_3->remove)(&VAR_3->user);
 FUNC_3(&VAR_1->list);
 FUNC_2(VAR_1);
 FUNC_1(VAR_2);
}
