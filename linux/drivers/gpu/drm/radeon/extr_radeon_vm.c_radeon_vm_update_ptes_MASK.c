
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int uint32_t ;
struct radeon_vm {TYPE_1__* page_tables; } ;
struct radeon_ib {int sync; } ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {int resv; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct radeon_bo {TYPE_3__ tbo; } ;
struct TYPE_4__ {struct radeon_bo* bo; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (struct radeon_bo*) ;
 int FUNC_2 (struct radeon_device*,int *,int ,int) ;
 size_t VAR_2 ;
 int FUNC_3 (struct radeon_device*,struct radeon_ib*,size_t,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_3,
     struct radeon_vm *VAR_4,
     struct radeon_ib *VAR_5,
     uint64_t VAR_6, uint64_t VAR_7,
     uint64_t VAR_8, uint32_t VAR_9)
{
 uint64_t VAR_10 = VAR_1 - 1;
 uint64_t VAR_11 = ~0, VAR_12 = ~0;
 unsigned VAR_13 = 0;
 uint64_t VAR_14;


 for (VAR_14 = VAR_6; VAR_14 < VAR_7; ) {
  uint64_t VAR_15 = VAR_14 >> VAR_2;
  struct radeon_bo *VAR_16 = VAR_4->page_tables[VAR_15].bo;
  unsigned VAR_17;
  uint64_t VAR_18;
  int VAR_19;

  FUNC_2(VAR_3, &VAR_5->sync, VAR_16->tbo.base.resv, 1);
  VAR_19 = FUNC_0(VAR_16->tbo.base.resv, 1);
  if (VAR_19)
   return VAR_19;

  if ((VAR_14 & ~VAR_10) == (VAR_7 & ~VAR_10))
   VAR_17 = VAR_7 - VAR_14;
  else
   VAR_17 = VAR_1 - (VAR_14 & VAR_10);

  VAR_18 = FUNC_1(VAR_16);
  VAR_18 += (VAR_14 & VAR_10) * 8;

  if ((VAR_11 + 8 * VAR_13) != VAR_18) {

   if (VAR_13) {
    FUNC_3(VAR_3, VAR_5, VAR_11,
          VAR_11 + 8 * VAR_13,
          VAR_12, VAR_9);
   }

   VAR_13 = VAR_17;
   VAR_11 = VAR_18;
   VAR_12 = VAR_8;
  } else {
   VAR_13 += VAR_17;
  }

  VAR_14 += VAR_17;
  VAR_8 += VAR_17 * VAR_0;
 }

 if (VAR_13) {
  FUNC_3(VAR_3, VAR_5, VAR_11,
        VAR_11 + 8 * VAR_13,
        VAR_12, VAR_9);
 }

 return 0;
}
