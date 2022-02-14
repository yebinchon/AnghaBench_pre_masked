
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct n2rng {TYPE_1__* op; TYPE_2__* data; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,char*,unsigned long) ;
 int FUNC_2 (int *,char*,unsigned long) ;
 int FUNC_3 (struct n2rng*) ;
 scalar_t__ FUNC_4 (struct n2rng*,int ) ;

__attribute__((used)) static int FUNC_5(struct n2rng *VAR_6, unsigned long VAR_7)
{
 u64 VAR_8;
 int VAR_9, VAR_10, VAR_11;

 switch (VAR_6->data->id) {
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_8 = VAR_1;
  break;
 default:
  VAR_8 = VAR_2;
  break;
 }

 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_10 += FUNC_4(VAR_6, VAR_8);
  if (VAR_10 >= VAR_4)
   break;
  VAR_8 = FUNC_0(VAR_5, VAR_8, 1);
 }

 VAR_9 = 0;
 if (VAR_11 >= VAR_3) {
  VAR_9 = -VAR_0;
  FUNC_1(&VAR_6->op->dev, "Selftest failed on unit %lu\n", VAR_7);
  FUNC_3(VAR_6);
 } else
  FUNC_2(&VAR_6->op->dev, "Selftest passed on unit %lu\n", VAR_7);

 return VAR_9;
}
