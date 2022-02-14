
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long class_0_pending; int class_0_dar; } ;
struct spu_context {TYPE_1__ csa; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct spu_context*,int ,int ) ;

int FUNC_2(struct spu_context *VAR_8)
{
 unsigned long VAR_9 = VAR_8->csa.class_0_pending & VAR_1;

 if (FUNC_0(!VAR_9))
  return 0;

 if (VAR_9 & VAR_0)
  FUNC_1(VAR_8, VAR_8->csa.class_0_dar,
   VAR_5);

 if (VAR_9 & VAR_2)
  FUNC_1(VAR_8, VAR_8->csa.class_0_dar,
   VAR_6);

 if (VAR_9 & VAR_3)
  FUNC_1(VAR_8, VAR_8->csa.class_0_dar,
   VAR_7);

 VAR_8->csa.class_0_pending = 0;

 return -VAR_4;
}
