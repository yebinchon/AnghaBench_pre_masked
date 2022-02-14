
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_device_desc {int dummy; } ;


 int VAR_0 ;
 struct pxa_device_desc VAR_1 ;
 struct pxa_device_desc VAR_2 ;
 int FUNC_0 (struct pxa_device_desc*,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(int VAR_3)
{
 struct pxa_device_desc *VAR_4 = ((void*)0);

 switch (VAR_3) {
 case 1: VAR_4 = &VAR_1; break;
 case 2: VAR_4 = &VAR_2; break;
 }

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_4, ((void*)0), 0);
}
