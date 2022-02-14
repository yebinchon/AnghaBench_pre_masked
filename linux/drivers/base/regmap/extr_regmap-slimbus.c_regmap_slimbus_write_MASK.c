
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct slim_device {int dummy; } ;


 int FUNC_0 (struct slim_device*,int ,size_t,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct slim_device *VAR_3 = VAR_0;

 return FUNC_0(VAR_3, *(u16 *)VAR_1, VAR_2 - 2, (u8 *)VAR_1 + 2);
}
