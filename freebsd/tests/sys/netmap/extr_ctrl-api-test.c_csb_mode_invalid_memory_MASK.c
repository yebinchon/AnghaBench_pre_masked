
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nro_reqtype; } ;
struct nmreq_opt_csb {uintptr_t csb_atok; uintptr_t csb_ktoa; TYPE_1__ nro_opt; } ;
struct TestContext {int nr_flags; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct TestContext*) ;
 int FUNC_1 (struct nmreq_opt_csb*,int ,int) ;
 int FUNC_2 (struct TestContext*) ;
 int FUNC_3 (TYPE_1__*,struct TestContext*) ;

__attribute__((used)) static int
FUNC_4(struct TestContext *VAR_2)
{
 struct nmreq_opt_csb VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.nro_opt.nro_reqtype = VAR_0;
 VAR_3.csb_atok = (uintptr_t)0x10;
 VAR_3.csb_ktoa = (uintptr_t)0x800;
 FUNC_3(&VAR_3.nro_opt, VAR_2);

 VAR_2->nr_flags = VAR_1;
 VAR_4 = FUNC_2(VAR_2);
 FUNC_0(VAR_2);

 return (VAR_4 < 0) ? 0 : -1;
}
