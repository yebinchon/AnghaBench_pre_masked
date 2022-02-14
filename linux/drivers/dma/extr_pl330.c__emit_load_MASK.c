
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum pl330_cond { ____Placeholder_pl330_cond } pl330_cond ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int *,int) ;
 int FUNC_2 (unsigned int,int *,int,int ) ;

__attribute__((used)) static u32 FUNC_3(unsigned int VAR_3, u8 VAR_4[],
 enum pl330_cond VAR_5, enum dma_transfer_direction VAR_6,
 u8 VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_6) {
 case 128:

 case 129:
  VAR_8 += FUNC_1(VAR_3, &VAR_4[VAR_8], VAR_5);
  break;

 case 130:
  if (VAR_5 == VAR_0) {
   VAR_8 += FUNC_2(VAR_3, &VAR_4[VAR_8], VAR_2,
    VAR_7);
   VAR_8 += FUNC_2(VAR_3, &VAR_4[VAR_8], VAR_1,
    VAR_7);
  } else {
   VAR_8 += FUNC_2(VAR_3, &VAR_4[VAR_8], VAR_5,
    VAR_7);
  }
  break;

 default:

  FUNC_0(1);
  break;
 }

 return VAR_8;
}
