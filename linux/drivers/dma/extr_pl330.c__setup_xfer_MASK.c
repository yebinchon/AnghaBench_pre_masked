
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pl330_xfer {int dst_addr; int src_addr; } ;
struct pl330_dmac {int dummy; } ;
struct _xfer_spec {TYPE_1__* desc; } ;
struct TYPE_2__ {struct pl330_xfer px; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct pl330_dmac*,unsigned int,int *,struct _xfer_spec const*) ;

__attribute__((used)) static inline int FUNC_2(struct pl330_dmac *VAR_2,
         unsigned VAR_3, u8 VAR_4[],
         const struct _xfer_spec *VAR_5)
{
 struct pl330_xfer *VAR_6 = &VAR_5->desc->px;
 int VAR_7 = 0;


 VAR_7 += FUNC_0(VAR_3, &VAR_4[VAR_7], VAR_1, VAR_6->src_addr);

 VAR_7 += FUNC_0(VAR_3, &VAR_4[VAR_7], VAR_0, VAR_6->dst_addr);


 VAR_7 += FUNC_1(VAR_2, VAR_3, &VAR_4[VAR_7], VAR_5);

 return VAR_7;
}
