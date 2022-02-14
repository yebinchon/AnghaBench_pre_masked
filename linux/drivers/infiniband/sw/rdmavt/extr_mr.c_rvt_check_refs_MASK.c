
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
struct rvt_mregion {TYPE_1__ refcount; scalar_t__ lkey; TYPE_2__* pd; int comp; } ;
struct rvt_dev_info {int dummy; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct rvt_dev_info* FUNC_1 (int ) ;
 int FUNC_2 (struct rvt_mregion*) ;
 int FUNC_3 (struct rvt_mregion*) ;
 int FUNC_4 (struct rvt_dev_info*,char*,char const*,struct rvt_mregion*,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct rvt_mregion *VAR_2, const char *VAR_3)
{
 unsigned long VAR_4;
 struct rvt_dev_info *VAR_5 = FUNC_1(VAR_2->pd->device);

 if (VAR_2->lkey) {

  FUNC_2(VAR_2);

  FUNC_5();
 }

 VAR_4 = FUNC_6(&VAR_2->comp, 5 * VAR_1);
 if (!VAR_4) {
  FUNC_4(VAR_5,
      "%s timeout mr %p pd %p lkey %x refcount %ld\n",
      VAR_3, VAR_2, VAR_2->pd, VAR_2->lkey,
      FUNC_0(&VAR_2->refcount.count));
  FUNC_3(VAR_2);
  return -VAR_0;
 }
 return 0;
}
