
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sseu_dev_info {scalar_t__* eu_mask; int max_eus_per_subslice; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sseu_dev_info const*,int,int) ;

__attribute__((used)) static u16 FUNC_2(const struct sseu_dev_info *VAR_1, int VAR_2,
   int VAR_3)
{
 int VAR_4, VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 u16 VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->max_eus_per_subslice); VAR_4++) {
  VAR_6 |= ((u16)VAR_1->eu_mask[VAR_5 + VAR_4]) <<
   (VAR_4 * VAR_0);
 }

 return VAR_6;
}
