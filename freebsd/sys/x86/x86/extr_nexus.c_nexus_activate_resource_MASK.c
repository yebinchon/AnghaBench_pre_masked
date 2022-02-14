
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {int dummy; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,struct resource*,int *,struct resource_map*) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*,struct resource_map*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
   struct resource *VAR_7)
{
 struct resource_map VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 if (!(FUNC_3(VAR_7) & VAR_0) &&
     (VAR_5 == VAR_2 || VAR_5 == VAR_1)) {
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, ((void*)0), &VAR_8);
  if (VAR_9) {
   FUNC_2(VAR_7);
   return (VAR_9);
  }

  FUNC_4(VAR_7,&VAR_8);
 }
 return (0);
}
