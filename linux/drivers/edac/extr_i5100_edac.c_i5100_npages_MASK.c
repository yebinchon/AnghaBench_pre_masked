
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {TYPE_1__** mtr; } ;
struct TYPE_2__ {unsigned int numcol; unsigned int numrow; unsigned int numbank; int present; } ;


 unsigned int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned int FUNC_0 (struct mem_ctl_info*,unsigned int) ;
 unsigned int FUNC_1 (struct mem_ctl_info*,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_2(struct mem_ctl_info *VAR_2, unsigned int VAR_3)
{
 struct i5100_priv *VAR_4 = VAR_2->pvt_info;
 const unsigned int VAR_5 = FUNC_1(VAR_2, VAR_3);
 const unsigned int VAR_6 = FUNC_0(VAR_2, VAR_3);
 unsigned VAR_7;


 if (!VAR_4->mtr[VAR_6][VAR_5].present)
  return 0ULL;

 VAR_7 =
  VAR_0 +
  VAR_4->mtr[VAR_6][VAR_5].numcol +
  VAR_4->mtr[VAR_6][VAR_5].numrow +
  VAR_4->mtr[VAR_6][VAR_5].numbank;

 return (unsigned long)
  ((unsigned long long) (1ULL << VAR_7) / VAR_1);
}
