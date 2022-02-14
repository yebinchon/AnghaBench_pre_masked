
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst_vco {int s; unsigned int v; unsigned int r; } ;
struct icst_params {unsigned int vd_max; unsigned int rd_max; unsigned long* s2div; size_t* idx2s; unsigned long vco_min; unsigned long vco_max; unsigned int rd_min; int ref; unsigned int vd_min; } ;



struct icst_vco
FUNC_0(const struct icst_params *VAR_0, unsigned long VAR_1)
{
 struct icst_vco VAR_2 = { .s = 1, .v = VAR_0->vd_max, .r = VAR_0->rd_max };
 unsigned long VAR_3;
 unsigned int VAR_4 = 0, VAR_5, VAR_6 = (unsigned int)-1;





 do {
  VAR_3 = VAR_1 * VAR_0->s2div[VAR_0->idx2s[VAR_4]];

  if (VAR_3 > VAR_0->vco_min && VAR_3 <= VAR_0->vco_max)
   break;
  VAR_4++;
 } while (VAR_4 < 8);

 if (VAR_4 >= 8)
  return VAR_2;

 VAR_2.s = VAR_0->idx2s[VAR_4];





 for (VAR_5 = VAR_0->rd_min; VAR_5 <= VAR_0->rd_max; VAR_5++) {
  unsigned long VAR_7, VAR_8;
  unsigned int VAR_9;
  int VAR_10;

  VAR_7 = (2 * VAR_0->ref) / VAR_5;

  VAR_9 = (VAR_3 + VAR_7 / 2) / VAR_7;
  if (VAR_9 < VAR_0->vd_min || VAR_9 > VAR_0->vd_max)
   continue;

  VAR_8 = VAR_7 * VAR_9;
  VAR_10 = VAR_8 - VAR_3;
  if (VAR_10 < 0)
   VAR_10 = -VAR_10;

  if ((unsigned)VAR_10 < VAR_6) {
   VAR_2.v = VAR_9 - 8;
   VAR_2.r = VAR_5 - 2;
   if (VAR_10 == 0)
    break;
   VAR_6 = VAR_10;
  }
 }

 return VAR_2;
}
