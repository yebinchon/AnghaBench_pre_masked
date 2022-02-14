
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct b53_device {int reg_mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write32 ) (struct b53_device*,int ,int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct b53_device*,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct b53_device *VAR_0, u8 VAR_1, u8 VAR_2,
         u32 VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->reg_mutex);
 VAR_4 = VAR_0->ops->write32(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->reg_mutex);

 return VAR_4;
}
