
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(u32 *VAR_4)
{
 int VAR_5;

 FUNC_4(&VAR_3);

 FUNC_2(&VAR_2);
 FUNC_1(VAR_1, VAR_4);
 VAR_5 = FUNC_6(&VAR_2,
       FUNC_3(1000));
 if (VAR_5 == 0) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_4);
out:
 FUNC_5(&VAR_3);
 return VAR_5;
}
