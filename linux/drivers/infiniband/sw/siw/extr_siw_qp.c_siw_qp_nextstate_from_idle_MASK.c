
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct siw_qp_attrs {int state; int flags; int sk; int orq_size; int irq_size; } ;
struct TYPE_6__ {int state; int irq_size; int orq_size; int sk; } ;
struct TYPE_5__ {int* ddp_msn; } ;
struct TYPE_4__ {int * ddp_msn; } ;
struct siw_qp {int * cep; TYPE_3__ attrs; TYPE_2__ rx_stream; TYPE_1__ tx_ctx; } ;
typedef enum siw_qp_attr_mask { ____Placeholder_siw_qp_attr_mask } siw_qp_attr_mask ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct siw_qp*,char*,...) ;
 int FUNC_2 (struct siw_qp*) ;
 int FUNC_3 (struct siw_qp*,int ,int ) ;
 int FUNC_4 (struct siw_qp*) ;

__attribute__((used)) static int FUNC_5(struct siw_qp *VAR_7,
          struct siw_qp_attrs *VAR_8,
          enum siw_qp_attr_mask VAR_9)
{
 int VAR_10 = 0;

 switch (VAR_8->state) {
 case 128:
  if (VAR_8->flags & VAR_4) {
   VAR_10 = FUNC_2(VAR_7);
   if (VAR_10)
    break;
  }
  if (!(VAR_9 & VAR_5)) {
   FUNC_1(VAR_7, "no socket\n");
   VAR_10 = -VAR_0;
   break;
  }
  if (!(VAR_9 & VAR_6)) {
   FUNC_1(VAR_7, "no MPA\n");
   VAR_10 = -VAR_0;
   break;
  }



  VAR_7->tx_ctx.ddp_msn[VAR_2] = 0;
  VAR_7->tx_ctx.ddp_msn[VAR_1] = 0;
  VAR_7->tx_ctx.ddp_msn[VAR_3] = 0;




  VAR_7->rx_stream.ddp_msn[VAR_2] = 1;
  VAR_7->rx_stream.ddp_msn[VAR_1] = 1;
  VAR_7->rx_stream.ddp_msn[VAR_3] = 1;





  VAR_10 = FUNC_3(VAR_7, VAR_8->irq_size,
           VAR_8->orq_size);
  if (VAR_10)
   break;

  VAR_7->attrs.sk = VAR_8->sk;
  VAR_7->attrs.state = 128;

  FUNC_1(VAR_7, "enter RTS: crc=%s, ord=%u, ird=%u\n",
      VAR_8->flags & VAR_4 ? "y" : "n",
      VAR_7->attrs.orq_size, VAR_7->attrs.irq_size);
  break;

 case 129:
  FUNC_4(VAR_7);
  VAR_7->attrs.state = 129;
  if (VAR_7->cep) {
   FUNC_0(VAR_7->cep);
   VAR_7->cep = ((void*)0);
  }
  break;

 default:
  break;
 }
 return VAR_10;
}
