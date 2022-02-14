
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(void)
{
 int VAR_6 = 0;

 VAR_1 = FUNC_6(0, VAR_3, &VAR_5);
 VAR_6 = VAR_1;
 if (VAR_6 < 0)
  goto err_register_chrdev;

 VAR_2 = FUNC_3(VAR_0, VAR_3);
 VAR_6 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_2))
  goto err_class_create;

 VAR_4 = FUNC_5(VAR_2, ((void*)0),
     FUNC_1(VAR_1, 0),
     ((void*)0), VAR_3);
 VAR_6 = FUNC_2(VAR_4);
 if (FUNC_0(VAR_4))
  goto err_device_create;

 return 0;

err_device_create:
 FUNC_4(VAR_2);
err_class_create:
 FUNC_7(VAR_1, VAR_3);
err_register_chrdev:
 return VAR_6;
}
