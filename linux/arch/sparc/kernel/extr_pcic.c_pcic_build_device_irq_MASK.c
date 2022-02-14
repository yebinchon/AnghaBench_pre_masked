
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 unsigned long FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,int *,int ,char*) ;
 int FUNC_3 (unsigned int,void*) ;
 int VAR_1 ;

unsigned int FUNC_4(struct platform_device *VAR_2,
                                   unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;

 VAR_4 = 0;
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == 0)
  goto out;

 VAR_4 = FUNC_1(VAR_3, VAR_3);
 if (VAR_4 == 0)
  goto out;

 FUNC_2(VAR_4, &VAR_1,
                               VAR_0, "PCIC");
 FUNC_3(VAR_4, (void *)VAR_5);

out:
 return VAR_4;
}
