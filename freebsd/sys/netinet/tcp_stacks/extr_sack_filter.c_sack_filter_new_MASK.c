
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcp_seq ;
struct sackblk {int dummy; } ;
struct sack_filter {size_t sf_cur; size_t sf_used; int sf_bits; struct sackblk* sf_blks; } ;
typedef int int32_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct sack_filter*,struct sackblk*) ;
 int FUNC_1 (struct sackblk*,struct sackblk*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct sack_filter*,size_t) ;
 scalar_t__ FUNC_3 (struct sack_filter*,size_t) ;
 int FUNC_4 (struct sack_filter*,size_t) ;

__attribute__((used)) static int32_t
FUNC_5(struct sack_filter *VAR_5, struct sackblk *VAR_6, int VAR_7, tcp_seq VAR_8)
{
 struct sackblk VAR_9[VAR_1];
 int32_t VAR_10, VAR_11;




 for(VAR_11=0, VAR_10=0; VAR_11<VAR_7; VAR_11++) {
  if (FUNC_0(VAR_5, &VAR_6[VAR_11]))
   continue;
  FUNC_1(&VAR_9[VAR_10], &VAR_6[VAR_11], sizeof(struct sackblk));
  VAR_10++;
 }
 if (VAR_10 == 0)
  return(VAR_10);
 FUNC_1(VAR_6, VAR_9, (VAR_10 * sizeof(struct sackblk)));
 VAR_7 = VAR_10;

 for(VAR_11=(VAR_10-1); VAR_11>=0; VAR_11--) {
  if (FUNC_0(VAR_5, &VAR_9[VAR_11])) {
   continue;
  }

  VAR_5->sf_cur++;
  VAR_5->sf_cur %= VAR_0;
  if ((FUNC_3(VAR_5, VAR_5->sf_cur)) &&
      (VAR_5->sf_used < VAR_0)) {
   FUNC_4(VAR_5, VAR_5->sf_cur);
  }

  if (FUNC_3(VAR_5, VAR_5->sf_cur)) {
   VAR_4++;
   if (VAR_5->sf_used < VAR_0)
    VAR_2++;
  }

  FUNC_1(&VAR_5->sf_blks[VAR_5->sf_cur], &VAR_6[VAR_11], sizeof(struct sackblk));
  if (FUNC_3(VAR_5, VAR_5->sf_cur) == 0) {
   VAR_5->sf_used++;

   if (VAR_5->sf_used > VAR_3)
    VAR_3 = VAR_5->sf_used;

   VAR_5->sf_bits = FUNC_2(VAR_5, VAR_5->sf_cur);
  }
 }
 return(VAR_7);
}
