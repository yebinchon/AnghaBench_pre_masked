
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trelay {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trelay*) ;
 struct trelay* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2, unsigned long VAR_3,
      void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct trelay *VAR_6;

 if (VAR_3 != VAR_0)
  goto out;

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  goto out;

 FUNC_0(VAR_6);

out:
 return VAR_1;
}
