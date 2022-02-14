
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_device {struct mcb_bus* bus; } ;
struct mcb_bus {int dummy; } ;


 int VAR_0 ;
 struct mcb_device* FUNC_0 (int,int ) ;

struct mcb_device *FUNC_1(struct mcb_bus *VAR_1)
{
 struct mcb_device *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct mcb_device), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->bus = VAR_1;

 return VAR_2;
}
