
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_descriptor {int own; unsigned int dataptr; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__* itf; } ;
struct TYPE_3__ {size_t tx_swap_desc_pos; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tx_descriptor* VAR_4 ;
 size_t VAR_5 ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_3 (unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_8)
{
    int VAR_9 = 32;
    volatile struct tx_descriptor *VAR_10;
    struct sk_buff *VAR_11;
    unsigned int VAR_12;

    while ( VAR_9-- > 0 ) {
 if ( VAR_4[VAR_6.itf[0].tx_swap_desc_pos].own )
            break;

        VAR_10 = &VAR_4[VAR_6.itf[0].tx_swap_desc_pos];
        if ( ++VAR_6.itf[0].tx_swap_desc_pos == VAR_5 )
            VAR_6.itf[0].tx_swap_desc_pos = 0;

        VAR_11 = FUNC_3(VAR_10->dataptr);
        if ( VAR_11 != ((void*)0) )
            FUNC_2(VAR_11);

        VAR_11 = FUNC_1(VAR_3);
        if ( VAR_11 == ((void*)0) )
            FUNC_4("can't allocate swap buffer for PPE firmware use\n");
        VAR_12 = (unsigned int)VAR_11->data & (VAR_0 - 1);
        *(struct sk_buff **)((unsigned int)VAR_11->data - VAR_12 - sizeof(struct sk_buff *)) = VAR_11;

        VAR_10->dataptr = (unsigned int)VAR_11->data & 0x0FFFFFFF;
        VAR_10->own = 1;
    }


    FUNC_0(0, 16, VAR_2);

    if ( VAR_4[VAR_6.itf[0].tx_swap_desc_pos].own ) {
        FUNC_0(0, 1 << 16, VAR_1);
        return;
    }

    FUNC_5(&VAR_7);
    return;
}
