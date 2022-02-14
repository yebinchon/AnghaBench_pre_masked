
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct hidma_tre {int err_code; } ;
struct hidma_lldev {int lock; struct hidma_tre* trepool; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

enum dma_status FUNC_2(struct hidma_lldev *VAR_5, u32 VAR_6)
{
 enum dma_status VAR_7 = VAR_1;
 struct hidma_tre *VAR_8;
 unsigned long VAR_9;
 u8 VAR_10;

 FUNC_0(&VAR_5->lock, VAR_9);

 VAR_8 = &VAR_5->trepool[VAR_6];
 VAR_10 = VAR_8->err_code;

 if (VAR_10 & VAR_3)
  VAR_7 = VAR_0;
 else if (VAR_10 & VAR_4)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;
 FUNC_1(&VAR_5->lock, VAR_9);

 return VAR_7;
}
