
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int dummy; } ;
struct talitos_edesc {int src_nents; int dst_nents; scalar_t__ buf; scalar_t__ dma_link_tbl; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,scalar_t__,unsigned int,int ) ;
 int FUNC_2 (struct device*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_3 (struct talitos_private*) ;
 int FUNC_4 (struct scatterlist*,unsigned int,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3,
        struct talitos_edesc *VAR_4,
        struct scatterlist *VAR_5,
        struct scatterlist *VAR_6,
        unsigned int VAR_7, unsigned int VAR_8)
{
 struct talitos_private *VAR_9 = FUNC_0(VAR_3);
 bool VAR_10 = FUNC_3(VAR_9);
 unsigned int VAR_11 = VAR_4->src_nents ? : 1;
 unsigned int VAR_12 = VAR_4->dst_nents ? : 1;

 if (VAR_10 && VAR_6 && VAR_12 > 1) {
  FUNC_1(VAR_3, VAR_4->dma_link_tbl + VAR_8,
        VAR_7, VAR_1);
  FUNC_4(VAR_6, VAR_12, VAR_4->buf + VAR_8, VAR_7,
         VAR_8);
 }
 if (VAR_5 != VAR_6) {
  if (VAR_11 == 1 || !VAR_10)
   FUNC_2(VAR_3, VAR_5, VAR_11, VAR_2);

  if (VAR_6 && (VAR_12 == 1 || !VAR_10))
   FUNC_2(VAR_3, VAR_6, VAR_12, VAR_1);
 } else if (VAR_11 == 1 || !VAR_10) {
  FUNC_2(VAR_3, VAR_5, VAR_11, VAR_0);
 }
}
