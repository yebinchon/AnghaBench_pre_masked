
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seqno; int * ops; } ;
struct qxl_release {int type; int id; TYPE_1__ base; int bos; scalar_t__ surface_release_id; scalar_t__ release_offset; } ;
struct qxl_device {int release_idr_lock; scalar_t__ release_seqno; int release_idr; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct qxl_release*,int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct qxl_release*) ;
 struct qxl_release* FUNC_7 (size_t,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct qxl_device *VAR_3, int VAR_4,
    struct qxl_release **VAR_5)
{
 struct qxl_release *VAR_6;
 int VAR_7;
 size_t VAR_8 = sizeof(*VAR_6);

 VAR_6 = FUNC_7(VAR_8, VAR_1);
 if (!VAR_6) {
  FUNC_1("Out of memory\n");
  return -VAR_0;
 }
 VAR_6->base.ops = ((void*)0);
 VAR_6->type = VAR_4;
 VAR_6->release_offset = 0;
 VAR_6->surface_release_id = 0;
 FUNC_2(&VAR_6->bos);

 FUNC_4(VAR_1);
 FUNC_8(&VAR_3->release_idr_lock);
 VAR_7 = FUNC_3(&VAR_3->release_idr, VAR_6, 1, 0, VAR_2);
 VAR_6->base.seqno = ++VAR_3->release_seqno;
 FUNC_9(&VAR_3->release_idr_lock);
 FUNC_5();
 if (VAR_7 < 0) {
  FUNC_6(VAR_6);
  *VAR_5 = ((void*)0);
  return VAR_7;
 }
 *VAR_5 = VAR_6;
 FUNC_0("allocated release %d\n", VAR_7);
 VAR_6->id = VAR_7;
 return VAR_7;
}
