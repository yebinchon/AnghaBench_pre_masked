
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;

int FUNC_4(void)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(VAR_4);

 VAR_5 = FUNC_2();
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(VAR_0, VAR_2, 0, "ADB",
     VAR_2);
 if (VAR_5)
  goto out;

 VAR_3 = VAR_1;
out:
 FUNC_0(VAR_4);
 return VAR_5;
}
