
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 () ;



 int FUNC_1 (unsigned long,size_t) ;
 int FUNC_2 (unsigned long,size_t) ;
 int FUNC_3 (unsigned long,size_t) ;

__attribute__((used)) static inline void FUNC_4(void *VAR_0, size_t VAR_1,
  enum dma_data_direction VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_2((unsigned long)VAR_0, VAR_1);
  break;

 case 129:
  FUNC_1((unsigned long)VAR_0, VAR_1);
  break;

 case 130:
  FUNC_3((unsigned long)VAR_0, VAR_1);
  break;

 default:
  FUNC_0();
 }
}
