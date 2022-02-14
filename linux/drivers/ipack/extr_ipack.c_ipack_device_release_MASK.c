
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack_device {int (* release ) (struct ipack_device*) ;int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipack_device*) ;
 struct ipack_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct ipack_device *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1->id);
 VAR_1->release(VAR_1);
}
