
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_device_attribute {scalar_t__ soc_id; scalar_t__ revision; scalar_t__ family; scalar_t__ machine; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct soc_device_attribute *VAR_0,
     const struct soc_device_attribute *VAR_1)
{
 if (VAR_1->machine &&
     (!VAR_0->machine || !FUNC_0(VAR_1->machine, VAR_0->machine)))
  return 0;

 if (VAR_1->family &&
     (!VAR_0->family || !FUNC_0(VAR_1->family, VAR_0->family)))
  return 0;

 if (VAR_1->revision &&
     (!VAR_0->revision || !FUNC_0(VAR_1->revision, VAR_0->revision)))
  return 0;

 if (VAR_1->soc_id &&
     (!VAR_0->soc_id || !FUNC_0(VAR_1->soc_id, VAR_0->soc_id)))
  return 0;

 return 1;
}
