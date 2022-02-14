
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_info {int dummy; } ;
struct ar934x_nfc {int buf_index; int buf_size; int * buf; scalar_t__ read_id; scalar_t__ swap_dma; } ;


 int FUNC_0 (int) ;
 struct ar934x_nfc* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static u8
FUNC_2(struct mtd_info *VAR_0)
{
 struct ar934x_nfc *VAR_1 = FUNC_1(VAR_0);
 u8 VAR_2;

 FUNC_0(VAR_1->buf_index >= VAR_1->buf_size);

 if (VAR_1->swap_dma || VAR_1->read_id)
  VAR_2 = VAR_1->buf[VAR_1->buf_index ^ 3];
 else
  VAR_2 = VAR_1->buf[VAR_1->buf_index];

 VAR_1->buf_index++;

 return VAR_2;
}
