
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line {int dummy; } ;
struct pblk {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pblk*,struct pblk_line*,int ) ;
 int FUNC_2 (struct ppa_addr) ;
 int FUNC_3 (struct pblk*,struct ppa_addr) ;
 int FUNC_4 (struct ppa_addr) ;
 struct pblk_line* FUNC_5 (struct pblk*,struct ppa_addr) ;

void FUNC_6(struct pblk *VAR_0, struct ppa_addr VAR_1)
{
 struct pblk_line *VAR_2;
 u64 VAR_3;







 VAR_2 = FUNC_5(VAR_0, VAR_1);
 VAR_3 = FUNC_3(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_2, VAR_3);
}
