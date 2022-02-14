
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direntry {int dummy; } ;
struct denode {int de_diroffset; int de_dirclust; int de_pmp; } ;
struct buf {int dummy; } ;


 int FUNC_0 (int ,int ,int ,struct buf**,struct direntry**) ;

int
FUNC_1(struct denode *VAR_0, struct buf **VAR_1, struct direntry **VAR_2)
{

 return (FUNC_0(VAR_0->de_pmp, VAR_0->de_dirclust, VAR_0->de_diroffset,
     VAR_1, VAR_2));
}
