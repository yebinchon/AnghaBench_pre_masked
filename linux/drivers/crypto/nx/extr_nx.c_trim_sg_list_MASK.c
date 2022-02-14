
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_sg {unsigned int len; } ;


 int VAR_0 ;
 int FUNC_0 (long) ;

__attribute__((used)) static long int FUNC_1(struct nx_sg *VAR_1,
        struct nx_sg *VAR_2,
        unsigned int VAR_3,
        unsigned int *VAR_4)
{
 long int VAR_5;
 long int VAR_6;
 unsigned int VAR_7 = VAR_3;

 while (VAR_3 && VAR_2 > VAR_1) {
  struct nx_sg *VAR_8 = VAR_2 - 1;

  if (VAR_8->len > VAR_3) {
   VAR_8->len -= VAR_3;
   VAR_3 = 0;
  } else {
   VAR_2--;
   VAR_3 -= VAR_8->len;
  }
 }






 VAR_5 = (VAR_1 - VAR_2) * sizeof(struct nx_sg);
 if (VAR_7) {
  VAR_6 = (FUNC_0(VAR_5) / VAR_0) * VAR_1->len;
  VAR_6 = *VAR_4 - (VAR_6 & ~(VAR_0 - 1));
  *VAR_4 -= VAR_6;
 }

 return VAR_5;
}
