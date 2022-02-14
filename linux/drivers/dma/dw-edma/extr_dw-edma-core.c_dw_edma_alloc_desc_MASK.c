
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_edma_desc {struct dw_edma_chan* chan; } ;
struct dw_edma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_edma_desc*) ;
 int FUNC_1 (struct dw_edma_desc*) ;
 struct dw_edma_desc* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct dw_edma_desc *FUNC_4(struct dw_edma_chan *VAR_1)
{
 struct dw_edma_desc *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (FUNC_3(!VAR_2))
  return ((void*)0);

 VAR_2->chan = VAR_1;
 if (!FUNC_0(VAR_2)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
