
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sclp_cmdw_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,void*) ;

int FUNC_4(sclp_cmdw_t VAR_0, void *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3)
  goto out;
 FUNC_2();
out:
 FUNC_0(VAR_2);
 return VAR_3;
}
