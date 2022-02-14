
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int offset; struct host1x_bo* bo; } ;
struct TYPE_3__ {int offset; } ;
struct host1x_reloc {int shift; TYPE_2__ cmdbuf; TYPE_1__ target; } ;
struct host1x_job_gather {int offset; struct host1x_bo* bo; } ;
struct host1x_job {unsigned int num_relocs; int* reloc_addr_phys; scalar_t__ gather_copy_mapped; struct host1x_reloc* relocs; } ;
struct host1x_bo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct host1x_bo*,int) ;
 int FUNC_2 (struct host1x_bo*,int,void*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct host1x_job *VAR_4, struct host1x_job_gather *VAR_5)
{
 u32 VAR_6 = ~0;
 void *VAR_7 = ((void*)0);
 struct host1x_bo *VAR_8 = VAR_5->bo;
 unsigned int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_4->num_relocs; VAR_9++) {
  struct host1x_reloc *VAR_10 = &VAR_4->relocs[VAR_9];
  u32 VAR_11 = (VAR_4->reloc_addr_phys[VAR_9] +
      VAR_10->target.offset) >> VAR_10->shift;
  u32 *VAR_12;


  if (VAR_8 != VAR_10->cmdbuf.bo)
   continue;

  if (FUNC_0(VAR_0)) {
   VAR_12 = (u32 *)VAR_4->gather_copy_mapped +
     VAR_10->cmdbuf.offset / sizeof(u32) +
      VAR_5->offset / sizeof(u32);
   goto patch_reloc;
  }

  if (VAR_6 != VAR_10->cmdbuf.offset >> VAR_3) {
   if (VAR_7)
    FUNC_2(VAR_8, VAR_6,
       VAR_7);

   VAR_7 = FUNC_1(VAR_8,
     VAR_10->cmdbuf.offset >> VAR_3);
   VAR_6 = VAR_10->cmdbuf.offset >> VAR_3;

   if (FUNC_4(!VAR_7)) {
    FUNC_3("Could not map cmdbuf for relocation\n");
    return -VAR_1;
   }
  }

  VAR_12 = VAR_7 + (VAR_10->cmdbuf.offset & ~VAR_2);
patch_reloc:
  *VAR_12 = VAR_11;
 }

 if (VAR_7)
  FUNC_2(VAR_8, VAR_6, VAR_7);

 return 0;
}
