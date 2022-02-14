
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct histogram {double count; double min; double max; unsigned int num_bins; unsigned int gap; struct bin* bins; } ;
struct bin {double centroid; double count; int member_1; int member_0; } ;


 scalar_t__ FUNC_0 (double,int ) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double
FUNC_2(const struct histogram *VAR_0, double VAR_1)
{
 unsigned VAR_2 = 0, VAR_3 = 0;
 struct bin VAR_4 = { 0, 0 }, VAR_5 = { 0, 0 };
 double VAR_6 = 0, VAR_7 = 0;
 double VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;




 double VAR_12 = VAR_0->count * VAR_1;
 if (VAR_1 <= 0)
  return VAR_0->min;
 if (VAR_1 >= 1)
  return VAR_0->max;
 while (VAR_7 < VAR_12) {


  if (VAR_3 == 0) {
   VAR_4.centroid = VAR_0->min;
   VAR_4.count = 0;
  } else {
   VAR_4 = VAR_0->bins[VAR_2];
  }


  if (VAR_3 > VAR_0->num_bins) {
   VAR_4.centroid = VAR_0->max;
   VAR_5.count = 0;
  } else {
   VAR_5 = VAR_0->bins[VAR_3];
  }




  VAR_6 = VAR_7;
  VAR_7 += 0.5 * (VAR_4.count + VAR_5.count);




  VAR_2 = VAR_3++;
  if (VAR_3 == VAR_0->gap)
   VAR_3++;
 }


 VAR_8 = VAR_5.count - VAR_4.count;
 if (FUNC_0(VAR_8, 0)) {
  VAR_9 = VAR_7 - VAR_6;
  VAR_11 = FUNC_0(VAR_9, 0) ? 0 : (VAR_12 - VAR_6) / VAR_9;
 } else {
  VAR_9 = 2 * VAR_4.count;
  VAR_10 = 2 * (VAR_6 - VAR_12);
  VAR_11 = (-VAR_9 + FUNC_1(VAR_9 * VAR_9 - 4 * VAR_8 * VAR_10)) / (2 * VAR_8);
 }
 return VAR_4.centroid + (VAR_5.centroid - VAR_4.centroid) * VAR_11;
}
