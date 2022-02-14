
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {int dummy; } ;
struct etr_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* alloc ) (struct tmc_drvdata*,struct etr_buf*,int,void**) ;} ;


 int VAR_0 ;



 TYPE_1__** VAR_1 ;
 int FUNC_0 (struct tmc_drvdata*,struct etr_buf*,int,void**) ;

__attribute__((used)) static inline int FUNC_1(int VAR_2,
      struct tmc_drvdata *VAR_3,
      struct etr_buf *VAR_4, int VAR_5,
      void **VAR_6)
{
 int VAR_7 = -VAR_0;

 switch (VAR_2) {
 case 128:
 case 129:
 case 130:
  if (VAR_1[VAR_2] && VAR_1[VAR_2]->alloc)
   VAR_7 = VAR_1[VAR_2]->alloc(VAR_3, VAR_4,
            VAR_5, VAR_6);
  if (!VAR_7)
   VAR_4->ops = VAR_1[VAR_2];
  return VAR_7;
 default:
  return -VAR_0;
 }
}
