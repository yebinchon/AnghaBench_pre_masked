
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sg; int nents; } ;
struct atmel_aes_dev {int total; int buf; int real_dst; int aligned_sg; TYPE_1__ dst; TYPE_1__ src; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct atmel_aes_dev *VAR_3)
{
 if (VAR_3->src.sg == VAR_3->dst.sg) {
  FUNC_1(VAR_3->dev, VAR_3->src.sg, VAR_3->src.nents,
        VAR_0);

  if (VAR_3->src.sg != &VAR_3->aligned_sg)
   FUNC_0(&VAR_3->src);
 } else {
  FUNC_1(VAR_3->dev, VAR_3->dst.sg, VAR_3->dst.nents,
        VAR_1);

  if (VAR_3->dst.sg != &VAR_3->aligned_sg)
   FUNC_0(&VAR_3->dst);

  FUNC_1(VAR_3->dev, VAR_3->src.sg, VAR_3->src.nents,
        VAR_2);

  if (VAR_3->src.sg != &VAR_3->aligned_sg)
   FUNC_0(&VAR_3->src);
 }

 if (VAR_3->dst.sg == &VAR_3->aligned_sg)
  FUNC_2(VAR_3->real_dst, FUNC_3(VAR_3->real_dst),
        VAR_3->buf, VAR_3->total);
}
