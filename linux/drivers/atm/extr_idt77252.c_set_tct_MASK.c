
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_map {int index; int class; int init_er; TYPE_1__* scq; } ;
struct idt77252_dev {int name; scalar_t__ tct_base; } ;
struct TYPE_2__ {int scd; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long,int) ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct idt77252_dev*,unsigned long,int) ;

__attribute__((used)) static int
FUNC_2(struct idt77252_dev *VAR_8, struct vc_map *VAR_9)
{
 unsigned long VAR_10;

 VAR_10 = (unsigned long) (VAR_8->tct_base + VAR_9->index * VAR_1);

 switch (VAR_9->class) {
 case 130:
  FUNC_0("%s: writing TCT at 0x%lx, SCD 0x%lx.\n",
          VAR_8->name, VAR_10, VAR_9->scq->scd);

  FUNC_1(VAR_8, VAR_10 + 0, VAR_2 | VAR_9->scq->scd);
  FUNC_1(VAR_8, VAR_10 + 1, 0);
  FUNC_1(VAR_8, VAR_10 + 2, 0);
  FUNC_1(VAR_8, VAR_10 + 3, 0);
  FUNC_1(VAR_8, VAR_10 + 4, 0);
  FUNC_1(VAR_8, VAR_10 + 5, 0);
  FUNC_1(VAR_8, VAR_10 + 6, 0);
  FUNC_1(VAR_8, VAR_10 + 7, 0);
  break;

 case 129:
  FUNC_0("%s: writing TCT at 0x%lx, SCD 0x%lx.\n",
          VAR_8->name, VAR_10, VAR_9->scq->scd);

  FUNC_1(VAR_8, VAR_10 + 0, VAR_7 | VAR_9->scq->scd);
  FUNC_1(VAR_8, VAR_10 + 1, 0);
  FUNC_1(VAR_8, VAR_10 + 2, VAR_6);
  FUNC_1(VAR_8, VAR_10 + 3, VAR_4 | VAR_5);
  FUNC_1(VAR_8, VAR_10 + 4, 0);
  FUNC_1(VAR_8, VAR_10 + 5, VAR_9->init_er);
  FUNC_1(VAR_8, VAR_10 + 6, 0);
  FUNC_1(VAR_8, VAR_10 + 7, VAR_3);
  break;

 case 128:
 case 131:
 default:
  return -VAR_0;
 }

 return 0;
}
