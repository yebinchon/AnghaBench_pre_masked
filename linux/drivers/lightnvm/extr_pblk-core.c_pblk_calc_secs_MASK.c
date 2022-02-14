
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int sec_per_write; int min_write_pgs; int min_write_pgs_data; } ;



int FUNC_0(struct pblk *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_0->sec_per_write;
 int VAR_5 = VAR_0->min_write_pgs;
 int VAR_6 = 0;

 if (VAR_3 && VAR_0->min_write_pgs_data != VAR_0->min_write_pgs)
  VAR_5 = VAR_4 = VAR_0->min_write_pgs_data;

 if (VAR_1 >= VAR_4)
  VAR_6 = VAR_4;
 else if (VAR_1 >= VAR_5)
  VAR_6 = VAR_5 * (VAR_1 / VAR_5);
 else if (VAR_2)
  VAR_6 = VAR_5;

 return VAR_6;
}
