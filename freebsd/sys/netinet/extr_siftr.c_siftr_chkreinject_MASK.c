
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siftr_stats {int nskip_out_malloc; int nskip_in_malloc; int nskip_out_dejavu; int nskip_in_dejavu; } ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct m_tag* FUNC_0 (int ,int ,int ,int ) ;
 int * FUNC_1 (struct mbuf*,int ,int ,int *) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static inline int
FUNC_3(struct mbuf *VAR_4, int VAR_5, struct siftr_stats *VAR_6)
{
 if (FUNC_1(VAR_4, VAR_1, VAR_2, ((void*)0))
     != ((void*)0)) {
  if (VAR_5 == VAR_3)
   VAR_6->nskip_in_dejavu++;
  else
   VAR_6->nskip_out_dejavu++;

  return (1);
 } else {
  struct m_tag *VAR_7 = FUNC_0(VAR_1,
      VAR_2, 0, VAR_0);
  if (VAR_7 == ((void*)0)) {
   if (VAR_5 == VAR_3)
    VAR_6->nskip_in_malloc++;
   else
    VAR_6->nskip_out_malloc++;

   return (1);
  }

  FUNC_2(VAR_4, VAR_7);
 }

 return (0);
}
