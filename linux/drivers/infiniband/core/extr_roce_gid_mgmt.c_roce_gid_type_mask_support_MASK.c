
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {unsigned long gid_type; scalar_t__ (* is_supported ) (struct ib_device*,int ) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct ib_device*,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;

unsigned long FUNC_2(struct ib_device *VAR_3, u8 VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = 0;

 if (!FUNC_0(VAR_3, VAR_4))
  return 1UL << VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_2[VAR_5].is_supported(VAR_3, VAR_4))
   VAR_6 |= 1UL << VAR_2[VAR_5].gid_type;

 return VAR_6;
}
