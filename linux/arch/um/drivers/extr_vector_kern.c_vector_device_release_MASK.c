
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_device {int list; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 struct vector_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct vector_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct vector_device *VAR_1 = FUNC_0(VAR_0);
 struct net_device *VAR_2 = VAR_1->dev;

 FUNC_3(&VAR_1->list);
 FUNC_2(VAR_1);
 FUNC_1(VAR_2);
}
