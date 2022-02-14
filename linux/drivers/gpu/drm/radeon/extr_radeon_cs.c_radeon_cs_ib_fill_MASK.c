
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_vm {int dummy; } ;
struct radeon_fpriv {struct radeon_vm vm; } ;
struct radeon_device {scalar_t__ family; } ;
struct TYPE_4__ {int is_const_ib; int length_dw; int ptr; } ;
struct radeon_cs_parser {int cs_flags; TYPE_2__ ib; int ring; struct radeon_cs_chunk* chunk_ib; TYPE_2__ const_ib; struct radeon_cs_chunk* chunk_const_ib; TYPE_1__* filp; } ;
struct radeon_cs_chunk {int length_dw; int user_ptr; scalar_t__ kdata; } ;
struct TYPE_3__ {struct radeon_fpriv* driver_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (struct radeon_device*,int ,TYPE_2__*,struct radeon_vm*,int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_5, struct radeon_cs_parser *VAR_6)
{
 struct radeon_cs_chunk *VAR_7;
 struct radeon_vm *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_6->chunk_ib == ((void*)0))
  return 0;

 if (VAR_6->cs_flags & VAR_3) {
  struct radeon_fpriv *VAR_10 = VAR_6->filp->driver_priv;
  VAR_8 = &VAR_10->vm;

  if ((VAR_5->family >= VAR_0) &&
      (VAR_6->chunk_const_ib != ((void*)0))) {
   VAR_7 = VAR_6->chunk_const_ib;
   if (VAR_7->length_dw > VAR_4) {
    FUNC_0("cs IB CONST too big: %d\n", VAR_7->length_dw);
    return -VAR_2;
   }
   VAR_9 = FUNC_3(VAR_5, VAR_6->ring, &VAR_6->const_ib,
        VAR_8, VAR_7->length_dw * 4);
   if (VAR_9) {
    FUNC_0("Failed to get const ib !\n");
    return VAR_9;
   }
   VAR_6->const_ib.is_const_ib = 1;
   VAR_6->const_ib.length_dw = VAR_7->length_dw;
   if (FUNC_1(VAR_6->const_ib.ptr,
            VAR_7->user_ptr,
            VAR_7->length_dw * 4))
    return -VAR_1;
  }

  VAR_7 = VAR_6->chunk_ib;
  if (VAR_7->length_dw > VAR_4) {
   FUNC_0("cs IB too big: %d\n", VAR_7->length_dw);
   return -VAR_2;
  }
 }
 VAR_7 = VAR_6->chunk_ib;

 VAR_9 = FUNC_3(VAR_5, VAR_6->ring, &VAR_6->ib,
      VAR_8, VAR_7->length_dw * 4);
 if (VAR_9) {
  FUNC_0("Failed to get ib !\n");
  return VAR_9;
 }
 VAR_6->ib.length_dw = VAR_7->length_dw;
 if (VAR_7->kdata)
  FUNC_2(VAR_6->ib.ptr, VAR_7->kdata, VAR_7->length_dw * 4);
 else if (FUNC_1(VAR_6->ib.ptr, VAR_7->user_ptr, VAR_7->length_dw * 4))
  return -VAR_1;
 return 0;
}
