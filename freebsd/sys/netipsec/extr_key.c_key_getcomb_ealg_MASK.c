
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sadb_comb {int sadb_comb_encrypt; int sadb_comb_encrypt_minbits; void* sadb_comb_encrypt_maxbits; } ;
struct mbuf {int m_len; struct mbuf* m_next; } ;
struct enc_xform {int maxkey; int minkey; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*,int const) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct sadb_comb*,int) ;
 int VAR_6 ;
 struct enc_xform* FUNC_6 (int) ;
 struct mbuf* FUNC_7 () ;
 int FUNC_8 (struct sadb_comb*) ;
 int FUNC_9 (struct mbuf*,struct mbuf*) ;
 int FUNC_10 (struct mbuf*) ;
 struct mbuf* FUNC_11 (struct mbuf*,int,int const,int*) ;
 struct sadb_comb* FUNC_12 (struct mbuf*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_13(void)
{
 struct sadb_comb *VAR_7;
 const struct enc_xform *VAR_8;
 struct mbuf *VAR_9 = ((void*)0), *VAR_10, *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;
 const int VAR_17 = FUNC_3(sizeof(struct sadb_comb));

 VAR_10 = ((void*)0);
 for (VAR_13 = 1; VAR_13 <= VAR_3; VAR_13++) {
  VAR_8 = FUNC_6(VAR_13);
  if (VAR_8 == ((void*)0))
   continue;


  if (FUNC_4(VAR_8->maxkey) < VAR_5)
   continue;
  if (FUNC_4(VAR_8->minkey) < VAR_5)
   VAR_12 = VAR_5;
  else
   VAR_12 = FUNC_4(VAR_8->minkey);

  if (VAR_4)
   VAR_10 = FUNC_7();
  else {
   FUNC_0(VAR_17 <= VAR_0,
    ("l=%u > MLEN=%lu", VAR_17, (u_long) VAR_0));
   FUNC_1(VAR_10, VAR_2, VAR_1);
   if (VAR_10) {
    FUNC_2(VAR_10, VAR_17);
    VAR_10->m_len = VAR_17;
    VAR_10->m_next = ((void*)0);
    FUNC_5(FUNC_12(VAR_10, VAR_6), VAR_10->m_len);
   }
  }
  if (!VAR_10)
   goto fail;

  VAR_16 = 0;
  for (VAR_11 = VAR_10; VAR_11; VAR_11 = VAR_11->m_next)
   VAR_16 += VAR_11->m_len;
  FUNC_0((VAR_16 % VAR_17) == 0, ("totlen=%u, l=%u", VAR_16, VAR_17));

  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14 += VAR_17) {
   VAR_11 = FUNC_11(VAR_10, VAR_14, VAR_17, &VAR_15);
   if (!VAR_11) {

    goto fail;
   }
   VAR_7 = (struct sadb_comb *)(FUNC_12(VAR_11, VAR_6) + VAR_15);
   FUNC_5(VAR_7, sizeof(*VAR_7));
   FUNC_8(VAR_7);
   VAR_7->sadb_comb_encrypt = VAR_13;
   VAR_7->sadb_comb_encrypt_minbits = VAR_12;
   VAR_7->sadb_comb_encrypt_maxbits = FUNC_4(VAR_8->maxkey);
  }

  if (!VAR_9)
   VAR_9 = VAR_10;
  else
   FUNC_9(VAR_9, VAR_10);
 }

 return VAR_9;

 fail:
 if (VAR_9)
  FUNC_10(VAR_9);
 return ((void*)0);
}
