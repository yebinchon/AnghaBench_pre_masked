
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_vm {int mutex; } ;
struct radeon_fpriv {struct radeon_vm vm; } ;
struct radeon_device {scalar_t__ family; } ;
struct TYPE_6__ {scalar_t__ length_dw; } ;
struct radeon_cs_parser {int cs_flags; scalar_t__ ring; TYPE_2__ ib; TYPE_2__ const_ib; int * chunk_const_ib; int * chunk_ib; TYPE_1__* filp; } ;
struct TYPE_5__ {struct radeon_fpriv* driver_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_cs_parser*,struct radeon_vm*) ;
 int FUNC_4 (struct radeon_cs_parser*) ;
 int FUNC_5 (struct radeon_device*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (struct radeon_device*,scalar_t__,TYPE_2__*) ;
 int FUNC_7 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_4,
     struct radeon_cs_parser *VAR_5)
{
 struct radeon_fpriv *VAR_6 = VAR_5->filp->driver_priv;
 struct radeon_vm *VAR_7 = &VAR_6->vm;
 int VAR_8;

 if (VAR_5->chunk_ib == ((void*)0))
  return 0;
 if ((VAR_5->cs_flags & VAR_3) == 0)
  return 0;

 if (VAR_5->const_ib.length_dw) {
  VAR_8 = FUNC_6(VAR_4, VAR_5->ring, &VAR_5->const_ib);
  if (VAR_8) {
   return VAR_8;
  }
 }

 VAR_8 = FUNC_6(VAR_4, VAR_5->ring, &VAR_5->ib);
 if (VAR_8) {
  return VAR_8;
 }

 if (VAR_5->ring == VAR_2)
  FUNC_7(VAR_4);

 FUNC_1(&VAR_7->mutex);
 VAR_8 = FUNC_3(VAR_5, VAR_7);
 if (VAR_8) {
  goto out;
 }

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8) {
  if (VAR_8 != -VAR_1)
   FUNC_0("Failed to sync rings: %i\n", VAR_8);
  goto out;
 }

 if ((VAR_4->family >= VAR_0) &&
     (VAR_5->chunk_const_ib != ((void*)0))) {
  VAR_8 = FUNC_5(VAR_4, &VAR_5->ib, &VAR_5->const_ib, 1);
 } else {
  VAR_8 = FUNC_5(VAR_4, &VAR_5->ib, ((void*)0), 1);
 }

out:
 FUNC_2(&VAR_7->mutex);
 return VAR_8;
}
