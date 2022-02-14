
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(void)
{
 int VAR_2;

 FUNC_0(&VAR_1, sizeof VAR_1);

 VAR_2 = FUNC_1(&VAR_0);
 if (VAR_2) {
  FUNC_4("Couldn't register ib_sa client\n");
  goto err1;
 }

 VAR_2 = FUNC_3();
 if (VAR_2) {
  FUNC_4("Couldn't initialize multicast handling\n");
  goto err2;
 }

 return 0;

err2:
 FUNC_2(&VAR_0);
err1:
 return VAR_2;
}
