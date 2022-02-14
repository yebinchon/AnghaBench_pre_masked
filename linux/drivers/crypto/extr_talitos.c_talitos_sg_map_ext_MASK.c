
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int dummy; } ;
struct talitos_private {int dummy; } ;
struct talitos_edesc {scalar_t__ dma_link_tbl; int * link_tbl; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct talitos_ptr*,int *,int) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (struct talitos_private*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int,unsigned int,unsigned int,int,int *) ;
 int FUNC_5 (struct talitos_ptr*,scalar_t__,unsigned int,int) ;
 int FUNC_6 (struct talitos_ptr*,int ,int) ;
 int FUNC_7 (struct talitos_ptr*,int,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1, struct scatterlist *VAR_2,
         unsigned int VAR_3, struct talitos_edesc *VAR_4,
         struct talitos_ptr *VAR_5, int VAR_6,
         unsigned int VAR_7, int VAR_8, int VAR_9,
         bool VAR_10)
{
 struct talitos_private *VAR_11 = FUNC_1(VAR_1);
 bool VAR_12 = FUNC_2(VAR_11);

 if (!VAR_2) {
  FUNC_5(VAR_5, 0, 0, VAR_12);
  return 1;
 }
 FUNC_7(VAR_5, VAR_9, VAR_12);
 if (VAR_6 == 1 && !VAR_10) {
  FUNC_5(VAR_5, FUNC_3(VAR_2) + VAR_7, VAR_3, VAR_12);
  return VAR_6;
 }
 if (VAR_12) {
  FUNC_5(VAR_5, VAR_4->dma_link_tbl + VAR_7, VAR_3, VAR_12);
  return VAR_6;
 }
 VAR_6 = FUNC_4(VAR_2, VAR_6, VAR_7, VAR_3, VAR_9,
      &VAR_4->link_tbl[VAR_8]);
 if (VAR_6 == 1 && !VAR_10) {

  FUNC_0(VAR_5, &VAR_4->link_tbl[VAR_8], VAR_12);
  return VAR_6;
 }
 FUNC_5(VAR_5, VAR_4->dma_link_tbl +
       VAR_8 * sizeof(struct talitos_ptr), VAR_3, VAR_12);
 FUNC_6(VAR_5, VAR_0, VAR_12);

 return VAR_6;
}
