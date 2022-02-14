
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_buffer {int dummy; } ;
struct fw_card {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct fw_iso_buffer*,int) ;
 int FUNC_1 (struct fw_iso_buffer*,struct fw_card*) ;
 int FUNC_2 (struct fw_iso_buffer*,struct fw_card*,int) ;

int FUNC_3(struct fw_iso_buffer *VAR_0, struct fw_card *VAR_1,
         int VAR_2, enum dma_data_direction VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_0, VAR_1);

 return VAR_4;
}
