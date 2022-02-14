
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys {TYPE_1__* hw_intf; int parent; int vblank_refcount; } ;
struct TYPE_2__ {scalar_t__ idx; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int ,scalar_t__,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dpu_encoder_phys*,int ) ;
 int FUNC_8 (struct dpu_encoder_phys*,int ) ;
 int FUNC_9 (struct dpu_encoder_phys*) ;

__attribute__((used)) static int FUNC_10(
  struct dpu_encoder_phys *VAR_3,
  bool VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_3) {
  FUNC_0("invalid encoder\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(&VAR_3->vblank_refcount);


 if (!FUNC_9(VAR_3))
  goto end;


 if (!VAR_4 && VAR_6 == 0) {
  VAR_5 = -VAR_0;
  goto end;
 }

 FUNC_2("id:%u enable=%d/%d\n", FUNC_1(VAR_3->parent), VAR_4,
        FUNC_6(&VAR_3->vblank_refcount));

 if (VAR_4 && FUNC_5(&VAR_3->vblank_refcount) == 1)
  VAR_5 = FUNC_7(VAR_3, VAR_2);
 else if (!VAR_4 && FUNC_4(&VAR_3->vblank_refcount) == 0)
  VAR_5 = FUNC_8(VAR_3,
    VAR_2);

end:
 if (VAR_5) {
  FUNC_3("failed: id:%u intf:%d ret:%d enable:%d refcnt:%d\n",
     FUNC_1(VAR_3->parent),
     VAR_3->hw_intf->idx - VAR_1, VAR_5, VAR_4,
     VAR_6);
 }
 return VAR_5;
}
