
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_device {int dummy; } ;


 int VAR_0 ;
 struct zip_device** VAR_1 ;
 int FUNC_0 (char*,int) ;

struct zip_device *FUNC_1(int VAR_2)
{
 if ((VAR_2 < VAR_0) && (VAR_2 >= 0))
  return VAR_1[VAR_2];

 FUNC_0("ZIP device not found for node id %d\n", VAR_2);
 return ((void*)0);
}
