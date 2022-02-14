
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct idmac_tx_desc {struct scatterlist* sg; } ;
struct idmac_channel {struct scatterlist** sg; } ;


 int FUNC_0 (struct idmac_channel*,struct idmac_tx_desc*,struct scatterlist*,int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct idmac_channel *VAR_0,
          struct idmac_tx_desc *VAR_1)
{
 struct scatterlist *VAR_2;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0, VAR_2 = VAR_1->sg; VAR_3 < 2 && VAR_2; VAR_3++) {
  if (!VAR_0->sg[VAR_3]) {
   VAR_0->sg[VAR_3] = VAR_2;

   VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   if (VAR_4 < 0)
    return VAR_4;

   VAR_2 = FUNC_1(VAR_2);
  }
 }

 return VAR_4;
}
