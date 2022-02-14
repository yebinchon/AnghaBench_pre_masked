
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct adp5520_keys {int notifier; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 struct adp5520_keys* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct adp5520_keys *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->master, &VAR_3->notifier,
    VAR_0 | VAR_1);

 return 0;
}
