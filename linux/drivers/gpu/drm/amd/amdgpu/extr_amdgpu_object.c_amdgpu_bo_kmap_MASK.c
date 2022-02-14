
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {int num_pages; TYPE_1__ base; } ;
struct amdgpu_bo {int flags; int kmap; TYPE_2__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct amdgpu_bo*) ;
 long FUNC_1 (int ,int,int,int ) ;
 long FUNC_2 (TYPE_2__*,int ,int ,int *) ;

int FUNC_3(struct amdgpu_bo *VAR_3, void **VAR_4)
{
 void *VAR_5;
 long VAR_6;

 if (VAR_3->flags & VAR_0)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  if (VAR_4)
   *VAR_4 = VAR_5;
  return 0;
 }

 VAR_6 = FUNC_1(VAR_3->tbo.base.resv, 0, 0,
      VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(&VAR_3->tbo, 0, VAR_3->tbo.num_pages, &VAR_3->kmap);
 if (VAR_6)
  return VAR_6;

 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_3);

 return 0;
}
