
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ipoib_tx_buf {int * mapping; struct mbuf* mb; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;

void FUNC_1(struct ib_device *VAR_1, struct ipoib_tx_buf *VAR_2)
{
 struct mbuf *VAR_3 = VAR_2->mb;
 u64 *VAR_4 = VAR_2->mapping;
 struct mbuf *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3, VAR_6 = 0; VAR_5 != ((void*)0); VAR_5 = VAR_5->m_next, VAR_6++)
  FUNC_0(VAR_1, VAR_4[VAR_6], VAR_5->m_len, VAR_0);
}
