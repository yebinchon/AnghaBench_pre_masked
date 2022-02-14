
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {struct ib_device* ib_device; } ;
struct sdp_buf {int * mapping; struct mbuf* mb; } ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct ib_device*,int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct sdp_sock *VAR_0, struct sdp_buf *VAR_1,
    enum dma_data_direction VAR_2)
{
 struct ib_device *VAR_3;
 struct mbuf *VAR_4;
 int VAR_5;

 VAR_3 = VAR_0->ib_device;
 for (VAR_5 = 0, VAR_4 = VAR_1->mb; VAR_4 != ((void*)0); VAR_4 = VAR_4->m_next, VAR_5++)
  FUNC_0(VAR_3, VAR_1->mapping[VAR_5], VAR_4->m_len, VAR_2);
}
