
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_map {int flags; int class; TYPE_1__* scq; scalar_t__ scd_index; } ;
struct idt77252_dev {int scd_base; scalar_t__ tct_base; struct vc_map** scd2vc; int name; struct vc_map** vcs; } ;
struct TYPE_3__ {int scd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (struct idt77252_dev*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct idt77252_dev*,TYPE_1__*,int ) ;
 struct vc_map* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct idt77252_dev*,scalar_t__,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int
FUNC_7(struct idt77252_dev *VAR_8)
{
 struct vc_map *VAR_9;

 VAR_9 = FUNC_3(sizeof(struct vc_map), VAR_1);
 if (!VAR_9) {
  FUNC_4("%s: can't alloc vc\n", VAR_8->name);
  return -VAR_0;
 }
 VAR_8->vcs[0] = VAR_9;
 VAR_9->class = VAR_3;

 VAR_9->scq = FUNC_0(VAR_8, VAR_9->class);
 if (!VAR_9->scq) {
  FUNC_4("%s: can't get SCQ.\n", VAR_8->name);
  return -VAR_0;
 }

 VAR_8->scd2vc[0] = VAR_9;
 VAR_9->scd_index = 0;
 VAR_9->scq->scd = VAR_8->scd_base;

 FUNC_2(VAR_8, VAR_9->scq, VAR_9->class);

 FUNC_5(VAR_8, VAR_8->tct_base + 0, VAR_6 | VAR_8->scd_base);
 FUNC_5(VAR_8, VAR_8->tct_base + 1, 0);
 FUNC_5(VAR_8, VAR_8->tct_base + 2, 0);
 FUNC_5(VAR_8, VAR_8->tct_base + 3, 0);
 FUNC_5(VAR_8, VAR_8->tct_base + 4, 0);
 FUNC_5(VAR_8, VAR_8->tct_base + 5, 0);
 FUNC_5(VAR_8, VAR_8->tct_base + 6, 0);
 FUNC_5(VAR_8, VAR_8->tct_base + 7, VAR_5);

 FUNC_1(VAR_7, &VAR_9->flags);
 FUNC_6(VAR_4 | 0, VAR_2);
 return 0;
}
