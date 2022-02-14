
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line {int ref; } ;
struct pblk {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct pblk_line* FUNC_1 (struct pblk*,struct ppa_addr) ;

void FUNC_2(struct pblk *VAR_1, struct ppa_addr VAR_2)
{
 struct pblk_line *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(&VAR_3->ref, VAR_0);
}
