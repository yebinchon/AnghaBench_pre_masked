
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xor_cb {TYPE_2__* ops; int cblal; int cblah; int cbtal; int cbtah; int cbs; int cbbc; int cbc; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct dma_cdb {int sg3l; int sg3u; int sg2l; int sg2u; int sg1l; int sg1u; int cnt; int opc; int attr; } ;
struct TYPE_4__ {int l; int h; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct ppc440spe_adma_chan *VAR_0, void *VAR_1)
{
 struct dma_cdb *VAR_2;
 struct xor_cb *VAR_3;
 int VAR_4;

 switch (VAR_0->device->id) {
 case 0:
 case 1:
  VAR_2 = VAR_1;

  FUNC_1("CDB at %p [%d]:\n"
   "\t attr 0x%02x opc 0x%02x cnt 0x%08x\n"
   "\t sg1u 0x%08x sg1l 0x%08x\n"
   "\t sg2u 0x%08x sg2l 0x%08x\n"
   "\t sg3u 0x%08x sg3l 0x%08x\n",
   VAR_2, VAR_0->device->id,
   VAR_2->attr, VAR_2->opc, FUNC_0(VAR_2->cnt),
   FUNC_0(VAR_2->sg1u), FUNC_0(VAR_2->sg1l),
   FUNC_0(VAR_2->sg2u), FUNC_0(VAR_2->sg2l),
   FUNC_0(VAR_2->sg3u), FUNC_0(VAR_2->sg3l)
  );
  break;
 case 2:
  VAR_3 = VAR_1;

  FUNC_1("CB at %p [%d]:\n"
   "\t cbc 0x%08x cbbc 0x%08x cbs 0x%08x\n"
   "\t cbtah 0x%08x cbtal 0x%08x\n"
   "\t cblah 0x%08x cblal 0x%08x\n",
   VAR_3, VAR_0->device->id,
   VAR_3->cbc, VAR_3->cbbc, VAR_3->cbs,
   VAR_3->cbtah, VAR_3->cbtal,
   VAR_3->cblah, VAR_3->cblal);
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
   if (VAR_4 && !VAR_3->ops[VAR_4].h && !VAR_3->ops[VAR_4].l)
    continue;
   FUNC_1("\t ops[%2d]: h 0x%08x l 0x%08x\n",
    VAR_4, VAR_3->ops[VAR_4].h, VAR_3->ops[VAR_4].l);
  }
  break;
 }
}
