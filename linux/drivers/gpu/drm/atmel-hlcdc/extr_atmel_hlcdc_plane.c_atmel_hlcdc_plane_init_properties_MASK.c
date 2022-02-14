
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct atmel_hlcdc_plane {TYPE_2__ layer; int base; } ;
struct TYPE_3__ {scalar_t__ csc; scalar_t__* pstride; scalar_t__* xstride; } ;
struct atmel_hlcdc_layer_desc {scalar_t__ type; TYPE_1__ layout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int FUNC_3(struct atmel_hlcdc_plane *VAR_6)
{
 const struct atmel_hlcdc_layer_desc *VAR_7 = VAR_6->layer.desc;

 if (VAR_7->type == VAR_1 ||
     VAR_7->type == VAR_0) {
  int VAR_8;

  VAR_8 = FUNC_1(&VAR_6->base);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_7->layout.xstride[0] && VAR_7->layout.pstride[0]) {
  int VAR_9;

  VAR_9 = FUNC_2(&VAR_6->base,
        VAR_2,
        VAR_2 |
        VAR_5 |
        VAR_3 |
        VAR_4);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_7->layout.csc) {




  FUNC_0(&VAR_6->layer,
         VAR_7->layout.csc,
         0x4c900091);
  FUNC_0(&VAR_6->layer,
         VAR_7->layout.csc + 1,
         0x7a5f5090);
  FUNC_0(&VAR_6->layer,
         VAR_7->layout.csc + 2,
         0x40040890);
 }

 return 0;
}
