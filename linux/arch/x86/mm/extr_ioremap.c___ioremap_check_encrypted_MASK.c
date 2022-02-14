
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int desc; } ;




 unsigned int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned int FUNC_1(struct resource *VAR_1)
{
 if (!FUNC_0())
  return 0;

 switch (VAR_1->desc) {
 case 129:
 case 128:
  break;
 default:
  return VAR_0;
 }

 return 0;
}
