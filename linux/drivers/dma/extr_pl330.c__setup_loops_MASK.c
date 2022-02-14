
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pl330_xfer {int bytes; } ;
struct pl330_dmac {int dummy; } ;
struct _xfer_spec {int ccr; TYPE_1__* desc; } ;
struct TYPE_2__ {struct pl330_xfer px; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct pl330_dmac*,unsigned int,int *,struct _xfer_spec const*,int) ;
 scalar_t__ FUNC_4 (struct pl330_dmac*,unsigned int,int *,unsigned long*,struct _xfer_spec const*) ;

__attribute__((used)) static inline int FUNC_5(struct pl330_dmac *VAR_0,
          unsigned VAR_1, u8 VAR_2[],
          const struct _xfer_spec *VAR_3)
{
 struct pl330_xfer *VAR_4 = &VAR_3->desc->px;
 u32 VAR_5 = VAR_3->ccr;
 unsigned long VAR_6, VAR_7 = FUNC_2(VAR_4->bytes, VAR_5);
 int VAR_8 = (VAR_4->bytes - FUNC_1(VAR_7, VAR_5)) /
  FUNC_0(VAR_5);
 int VAR_9 = 0;

 while (VAR_7) {
  VAR_6 = VAR_7;
  VAR_9 += FUNC_4(VAR_0, VAR_1, &VAR_2[VAR_9], &VAR_6, VAR_3);
  VAR_7 -= VAR_6;
 }
 VAR_9 += FUNC_3(VAR_0, VAR_1, &VAR_2[VAR_9], VAR_3, VAR_8);

 return VAR_9;
}
