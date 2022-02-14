
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pages_devres {unsigned long addr; unsigned int order; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct pages_devres*) ;
 struct pages_devres* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

unsigned long FUNC_5(struct device *VAR_2,
      gfp_t VAR_3, unsigned int VAR_4)
{
 struct pages_devres *VAR_5;
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4);

 if (FUNC_4(!VAR_6))
  return 0;

 VAR_5 = FUNC_2(VAR_1,
         sizeof(struct pages_devres), VAR_0);
 if (FUNC_4(!VAR_5)) {
  FUNC_3(VAR_6, VAR_4);
  return 0;
 }

 VAR_5->addr = VAR_6;
 VAR_5->order = VAR_4;

 FUNC_1(VAR_2, VAR_5);
 return VAR_6;
}
