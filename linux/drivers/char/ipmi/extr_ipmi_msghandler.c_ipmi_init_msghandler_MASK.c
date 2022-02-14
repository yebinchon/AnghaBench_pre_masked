
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_9;

 FUNC_4(&VAR_2);
 VAR_9 = FUNC_2();
 if (VAR_9)
  goto out;
 if (VAR_1)
  goto out;

 FUNC_1(&VAR_3);

 FUNC_6(&VAR_5, VAR_4, 0);
 FUNC_3(&VAR_5, VAR_6 + VAR_0);

 FUNC_0(&VAR_8, &VAR_7);

 VAR_1 = 1;

out:
 FUNC_5(&VAR_2);
 return VAR_9;
}
