
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_9(void)
{
 int VAR_8;

 FUNC_3(&VAR_7, sizeof VAR_7);

 FUNC_2(&VAR_3, 0);

 VAR_8 = FUNC_4(&VAR_6);
 if (VAR_8) {
  FUNC_8("Couldn't register ib_sa client\n");
  goto err1;
 }

 VAR_8 = FUNC_7();
 if (VAR_8) {
  FUNC_8("Couldn't initialize multicast handling\n");
  goto err2;
 }

 VAR_5 = FUNC_1("ib_nl_sa_wq", VAR_1);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto err3;
 }

 FUNC_0(&VAR_4, VAR_2);

 return 0;

err3:
 FUNC_6();
err2:
 FUNC_5(&VAR_6);
err1:
 return VAR_8;
}
