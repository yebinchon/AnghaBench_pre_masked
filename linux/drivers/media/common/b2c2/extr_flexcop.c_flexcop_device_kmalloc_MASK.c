
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_device {void* bus_specific; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct flexcop_device*) ;
 void* FUNC_2 (size_t,int ) ;

struct flexcop_device *FUNC_3(size_t VAR_1)
{
 void *VAR_2;
 struct flexcop_device *VAR_3 = FUNC_2(sizeof(struct flexcop_device),
    VAR_0);
 if (!VAR_3) {
  FUNC_0("no memory");
  return ((void*)0);
 }

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_2) {
  FUNC_0("no memory");
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 VAR_3->bus_specific = VAR_2;

 return VAR_3;
}
