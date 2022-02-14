
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sg_mapping_iter {unsigned int length; int consumed; scalar_t__* addr; } ;
struct scatterlist {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sg_mapping_iter*) ;
 int FUNC_1 (struct sg_mapping_iter*,struct scatterlist*,int,unsigned int) ;
 int FUNC_2 (struct sg_mapping_iter*) ;
 int FUNC_3 (struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct scatterlist *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct sg_mapping_iter VAR_4;
 int VAR_5, VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8 = VAR_2;
 const u8 *VAR_9;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(&VAR_4, VAR_1, VAR_6, VAR_0 | VAR_3);

 VAR_5 = 0;
 VAR_7 = 0;
 while (VAR_2 > 0) {

  while (VAR_7 && !*VAR_9 && VAR_5 < VAR_2) {
   VAR_5++;
   VAR_7--;
   VAR_9++;
  }

  if (VAR_7 && *VAR_9)
   break;

  FUNC_0(&VAR_4);
  VAR_9 = VAR_4.addr;
  VAR_7 = VAR_4.length;

  VAR_2 -= VAR_5;
  VAR_5 = 0;
 }

 VAR_4.consumed = VAR_5;
 FUNC_2(&VAR_4);
 VAR_2 -= VAR_5;

 return VAR_8 - VAR_2;
}
