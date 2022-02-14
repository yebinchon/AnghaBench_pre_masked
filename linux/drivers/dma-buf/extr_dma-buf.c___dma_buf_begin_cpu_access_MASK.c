
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv {int dummy; } ;
struct dma_buf {struct dma_resv* resv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct dma_resv*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dma_buf *VAR_3,
          enum dma_data_direction VAR_4)
{
 bool VAR_5 = (VAR_4 == VAR_0 ||
        VAR_4 == VAR_1);
 struct dma_resv *VAR_6 = VAR_3->resv;
 long VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_5, 1,
        VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
