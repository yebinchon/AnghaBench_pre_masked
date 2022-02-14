
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_device {int ffbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ff_device *VAR_2, int VAR_3)
{

 if (FUNC_1(VAR_3, VAR_2->ffbit))
  return VAR_3;

 if (VAR_3 == VAR_0 && FUNC_1(VAR_1, VAR_2->ffbit))
  return VAR_1;

 FUNC_0("invalid type in get_compatible_type()\n");

 return 0;
}
