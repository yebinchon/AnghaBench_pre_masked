
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pm_message_t ;
typedef int ktime_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(pm_message_t VAR_0)
{
 ktime_t VAR_1 = FUNC_4();
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  FUNC_0(FUNC_5(VAR_0));

out:
 FUNC_1(VAR_1, VAR_0, VAR_2, "end");
 return VAR_2;
}
