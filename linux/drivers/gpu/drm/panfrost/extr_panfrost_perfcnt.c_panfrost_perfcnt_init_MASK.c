
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panfrost_perfcnt {size_t bosize; int lock; int dump_comp; } ;
struct TYPE_2__ {int mem_features; int shader_present; int l2_present; } ;
struct panfrost_device {struct panfrost_perfcnt* perfcnt; int dev; TYPE_1__ features; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct panfrost_perfcnt* FUNC_2 (int ,int,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct panfrost_device*,int ,int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct panfrost_device*,int ) ;

int FUNC_9(struct panfrost_device *VAR_12)
{
 struct panfrost_perfcnt *VAR_13;
 size_t VAR_14;

 if (FUNC_8(VAR_12, VAR_11)) {
  unsigned int VAR_15;

  VAR_15 = FUNC_5(VAR_12->features.l2_present);
  VAR_14 = VAR_15 * VAR_0 *
         VAR_2 * VAR_1;
 } else {
  unsigned int VAR_16, VAR_17;





  VAR_16 = ((VAR_12->features.mem_features >> 8) & FUNC_0(3, 0)) + 1;






  VAR_17 = FUNC_3(VAR_12->features.shader_present);





  VAR_14 = (VAR_16 + VAR_17 + 2) *
         VAR_2 * VAR_1;
 }

 VAR_13 = FUNC_2(VAR_12->dev, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->bosize = VAR_14;


 FUNC_4(VAR_12, VAR_5,
    FUNC_1(VAR_6));
 FUNC_4(VAR_12, VAR_7, 0);
 FUNC_4(VAR_12, VAR_9, 0);
 FUNC_4(VAR_12, VAR_8, 0);
 FUNC_4(VAR_12, VAR_10, 0);

 FUNC_6(&VAR_13->dump_comp);
 FUNC_7(&VAR_13->lock);
 VAR_12->perfcnt = VAR_13;

 return 0;
}
