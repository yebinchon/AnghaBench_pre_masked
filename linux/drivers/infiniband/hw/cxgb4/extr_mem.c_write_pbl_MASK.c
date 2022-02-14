
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct c4iw_wr_wait {int dummy; } ;
struct TYPE_6__ {TYPE_2__* vr; } ;
struct c4iw_rdev {TYPE_3__ lldi; } ;
typedef int __be64 ;
struct TYPE_4__ {int start; } ;
struct TYPE_5__ {TYPE_1__ pbl; } ;


 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (struct c4iw_rdev*,int,int,int *,int *,struct c4iw_wr_wait*) ;

__attribute__((used)) static int FUNC_2(struct c4iw_rdev *VAR_0, __be64 *VAR_1,
       u32 VAR_2, u32 VAR_3, struct c4iw_wr_wait *VAR_4)
{
 int VAR_5;

 FUNC_0("*pdb_addr 0x%x, pbl_base 0x%x, pbl_size %d\n",
   VAR_2, VAR_0->lldi.vr->pbl.start,
   VAR_3);

 VAR_5 = FUNC_1(VAR_0, VAR_2 >> 5, VAR_3 << 3, VAR_1, ((void*)0),
    VAR_4);
 return VAR_5;
}
