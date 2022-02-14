
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_private {int num_channels; int last_chan; } ;
struct talitos_ctx {int ch; int desc_hdr_template; int dev; } ;
struct TYPE_2__ {int desc_hdr_template; } ;
struct talitos_crypto_alg {TYPE_1__ algt; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct talitos_private* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct talitos_ctx *VAR_1,
          struct talitos_crypto_alg *VAR_2)
{
 struct talitos_private *VAR_3;


 VAR_1->dev = VAR_2->dev;


 VAR_3 = FUNC_1(VAR_1->dev);
 VAR_1->ch = FUNC_0(&VAR_3->last_chan) &
    (VAR_3->num_channels - 1);


 VAR_1->desc_hdr_template = VAR_2->algt.desc_hdr_template;


 VAR_1->desc_hdr_template |= VAR_0;

 return 0;
}
