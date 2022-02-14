
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct stub_chip {int bank_sel; scalar_t__ bank_start; scalar_t__ bank_end; scalar_t__ bank_words; int bank_size; int * words; } ;



__attribute__((used)) static u16 *FUNC_0(struct stub_chip *VAR_0, u8 VAR_1)
{
 if (VAR_0->bank_sel &&
     VAR_1 >= VAR_0->bank_start && VAR_1 <= VAR_0->bank_end)
  return VAR_0->bank_words +
         (VAR_0->bank_sel - 1) * VAR_0->bank_size +
         VAR_1 - VAR_0->bank_start;
 else
  return VAR_0->words + VAR_1;
}
