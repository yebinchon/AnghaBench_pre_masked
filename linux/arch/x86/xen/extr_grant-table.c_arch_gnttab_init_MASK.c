
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;

int FUNC_3(unsigned long VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 if (!FUNC_2())
  return 0;

 VAR_5 = FUNC_0(&VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;





 VAR_5 = FUNC_0(&VAR_2, VAR_4);
 if (VAR_5 < 0)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_1);
 return -VAR_0;
}
