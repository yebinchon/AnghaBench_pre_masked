
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_page_prot; } ;
struct mlx4_ib_dev {TYPE_5__* dev; } ;
struct mlx4_clock_params {int offset; int bar; } ;
struct ib_ucontext {int device; } ;
struct TYPE_7__ {int num_uars; int bf_reg_size; } ;
struct TYPE_10__ {TYPE_3__* persist; TYPE_2__ caps; } ;
struct TYPE_6__ {int pfn; } ;
struct TYPE_9__ {TYPE_1__ uar; } ;
struct TYPE_8__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,struct mlx4_clock_params*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ib_ucontext*,struct vm_area_struct*,int,int ,int ) ;
 struct mlx4_ib_dev* FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_7(struct ib_ucontext *VAR_3, struct vm_area_struct *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_5(VAR_3->device);

 switch (VAR_4->vm_pgoff) {
 case 0:
  return FUNC_4(VAR_3, VAR_4,
      FUNC_6(VAR_3)->uar.pfn,
      VAR_2,
      FUNC_2(VAR_4->vm_page_prot));

 case 1:
  if (VAR_5->dev->caps.bf_reg_size == 0)
   return -VAR_0;
  return FUNC_4(
   VAR_3, VAR_4,
   FUNC_6(VAR_3)->uar.pfn +
    VAR_5->dev->caps.num_uars,
   VAR_2, FUNC_3(VAR_4->vm_page_prot));

 case 3: {
  struct mlx4_clock_params VAR_6;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_5->dev, &VAR_6);
  if (VAR_7)
   return VAR_7;

  return FUNC_4(
   VAR_3, VAR_4,
   (FUNC_1(VAR_5->dev->persist->pdev,
         VAR_6.bar) +
    VAR_6.offset) >>
    VAR_1,
   VAR_2, FUNC_2(VAR_4->vm_page_prot));
 }

 default:
  return -VAR_0;
 }
}
