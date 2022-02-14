
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pl330_dmac {int dummy; } ;
struct _xfer_spec {int ccr; TYPE_1__* desc; } ;
struct TYPE_2__ {int rqtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int *,int ,int) ;
 int FUNC_2 (unsigned int,int *,struct _xfer_spec const*,int) ;
 int FUNC_3 (struct pl330_dmac*,unsigned int,int *,struct _xfer_spec const*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct pl330_dmac *VAR_4, unsigned int VAR_5, u8 VAR_6[],
  const struct _xfer_spec *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;

 if (VAR_8 == 0)
  return VAR_9;

 switch (VAR_7->desc->rqtype) {
 case 129:

 case 130:
  VAR_9 += FUNC_3(VAR_4, VAR_5, &VAR_6[VAR_9], VAR_7,
   VAR_8, VAR_3);
  break;

 case 128:
  VAR_10 = VAR_7->ccr;
  VAR_10 &= ~((0xf << VAR_2) |
   (0xf << VAR_1));
  VAR_10 |= (((VAR_8 - 1) & 0xf) <<
   VAR_2);
  VAR_10 |= (((VAR_8 - 1) & 0xf) <<
   VAR_1);
  VAR_9 += FUNC_1(VAR_5, &VAR_6[VAR_9], VAR_0, VAR_10);
  VAR_9 += FUNC_2(VAR_5, &VAR_6[VAR_9], VAR_7, 1);
  break;

 default:

  FUNC_0(1);
  break;
 }

 return VAR_9;
}
