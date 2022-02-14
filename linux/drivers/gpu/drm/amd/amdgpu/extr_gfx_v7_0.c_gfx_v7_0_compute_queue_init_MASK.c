
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cik_mqd {int dummy; } ;
struct amdgpu_ring {int mqd_obj; int queue; int pipe; int me; } ;
struct TYPE_2__ {struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {int srbm_mutex; int dev; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct amdgpu_device*,struct cik_mqd*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*,struct cik_mqd*,int ,struct amdgpu_ring*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_2, int VAR_3)
{
 int VAR_4;
 u64 VAR_5;
 struct cik_mqd *VAR_6;
 struct amdgpu_ring *VAR_7 = &VAR_2->gfx.compute_ring[VAR_3];

 VAR_4 = FUNC_0(VAR_2, sizeof(struct cik_mqd), VAR_1,
          VAR_0, &VAR_7->mqd_obj,
          &VAR_5, (void **)&VAR_6);
 if (VAR_4) {
  FUNC_4(VAR_2->dev, "(%d) create MQD bo failed\n", VAR_4);
  return VAR_4;
 }

 FUNC_8(&VAR_2->srbm_mutex);
 FUNC_3(VAR_2, VAR_7->me, VAR_7->pipe, VAR_7->queue, 0);

 FUNC_7(VAR_2, VAR_6, VAR_5, VAR_7);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2, VAR_6);

 FUNC_3(VAR_2, 0, 0, 0, 0);
 FUNC_9(&VAR_2->srbm_mutex);

 FUNC_1(VAR_7->mqd_obj);
 FUNC_2(VAR_7->mqd_obj);
 return 0;
}
