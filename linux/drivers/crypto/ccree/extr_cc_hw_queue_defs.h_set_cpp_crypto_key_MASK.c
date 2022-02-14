
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cc_hw_desc {int * word; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_1(struct cc_hw_desc *VAR_5, u8 VAR_6)
{
 VAR_5->word[0] |= VAR_0;

 VAR_5->word[1] |= FUNC_0(VAR_2, VAR_1);
 VAR_5->word[1] |= FUNC_0(VAR_3, 1);

 VAR_5->word[4] |= FUNC_0(VAR_4, VAR_6);
}
