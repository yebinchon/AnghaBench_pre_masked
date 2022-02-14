
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_device_attribute {scalar_t__ soc_id; scalar_t__ revision; scalar_t__ family; scalar_t__ machine; } ;


 int FUNC_0 (int *,int *,void*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,struct soc_device_attribute const*) ;
 int VAR_2 ;

const struct soc_device_attribute *FUNC_2(
 const struct soc_device_attribute *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3)
  return ((void*)0);

 while (!VAR_4) {
  if (!(VAR_3->machine || VAR_3->family ||
        VAR_3->revision || VAR_3->soc_id))
   break;
  VAR_4 = FUNC_0(&VAR_1, ((void*)0), (void *)VAR_3,
           VAR_2);
  if (VAR_4 < 0 && VAR_0)
   VAR_4 = FUNC_1(VAR_0,
          VAR_3);
  if (VAR_4 < 0)
   return ((void*)0);
  if (!VAR_4)
   VAR_3++;
  else
   return VAR_3;
 }
 return ((void*)0);
}
