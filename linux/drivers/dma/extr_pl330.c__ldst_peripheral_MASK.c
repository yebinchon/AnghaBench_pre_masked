
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pl330_dmac {int quirks; } ;
struct _xfer_spec {TYPE_1__* desc; } ;
typedef enum pl330_cond { ____Placeholder_pl330_cond } pl330_cond ;
struct TYPE_2__ {int peri; int rqtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int *,int ) ;
 scalar_t__ FUNC_1 (unsigned int,int *,int,int ) ;
 scalar_t__ FUNC_2 (unsigned int,int *,int,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned int,int *,int,int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct pl330_dmac *VAR_2,
     unsigned VAR_3, u8 VAR_4[],
     const struct _xfer_spec *VAR_5, int VAR_6,
     enum pl330_cond VAR_7)
{
 int VAR_8 = 0;

 if (VAR_2->quirks & VAR_1)
  VAR_7 = VAR_0;





 if (!(VAR_2->quirks & VAR_1))
  VAR_8 += FUNC_0(VAR_3, &VAR_4[VAR_8], VAR_5->desc->peri);
 while (VAR_6--) {
  VAR_8 += FUNC_1(VAR_3, &VAR_4[VAR_8], VAR_7, VAR_5->desc->peri);
  VAR_8 += FUNC_2(VAR_3, &VAR_4[VAR_8], VAR_7, VAR_5->desc->rqtype,
   VAR_5->desc->peri);
  VAR_8 += FUNC_3(VAR_3, &VAR_4[VAR_8], VAR_7, VAR_5->desc->rqtype,
   VAR_5->desc->peri);
 }

 return VAR_8;
}
