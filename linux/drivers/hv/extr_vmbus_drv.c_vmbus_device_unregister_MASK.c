
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_device {int device; int channels_kset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct hv_device *VAR_0)
{
 FUNC_3("child device %s unregistered\n",
  FUNC_0(&VAR_0->device));

 FUNC_2(VAR_0->channels_kset);





 FUNC_1(&VAR_0->device);
}
