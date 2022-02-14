
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void net_device ;
struct ib_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void*,void*) ;

__attribute__((used)) static bool FUNC_3(struct ib_device *VAR_0, u8 VAR_1,
    struct net_device *VAR_2, void *VAR_3)
{
 bool VAR_4;

 if (!VAR_2)
  return 0;

 if (VAR_2 == VAR_3)
  return 1;

 FUNC_0();
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 FUNC_1();

 return VAR_4;
}
