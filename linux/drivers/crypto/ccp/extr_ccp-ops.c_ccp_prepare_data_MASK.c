
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {unsigned int offset; unsigned int length; void* address; } ;
struct TYPE_16__ {TYPE_6__ dma; } ;
struct TYPE_17__ {TYPE_7__ u; } ;
struct TYPE_12__ {unsigned int offset; unsigned int length; void* address; } ;
struct TYPE_13__ {TYPE_3__ dma; } ;
struct TYPE_14__ {TYPE_4__ u; } ;
struct ccp_op {int soc; TYPE_8__ src; TYPE_5__ dst; } ;
struct TYPE_18__ {unsigned int sg_used; int sg; int bytes_left; } ;
struct TYPE_10__ {void* address; } ;
struct TYPE_11__ {TYPE_1__ dma; } ;
struct ccp_data {TYPE_9__ sg_wa; TYPE_2__ dm_wa; } ;


 int FUNC_0 (struct ccp_data*) ;
 int FUNC_1 (TYPE_9__*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int ,int ,unsigned int) ;
 void* FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(struct ccp_data *VAR_1, struct ccp_data *VAR_2,
        struct ccp_op *VAR_3, unsigned int VAR_4,
        bool VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;






 VAR_6 = FUNC_6(VAR_1->sg_wa.sg) - VAR_1->sg_wa.sg_used;
 VAR_6 = FUNC_4(VAR_0, VAR_1->sg_wa.bytes_left, VAR_6);

 if (VAR_2) {
  VAR_7 = FUNC_6(VAR_2->sg_wa.sg) - VAR_2->sg_wa.sg_used;
  VAR_7 = FUNC_4(VAR_0, VAR_1->sg_wa.bytes_left, VAR_7);
  VAR_8 = FUNC_3(VAR_6, VAR_7);
 } else {
  VAR_8 = VAR_6;
 }





 VAR_8 = FUNC_2(VAR_8, VAR_4);


 VAR_3->soc = 0;

 if (VAR_6 < VAR_4) {



  int VAR_9 = FUNC_0(VAR_1);

  VAR_3->soc = 1;
  VAR_3->src.u.dma.address = VAR_1->dm_wa.dma.address;
  VAR_3->src.u.dma.offset = 0;
  VAR_3->src.u.dma.length = (VAR_5) ? VAR_4 : VAR_9;
 } else {



  VAR_3->src.u.dma.address = FUNC_5(VAR_1->sg_wa.sg);
  VAR_3->src.u.dma.offset = VAR_1->sg_wa.sg_used;
  VAR_3->src.u.dma.length = VAR_8 & ~(VAR_4 - 1);

  FUNC_1(&VAR_1->sg_wa, VAR_3->src.u.dma.length);
 }

 if (VAR_2) {
  if (VAR_7 < VAR_4) {




   VAR_3->soc = 1;
   VAR_3->dst.u.dma.address = VAR_2->dm_wa.dma.address;
   VAR_3->dst.u.dma.offset = 0;
   VAR_3->dst.u.dma.length = VAR_3->src.u.dma.length;
  } else {



   VAR_3->dst.u.dma.address = FUNC_5(VAR_2->sg_wa.sg);
   VAR_3->dst.u.dma.offset = VAR_2->sg_wa.sg_used;
   VAR_3->dst.u.dma.length = VAR_3->src.u.dma.length;
  }
 }
}
