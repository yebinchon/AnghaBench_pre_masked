
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma; int cpu; } ;
struct lima_vm {TYPE_1__ pd; int mm; int refcount; int lock; struct lima_device* dev; } ;
struct lima_device {int dev; scalar_t__ va_start; scalar_t__ va_end; int dlbu_dma; scalar_t__ dlbu_cpu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int *,int) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct lima_vm*) ;
 int FUNC_4 (int *) ;
 struct lima_vm* FUNC_5 (int,int) ;
 int FUNC_6 (struct lima_vm*,int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;

struct lima_vm *FUNC_8(struct lima_device *VAR_4)
{
 struct lima_vm *VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->dev = VAR_4;
 FUNC_7(&VAR_5->lock);
 FUNC_4(&VAR_5->refcount);

 VAR_5->pd.cpu = FUNC_0(VAR_4->dev, VAR_1, &VAR_5->pd.dma,
      VAR_0 | VAR_3);
 if (!VAR_5->pd.cpu)
  goto err_out0;

 if (VAR_4->dlbu_cpu) {
  int VAR_6 = FUNC_6(
   VAR_5, &VAR_4->dlbu_dma, VAR_2,
   VAR_2 + VAR_1 - 1);
  if (VAR_6)
   goto err_out1;
 }

 FUNC_2(&VAR_5->mm, VAR_4->va_start, VAR_4->va_end - VAR_4->va_start);

 return VAR_5;

err_out1:
 FUNC_1(VAR_4->dev, VAR_1, VAR_5->pd.cpu, VAR_5->pd.dma);
err_out0:
 FUNC_3(VAR_5);
 return ((void*)0);
}
