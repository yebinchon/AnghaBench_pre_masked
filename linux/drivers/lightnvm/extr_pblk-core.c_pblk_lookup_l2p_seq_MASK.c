
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line {int ref; } ;
struct pblk {int trans_lock; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ppa_addr) ;
 int FUNC_2 (struct ppa_addr) ;
 struct pblk_line* FUNC_3 (struct pblk*,struct ppa_addr) ;
 struct ppa_addr FUNC_4 (struct pblk*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct pblk *VAR_0, struct ppa_addr *VAR_1,
    sector_t VAR_2, int VAR_3, bool *VAR_4)
{
 int VAR_5;

 FUNC_5(&VAR_0->trans_lock);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct ppa_addr VAR_6;

  VAR_6 = VAR_1[VAR_5] = FUNC_4(VAR_0, VAR_2 + VAR_5);


  if (!FUNC_2(VAR_6) && !FUNC_1(VAR_6)) {
   struct pblk_line *VAR_7 = FUNC_3(VAR_0, VAR_6);

   if (VAR_5 > 0 && *VAR_4)
    break;
   *VAR_4 = 0;

   FUNC_0(&VAR_7->ref);
  } else {
   if (VAR_5 > 0 && !*VAR_4)
    break;
   *VAR_4 = 1;
  }
 }
 FUNC_6(&VAR_0->trans_lock);
 return VAR_5;
}
