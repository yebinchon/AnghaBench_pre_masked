
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct hifn_dma {int cmdu; } ;
struct hifn_device {int dmareg; scalar_t__ desc_virt; } ;
struct hifn_crypt_command {scalar_t__ reserved; scalar_t__ header_skip; void* masks; void* source_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hifn_device*,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hifn_device *VAR_4,
  u8 *VAR_5, unsigned VAR_6, unsigned VAR_7,
  u8 *VAR_8, int VAR_9, u8 *VAR_10, int VAR_11, u16 VAR_12)
{
 struct hifn_dma *VAR_13 = (struct hifn_dma *)VAR_4->desc_virt;
 struct hifn_crypt_command *VAR_14;
 u8 *VAR_15 = VAR_5;
 u16 VAR_16;

 VAR_14 = (struct hifn_crypt_command *)VAR_15;

 VAR_14->source_count = FUNC_0(VAR_6 & 0xffff);
 VAR_6 >>= 16;
 VAR_14->masks = FUNC_0(VAR_12 |
   ((VAR_6 << VAR_2) &
    VAR_1));
 VAR_14->header_skip = 0;
 VAR_14->reserved = 0;

 VAR_15 += sizeof(struct hifn_crypt_command);

 VAR_13->cmdu++;
 if (VAR_13->cmdu > 1) {
  VAR_4->dmareg |= VAR_3;
  FUNC_1(VAR_4, VAR_0, VAR_4->dmareg);
 }

 if (VAR_9) {
  FUNC_2(VAR_15, VAR_8, VAR_9);
  VAR_15 += VAR_9;
 }
 if (VAR_11) {
  FUNC_2(VAR_15, VAR_10, VAR_11);
  VAR_15 += VAR_11;
 }

 VAR_16 = VAR_15 - VAR_5;

 return VAR_16;
}
