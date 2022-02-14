
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct mcb_device {int dummy; } ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct mcb_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct mcb_device *VAR_1)
{
 struct resource *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_2->start;
}
