
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_hw_desc {int* word; } ;
typedef enum cc_hw_crypto_key { ____Placeholder_cc_hw_crypto_key } cc_hw_crypto_key ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_1(struct cc_hw_desc *VAR_4,
         enum cc_hw_crypto_key VAR_5)
{
 VAR_4->word[4] |= FUNC_0(VAR_3,
         (VAR_5 & VAR_0)) |
   FUNC_0(VAR_2,
       (VAR_5 >> VAR_1));
}
