
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct dma_desc {int buf1; int buflen; scalar_t__ buf2; scalar_t__ misc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct dma_desc *VAR_3,
 struct sk_buff *VAR_4, int VAR_5)
{
 VAR_3->misc = 0;
 VAR_3->buf2 = 0;
 VAR_3->buflen = VAR_2;
 VAR_3->buf1 = FUNC_0(VAR_4->data) |
  VAR_1 | (VAR_5 ? VAR_0 : 0);
}
