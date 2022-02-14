
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct coresight_device {int enable; } ;
struct TYPE_2__ {int (* enable ) (struct coresight_device*,int ,void*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct coresight_device*) ;
 int FUNC_1 (struct coresight_device*,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct coresight_device *VAR_1,
     u32 VAR_2, void *VAR_3)
{
 int VAR_4;





 if (!FUNC_0(VAR_1)->enable)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1)->enable(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_1->enable = 1;

 return 0;
}
