
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* query_pkey ) (struct ib_device*,int ,int ,int *) ;} ;
struct ib_device {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ) ;
 int FUNC_1 (struct ib_device*,int ,int ,int *) ;

int FUNC_2(struct ib_device *VAR_1,
    u8 VAR_2, u16 VAR_3, u16 *VAR_4)
{
 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 return VAR_1->ops.query_pkey(VAR_1, VAR_2, VAR_3, VAR_4);
}
