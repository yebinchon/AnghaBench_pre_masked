
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pl330_config {int periph_id; } ;
struct _xfer_spec {TYPE_2__* desc; } ;
struct TYPE_3__ {struct pl330_config* pcfg; } ;
struct TYPE_4__ {TYPE_1__ rqcfg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int *,int ) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (unsigned int,int *,int ) ;
 scalar_t__ FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(unsigned VAR_2, u8 VAR_3[],
  const struct _xfer_spec *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct pl330_config *VAR_7 = VAR_4->desc->rqcfg.pcfg;


 if (FUNC_4(VAR_7->periph_id) >= VAR_1) {
  while (VAR_5--) {
   VAR_6 += FUNC_0(VAR_2, &VAR_3[VAR_6], VAR_0);
   VAR_6 += FUNC_2(VAR_2, &VAR_3[VAR_6], VAR_0);
  }
 } else {
  while (VAR_5--) {
   VAR_6 += FUNC_0(VAR_2, &VAR_3[VAR_6], VAR_0);
   VAR_6 += FUNC_1(VAR_2, &VAR_3[VAR_6]);
   VAR_6 += FUNC_2(VAR_2, &VAR_3[VAR_6], VAR_0);
   VAR_6 += FUNC_3(VAR_2, &VAR_3[VAR_6]);
  }
 }

 return VAR_6;
}
