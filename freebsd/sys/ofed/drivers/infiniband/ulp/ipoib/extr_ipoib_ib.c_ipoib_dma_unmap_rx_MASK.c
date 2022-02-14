
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ipoib_rx_buf {int * mapping; struct mbuf* mb; } ;
struct ipoib_dev_priv {int ca; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void
FUNC_1(struct ipoib_dev_priv *VAR_1, struct ipoib_rx_buf *VAR_2)
{
 struct mbuf *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_2->mb; VAR_3 != ((void*)0); VAR_3 = VAR_3->m_next, VAR_4++)
  FUNC_0(VAR_1->ca, VAR_2->mapping[VAR_4], VAR_3->m_len,
      VAR_0);
}
