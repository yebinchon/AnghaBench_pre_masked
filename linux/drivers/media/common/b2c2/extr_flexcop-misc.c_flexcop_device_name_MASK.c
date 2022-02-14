
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_device {size_t dev_type; size_t bus_type; size_t rev; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*,char const*,int ,int ,int ,char const*) ;

void FUNC_1(struct flexcop_device *VAR_3,
  const char *VAR_4, const char *VAR_5)
{
 FUNC_0("%s '%s' at the '%s' bus controlled by a '%s' %s",
   VAR_4, VAR_1[VAR_3->dev_type],
   VAR_0[VAR_3->bus_type],
   VAR_2[VAR_3->rev], VAR_5);
}
