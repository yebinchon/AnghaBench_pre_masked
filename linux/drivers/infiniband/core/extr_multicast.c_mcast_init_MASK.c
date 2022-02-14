
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_5(void)
{
 int VAR_5;

 VAR_3 = FUNC_0("ib_mcast", VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_4);

 VAR_5 = FUNC_2(&VAR_2);
 if (VAR_5)
  goto err;
 return 0;

err:
 FUNC_4(&VAR_4);
 FUNC_1(VAR_3);
 return VAR_5;
}
