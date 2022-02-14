
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct sk_buff* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static inline struct sk_buff* FUNC_2(unsigned int VAR_2)
{
    struct sk_buff *VAR_3;


    VAR_2 = VAR_1;
    VAR_2 = (VAR_2 + VAR_0 - 1) & ~(VAR_0 - 1);
    VAR_3 = FUNC_0(VAR_2 + VAR_0);

    if ( VAR_3 != ((void*)0) )
        FUNC_1(VAR_3, ~((unsigned int)VAR_3->data + (VAR_0 - 1)) & (VAR_0 - 1));
    return VAR_3;
}
