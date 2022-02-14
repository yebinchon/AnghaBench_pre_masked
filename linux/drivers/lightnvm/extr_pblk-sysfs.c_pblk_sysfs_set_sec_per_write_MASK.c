
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int min_write_pgs; int max_write_pgs; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk*,int) ;
 size_t FUNC_3 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct pblk *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, "\n");
 if (VAR_4 >= VAR_3)
  return -VAR_0;

 if (FUNC_0(VAR_2, 0, &VAR_5))
  return -VAR_0;

 if (!FUNC_1(VAR_1)) {



  return -VAR_0;
 }

 if (VAR_5 < VAR_1->min_write_pgs
    || VAR_5 > VAR_1->max_write_pgs
    || VAR_5 % VAR_1->min_write_pgs != 0)
  return -VAR_0;

 FUNC_2(VAR_1, VAR_5);

 return VAR_3;
}
