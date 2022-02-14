
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pl330_thread {int ev; struct _pl330_req* req; } ;
struct pl330_dmac {int dummy; } ;
struct _xfer_spec {int ccr; } ;
struct _pl330_req {int mc_bus; int * mc_cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned int,int *,int ) ;
 scalar_t__ FUNC_4 (struct pl330_dmac*,unsigned int,int *,struct _xfer_spec*) ;

__attribute__((used)) static int FUNC_5(struct pl330_dmac *VAR_1, unsigned VAR_2,
        struct pl330_thread *VAR_3, unsigned VAR_4,
        struct _xfer_spec *VAR_5)
{
 struct _pl330_req *VAR_6 = &VAR_3->req[VAR_4];
 u8 *VAR_7 = VAR_6->mc_cpu;
 int VAR_8 = 0;

 FUNC_0(VAR_6->mc_bus);


 VAR_8 += FUNC_2(VAR_2, &VAR_7[VAR_8], VAR_0, VAR_5->ccr);

 VAR_8 += FUNC_4(VAR_1, VAR_2, &VAR_7[VAR_8], VAR_5);


 VAR_8 += FUNC_3(VAR_2, &VAR_7[VAR_8], VAR_3->ev);

 VAR_8 += FUNC_1(VAR_2, &VAR_7[VAR_8]);

 return VAR_8;
}
