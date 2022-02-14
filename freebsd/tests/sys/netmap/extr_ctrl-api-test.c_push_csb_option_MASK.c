
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int nro_reqtype; } ;
struct nmreq_opt_csb {uintptr_t csb_atok; uintptr_t csb_ktoa; TYPE_1__ nro_opt; } ;
struct nm_csb_ktoa {int dummy; } ;
struct nm_csb_atok {int dummy; } ;
struct TestContext {scalar_t__ csb; int nr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nmreq_opt_csb*,int ,int) ;
 int FUNC_4 (struct TestContext*) ;
 int FUNC_5 (struct TestContext*) ;
 int FUNC_6 (scalar_t__*,int,size_t) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*,struct TestContext*) ;

__attribute__((used)) static int
FUNC_9(struct TestContext *VAR_3, struct nmreq_opt_csb *VAR_4)
{
 size_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_3->nr_flags |= VAR_2;


 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7 != 0) {
  return VAR_7;
 }
 VAR_6 = FUNC_4(VAR_3);

 VAR_5 = (sizeof(struct nm_csb_atok) + sizeof(struct nm_csb_ktoa)) *
            VAR_6;
 FUNC_0(VAR_5 > 0);
 if (VAR_3->csb) {
  FUNC_2(VAR_3->csb);
 }
 VAR_7 = FUNC_6(&VAR_3->csb, sizeof(struct nm_csb_atok), VAR_5);
 if (VAR_7 != 0) {
  FUNC_7("Failed to allocate CSB memory\n");
  FUNC_1(VAR_0);
 }

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->nro_opt.nro_reqtype = VAR_1;
 VAR_4->csb_atok = (uintptr_t)VAR_3->csb;
 VAR_4->csb_ktoa = (uintptr_t)(((uint8_t *)VAR_3->csb) +
                                    sizeof(struct nm_csb_atok) * VAR_6);

 FUNC_7("Pushing option NETMAP_REQ_OPT_CSB\n");
 FUNC_8(&VAR_4->nro_opt, VAR_3);

 return 0;
}
