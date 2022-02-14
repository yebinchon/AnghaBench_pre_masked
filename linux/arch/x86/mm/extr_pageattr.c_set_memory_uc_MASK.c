
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int *) ;

int FUNC_4(unsigned long VAR_2, int VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_3(FUNC_0(VAR_2), FUNC_0(VAR_2) + VAR_3 * VAR_0,
         VAR_1, ((void*)0));
 if (VAR_4)
  goto out_err;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  goto out_free;

 return 0;

out_free:
 FUNC_2(FUNC_0(VAR_2), FUNC_0(VAR_2) + VAR_3 * VAR_0);
out_err:
 return VAR_4;
}
