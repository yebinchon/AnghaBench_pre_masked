
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rlc_toc_buf; int rlc_toc_gpu_addr; int rlc_toc_bo; } ;
struct TYPE_8__ {TYPE_2__ rlc; } ;
struct TYPE_6__ {int toc_bin_size; int toc_start_addr; } ;
struct amdgpu_device {TYPE_3__ gfx; TYPE_1__ psp; int dev; } ;
struct TYPE_10__ {size_t id; int offset; int size; } ;
struct TYPE_9__ {size_t id; int offset; int size; } ;
typedef TYPE_4__ RLC_TABLE_OF_CONTENT ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int ,int *,int *,void**) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 TYPE_5__* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_7)
{
 int VAR_8;
 RLC_TABLE_OF_CONTENT *VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_7->psp.toc_bin_size, VAR_5,
     VAR_0,
     &VAR_7->gfx.rlc.rlc_toc_bo,
     &VAR_7->gfx.rlc.rlc_toc_gpu_addr,
     (void **)&VAR_7->gfx.rlc.rlc_toc_buf);
 if (VAR_8) {
  FUNC_2(VAR_7->dev, "(%d) failed to create rlc toc bo\n", VAR_8);
  return VAR_8;
 }


 FUNC_3(VAR_7->gfx.rlc.rlc_toc_buf, VAR_7->psp.toc_start_addr, VAR_7->psp.toc_bin_size);

 VAR_9 = (RLC_TABLE_OF_CONTENT *)VAR_7->gfx.rlc.rlc_toc_buf;
 while (VAR_9 && (VAR_9->id > VAR_3) &&
  (VAR_9->id < VAR_4)) {
  if ((VAR_9->id >= VAR_1) &&
      (VAR_9->id <= VAR_2)) {

   VAR_9->offset = FUNC_0(VAR_9->offset * 4, VAR_5);
  }

  VAR_6[VAR_9->id].id = VAR_9->id;
  VAR_6[VAR_9->id].offset = VAR_9->offset * 4;
  VAR_6[VAR_9->id].size = VAR_9->size * 4;

  VAR_9++;
 };

 return 0;
}
