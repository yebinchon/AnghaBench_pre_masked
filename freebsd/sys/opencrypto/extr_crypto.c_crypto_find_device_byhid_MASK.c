
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocap {int * cc_dev; } ;
typedef int * device_t ;


 struct cryptocap* FUNC_0 (int) ;

device_t
FUNC_1(int VAR_0)
{
 struct cryptocap *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 != ((void*)0) ? VAR_1->cc_dev : ((void*)0);
}
