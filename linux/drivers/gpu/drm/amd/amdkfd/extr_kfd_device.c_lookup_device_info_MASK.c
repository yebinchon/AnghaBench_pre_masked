
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_device_info {int dummy; } ;
struct TYPE_3__ {unsigned short did; struct kfd_device_info const* device_info; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,unsigned short) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const struct kfd_device_info *FUNC_3(unsigned short VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1[VAR_3].did == VAR_2) {
   FUNC_1(!VAR_1[VAR_3].device_info);
   return VAR_1[VAR_3].device_info;
  }
 }

 FUNC_2(VAR_0, "DID %04x is missing in supported_devices\n",
   VAR_2);

 return ((void*)0);
}
