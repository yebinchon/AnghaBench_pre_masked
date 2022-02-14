
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;
struct radeon_vm {int max_pde_used; TYPE_1__* page_tables; struct radeon_bo* page_directory; } ;
struct radeon_ib {unsigned int length_dw; TYPE_4__* fence; int sync; } ;
struct radeon_device {int dummy; } ;
struct TYPE_6__ {int resv; } ;
struct TYPE_7__ {TYPE_2__ base; } ;
struct radeon_bo {TYPE_3__ tbo; } ;
struct TYPE_8__ {int is_vm_update; } ;
struct TYPE_5__ {scalar_t__ addr; struct radeon_bo* bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_2 (struct radeon_bo*,TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_5 (struct radeon_device*,int ,struct radeon_ib*,int *,unsigned int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_7 (struct radeon_device*,int *,int ,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ib*,scalar_t__,scalar_t__,unsigned int,unsigned int,int ) ;

int FUNC_9(struct radeon_device *VAR_4,
        struct radeon_vm *VAR_5)
{
 struct radeon_bo *VAR_6 = VAR_5->page_directory;
 uint64_t VAR_7 = FUNC_3(VAR_6);
 uint32_t VAR_8 = VAR_3 * 8;
 uint64_t VAR_9 = ~0, VAR_10 = ~0;
 unsigned VAR_11 = 0, VAR_12, VAR_13;
 struct radeon_ib VAR_14;
 int VAR_15;


 VAR_13 = 64;


 VAR_13 += VAR_5->max_pde_used * 6;


 if (VAR_13 > 0xfffff)
  return -VAR_0;

 VAR_15 = FUNC_5(VAR_4, VAR_2, &VAR_14, ((void*)0), VAR_13 * 4);
 if (VAR_15)
  return VAR_15;
 VAR_14.length_dw = 0;


 for (VAR_12 = 0; VAR_12 <= VAR_5->max_pde_used; ++VAR_12) {
  struct radeon_bo *VAR_16 = VAR_5->page_tables[VAR_12].bo;
  uint64_t VAR_17, VAR_18;

  if (VAR_16 == ((void*)0))
   continue;

  VAR_18 = FUNC_3(VAR_16);
  if (VAR_5->page_tables[VAR_12].addr == VAR_18)
   continue;
  VAR_5->page_tables[VAR_12].addr = VAR_18;

  VAR_17 = VAR_7 + VAR_12 * 8;
  if (((VAR_9 + 8 * VAR_11) != VAR_17) ||
      ((VAR_10 + VAR_8 * VAR_11) != VAR_18)) {

   if (VAR_11) {
    FUNC_8(VAR_4, &VAR_14, VAR_9,
          VAR_10, VAR_11, VAR_8,
          VAR_1);
   }

   VAR_11 = 1;
   VAR_9 = VAR_17;
   VAR_10 = VAR_18;
  } else {
   ++VAR_11;
  }
 }

 if (VAR_11)
  FUNC_8(VAR_4, &VAR_14, VAR_9, VAR_10, VAR_11,
        VAR_8, VAR_1);

 if (VAR_14.length_dw != 0) {
  FUNC_1(VAR_4, &VAR_14);

  FUNC_7(VAR_4, &VAR_14.sync, VAR_6->tbo.base.resv, 1);
  FUNC_0(VAR_14.length_dw > VAR_13);
  VAR_15 = FUNC_6(VAR_4, &VAR_14, ((void*)0), 0);
  if (VAR_15) {
   FUNC_4(VAR_4, &VAR_14);
   return VAR_15;
  }
  VAR_14.fence->is_vm_update = 1;
  FUNC_2(VAR_6, VAR_14.fence, 0);
 }
 FUNC_4(VAR_4, &VAR_14);

 return 0;
}
