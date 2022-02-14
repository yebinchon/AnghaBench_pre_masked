
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spu_context {struct spu* spu; } ;
struct spu {int register_lock; TYPE_1__* problem; } ;
typedef int __poll_t ;
struct TYPE_2__ {int mb_stat_R; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spu*,int,int ) ;
 int FUNC_4 (struct spu*,int,int ) ;

__attribute__((used)) static __poll_t FUNC_5(struct spu_context *VAR_8, __poll_t VAR_9)
{
 struct spu *VAR_10 = VAR_8->spu;
 __poll_t VAR_11 = 0;
 u32 VAR_12;

 FUNC_1(&VAR_10->register_lock);
 VAR_12 = FUNC_0(&VAR_10->problem->mb_stat_R);






 if (VAR_9 & (VAR_4 | VAR_6)) {
  if (VAR_12 & 0xff0000)
   VAR_11 |= VAR_4 | VAR_6;
  else {
   FUNC_4(VAR_10, 2, VAR_2);
   FUNC_3(VAR_10, 2, VAR_0);
  }
 }
 if (VAR_9 & (VAR_5 | VAR_7)) {
  if (VAR_12 & 0x00ff00)
   VAR_11 = VAR_5 | VAR_7;
  else {
   FUNC_4(VAR_10, 2,
     VAR_3);
   FUNC_3(VAR_10, 2,
     VAR_1);
  }
 }
 FUNC_2(&VAR_10->register_lock);
 return VAR_11;
}
