
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; int m_len; int m_data; } ;
struct iovec {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct iovec* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct iovec*,struct iovec*,int) ;

int
FUNC_3(struct mbuf *VAR_3, struct iovec **VAR_4, int *VAR_5,
    int *VAR_6)
{
 struct iovec *VAR_7;
 struct mbuf *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 *VAR_6 = 0;
 VAR_7 = *VAR_4;
 if (VAR_7 == ((void*)0))
  *VAR_5 = 0;

 VAR_8 = VAR_3;
 VAR_10 = 0;
 while (VAR_8 != ((void*)0)) {
  if (VAR_10 == *VAR_5) {

   VAR_11 = 1;
   VAR_9 = VAR_8;
   while ((VAR_9 = VAR_9->m_next) != ((void*)0))
    VAR_11++;
   VAR_7 = FUNC_1(sizeof *VAR_7 * (VAR_10 + VAR_11), VAR_1,
       VAR_2);
   if (VAR_7 == ((void*)0))
    return VAR_0;
   *VAR_6 = 1;
   *VAR_5 = VAR_10 + VAR_11;
   FUNC_2(VAR_7, *VAR_4, sizeof *VAR_7 * VAR_10);
  }

  VAR_7[VAR_10].iov_base = VAR_8->m_data;
  VAR_7[VAR_10].iov_len = VAR_8->m_len;

  VAR_10++;
  VAR_8 = VAR_8->m_next;
 }

 if (*VAR_6)
  FUNC_0(*VAR_5 == VAR_10, ("did not allocate correct amount: %d != %d",
      *VAR_5, VAR_10));

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_10;
 return 0;
}
