
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q40kbd {int port; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct q40kbd*) ;
 int FUNC_1 (struct q40kbd*) ;
 struct q40kbd* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct q40kbd *VAR_2 = FUNC_2(VAR_1);






 FUNC_3(VAR_2->port);
 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
