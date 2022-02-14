
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dcp {int caps; int dcp_clk; int * thread; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (int ) ;
 struct dcp* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 struct dcp *VAR_10 = FUNC_5(VAR_9);

 if (VAR_10->caps & VAR_4)
  FUNC_2(&VAR_7);

 if (VAR_10->caps & VAR_3)
  FUNC_2(&VAR_6);

 if (VAR_10->caps & VAR_2)
  FUNC_3(VAR_5, FUNC_0(VAR_5));

 FUNC_4(VAR_10->thread[VAR_1]);
 FUNC_4(VAR_10->thread[VAR_0]);

 FUNC_1(VAR_10->dcp_clk);

 FUNC_6(VAR_9, ((void*)0));

 VAR_8 = ((void*)0);

 return 0;
}
