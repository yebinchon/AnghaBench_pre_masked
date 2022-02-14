
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* curr; } ;
struct saa7146_vv {int vbi_fieldcount; TYPE_3__ vbi_dmaq; } ;
struct saa7146_dev {int slock; struct saa7146_vv* vv_data; } ;
struct TYPE_5__ {int field_count; } ;
struct TYPE_6__ {TYPE_1__ vb; } ;


 int FUNC_0 (char*,struct saa7146_dev*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct saa7146_dev*,TYPE_3__*,int ) ;
 int FUNC_2 (struct saa7146_dev*,TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct saa7146_dev *VAR_1, unsigned long VAR_2)
{
 struct saa7146_vv *VAR_3 = VAR_1->vv_data;
 FUNC_3(&VAR_1->slock);

 if (VAR_3->vbi_dmaq.curr) {
  FUNC_0("dev:%p, curr:%p\n", VAR_1, VAR_3->vbi_dmaq.curr);

  VAR_3->vbi_fieldcount+=2;
  VAR_3->vbi_dmaq.curr->vb.field_count = VAR_3->vbi_fieldcount;
  FUNC_1(VAR_1, &VAR_3->vbi_dmaq, VAR_0);
 } else {
  FUNC_0("dev:%p\n", VAR_1);
 }
 FUNC_2(VAR_1, &VAR_3->vbi_dmaq, 1);

 FUNC_4(&VAR_1->slock);
}
