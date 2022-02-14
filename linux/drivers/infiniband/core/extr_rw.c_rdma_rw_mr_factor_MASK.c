
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int max_sge_rd; } ;
struct ib_device {TYPE_1__ attrs; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 unsigned int FUNC_2 (struct ib_device*,int) ;

unsigned int FUNC_3(struct ib_device *VAR_0, u8 VAR_1,
          unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_1(VAR_0, VAR_1))
  VAR_3 = FUNC_2(VAR_0, 0);
 else
  VAR_3 = VAR_0->attrs.max_sge_rd;
 return FUNC_0(VAR_2, VAR_3);
}
