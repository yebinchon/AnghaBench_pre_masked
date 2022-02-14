
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; scalar_t__ bytes_moved; } ;
struct amdgpu_device {int gmc; } ;
struct amdgpu_cs_parser {int validated; struct amdgpu_bo_list_entry* evictable; int bytes_moved_vis; int bytes_moved; } ;
struct TYPE_6__ {int head; int bo; } ;
struct amdgpu_bo_list_entry {TYPE_2__ tv; } ;
struct TYPE_5__ {int mem_type; } ;
struct TYPE_8__ {TYPE_1__ mem; int bdev; } ;
struct amdgpu_bo {int allowed_domains; int placement; TYPE_4__ tbo; scalar_t__ pin_count; } ;
struct TYPE_7__ {int head; } ;


 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct amdgpu_device* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (struct amdgpu_bo_list_entry*,int ) ;
 int FUNC_7 (TYPE_4__*,int *,struct ttm_operation_ctx*) ;
 struct amdgpu_bo* FUNC_8 (int ) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct amdgpu_cs_parser *VAR_1,
    struct amdgpu_bo *VAR_2)
{
 uint32_t VAR_3 = VAR_2->allowed_domains;
 struct ttm_operation_ctx VAR_4 = { 1, 0 };
 int VAR_5;

 if (!VAR_1->evictable)
  return 0;

 for (;&VAR_1->evictable->tv.head != &VAR_1->validated;
      VAR_1->evictable = FUNC_6(VAR_1->evictable, VAR_0.head)) {

  struct amdgpu_bo_list_entry *VAR_6 = VAR_1->evictable;
  struct amdgpu_bo *VAR_7 = FUNC_8(VAR_6->tv.bo);
  struct amdgpu_device *VAR_8 = FUNC_4(VAR_7->tbo.bdev);
  bool VAR_9;
  uint32_t VAR_10;


  if (VAR_7 == VAR_2)
   break;


  if (VAR_7->pin_count)
   continue;

  VAR_10 = FUNC_3(VAR_7->tbo.mem.mem_type);


  if (!(VAR_10 & VAR_3))
   continue;


  VAR_10 = VAR_7->allowed_domains & ~VAR_3;
  if (!VAR_10)
   continue;


  VAR_9 =
    !FUNC_2(&VAR_8->gmc) &&
    FUNC_0(VAR_7);
  FUNC_1(VAR_7, VAR_10);
  VAR_5 = FUNC_7(&VAR_7->tbo, &VAR_7->placement, &VAR_4);
  VAR_1->bytes_moved += VAR_4.bytes_moved;
  if (VAR_9)
   VAR_1->bytes_moved_vis += VAR_4.bytes_moved;

  if (FUNC_9(VAR_5))
   break;

  VAR_1->evictable = FUNC_6(VAR_1->evictable, VAR_0.head);
  FUNC_5(&VAR_6->tv.head, &VAR_1->validated);

  return 1;
 }

 return 0;
}
