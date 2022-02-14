
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_vmbus_device_id {int guid; } ;
typedef int guid_t ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const struct hv_vmbus_device_id *
FUNC_2(const struct hv_vmbus_device_id *VAR_0, const guid_t *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 for (; !FUNC_1(&VAR_0->guid); VAR_0++)
  if (FUNC_0(&VAR_0->guid, VAR_1))
   return VAR_0;

 return ((void*)0);
}
