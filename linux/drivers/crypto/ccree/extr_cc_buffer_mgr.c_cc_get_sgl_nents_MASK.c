
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct scatterlist {unsigned int length; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,unsigned int,unsigned int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static unsigned int FUNC_2(struct device *VAR_0,
         struct scatterlist *VAR_1,
         unsigned int VAR_2, u32 *VAR_3)
{
 unsigned int VAR_4 = 0;

 while (VAR_2 && VAR_1) {
  VAR_4++;

  *VAR_3 = VAR_2;
  VAR_2 -= (VAR_1->length > VAR_2) ?
    VAR_2 : VAR_1->length;
  VAR_1 = FUNC_1(VAR_1);
 }
 FUNC_0(VAR_0, "nents %d last bytes %d\n", VAR_4, *VAR_3);
 return VAR_4;
}
