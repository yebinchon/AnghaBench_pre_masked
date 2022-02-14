
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sseu_dev_info {int* eu_mask; int max_eus_per_subslice; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sseu_dev_info*,int,int) ;

__attribute__((used)) static void FUNC_2(struct sseu_dev_info *VAR_1, int VAR_2, int VAR_3,
    u16 VAR_4)
{
 int VAR_5, VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1->max_eus_per_subslice); VAR_5++) {
  VAR_1->eu_mask[VAR_6 + VAR_5] =
   (VAR_4 >> (VAR_0 * VAR_5)) & 0xff;
 }
}
