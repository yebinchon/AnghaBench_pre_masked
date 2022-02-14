
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pl330_dmac {int dummy; } ;
struct _xfer_spec {TYPE_1__* desc; int ccr; } ;
typedef enum pl330_cond { ____Placeholder_pl330_cond } pl330_cond ;
struct TYPE_2__ {int rqtype; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int *,struct _xfer_spec const*,int) ;
 int FUNC_3 (struct pl330_dmac*,unsigned int,int *,struct _xfer_spec const*,int,int) ;

__attribute__((used)) static int FUNC_4(struct pl330_dmac *VAR_2, unsigned VAR_3, u8 VAR_4[],
  const struct _xfer_spec *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 enum pl330_cond VAR_8 = FUNC_0(VAR_5->ccr) > 1 ? VAR_0 : VAR_1;

 switch (VAR_5->desc->rqtype) {
 case 129:

 case 130:
  VAR_7 += FUNC_3(VAR_2, VAR_3, &VAR_4[VAR_7], VAR_5, VAR_6,
   VAR_8);
  break;

 case 128:
  VAR_7 += FUNC_2(VAR_3, &VAR_4[VAR_7], VAR_5, VAR_6);
  break;

 default:

  FUNC_1(1);
  break;
 }

 return VAR_7;
}
