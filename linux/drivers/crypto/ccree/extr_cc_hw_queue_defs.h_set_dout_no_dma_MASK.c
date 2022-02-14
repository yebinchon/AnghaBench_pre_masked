
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cc_hw_desc {int* word; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct cc_hw_desc *VAR_2, u32 VAR_3,
       u32 VAR_4, bool VAR_5)
{
 VAR_2->word[2] = VAR_3;
 VAR_2->word[3] |= FUNC_0(VAR_1, VAR_4) |
   FUNC_0(VAR_0, VAR_5);
}
