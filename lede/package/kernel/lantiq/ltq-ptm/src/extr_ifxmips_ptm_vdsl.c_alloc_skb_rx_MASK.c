
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; scalar_t__ end; } ;
typedef int skb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static inline struct sk_buff* FUNC_5(void)
{
    struct sk_buff *VAR_2;


    VAR_2 = FUNC_0(VAR_1 + VAR_0);
    if ( VAR_2 != ((void*)0) ) {

        if ( ((unsigned int)VAR_2->data & (VAR_0 - 1)) != 0 )
            FUNC_3(VAR_2, ~((unsigned int)VAR_2->data + (VAR_0 - 1)) & (VAR_0 - 1));

        *((struct sk_buff **)VAR_2->data - 1) = VAR_2;
        FUNC_4();

        FUNC_2((unsigned long)VAR_2->data - sizeof(VAR_2), sizeof(VAR_2));

        FUNC_1((unsigned long)VAR_2->data, (unsigned int)VAR_2->end - (unsigned int)VAR_2->data);
    }

    return VAR_2;
}
