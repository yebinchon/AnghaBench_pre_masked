
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (int,char*,unsigned int,unsigned int,...) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_2(unsigned int VAR_3)
{
    unsigned int VAR_4;
    struct sk_buff *VAR_5;



    if ( VAR_3 == 0 ) {
        FUNC_1("dataptr is 0, it's supposed to be invalid pointer");
        return ((void*)0);
    }

    VAR_4 = (VAR_3 - 4) | VAR_2;
    VAR_5 = *(struct sk_buff **)VAR_4;

    FUNC_0((unsigned int)VAR_5 >= VAR_1, "invalid skb - skb = %#08x, dataptr = %#08x", (unsigned int)VAR_5, VAR_3);
    FUNC_0((((unsigned int)VAR_5->data & (0x0FFFFFFF ^ (VAR_0 - 1))) | VAR_2) == (VAR_3 | VAR_2), "invalid skb - skb = %#08x, skb->data = %#08x, dataptr = %#08x", (unsigned int)VAR_5, (unsigned int)VAR_5->data, VAR_3);

    return VAR_5;
}
