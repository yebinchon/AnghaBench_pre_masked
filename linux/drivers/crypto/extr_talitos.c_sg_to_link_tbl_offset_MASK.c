
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int dummy; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scatterlist*) ;
 unsigned int FUNC_1 (struct scatterlist*) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct talitos_ptr*,scalar_t__,unsigned int,int ) ;
 int FUNC_4 (struct talitos_ptr*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct scatterlist *VAR_1, int VAR_2,
     unsigned int VAR_3, int VAR_4, int VAR_5,
     struct talitos_ptr *VAR_6)
{
 int VAR_7 = VAR_5 ? VAR_2 + 1 : VAR_2;
 int VAR_8 = 0;
 int VAR_9 = VAR_4 + VAR_5;

 while (VAR_9 && VAR_1 && VAR_7--) {
  unsigned int VAR_10 = FUNC_1(VAR_1);

  if (VAR_3 >= VAR_10) {
   VAR_3 -= VAR_10;
   goto next;
  }

  VAR_10 -= VAR_3;

  if (VAR_10 > VAR_9)
   VAR_10 = VAR_9;

  if (VAR_4 > 0 && VAR_10 > VAR_4) {
   FUNC_3(VAR_6 + VAR_8,
           FUNC_0(VAR_1) + VAR_3, VAR_4, 0);
   FUNC_4(VAR_6 + VAR_8, 0, 0);
   VAR_8++;
   VAR_10 -= VAR_4;
   VAR_3 += VAR_4;
  }
  FUNC_3(VAR_6 + VAR_8,
          FUNC_0(VAR_1) + VAR_3, VAR_10, 0);
  FUNC_4(VAR_6 + VAR_8, 0, 0);
  VAR_8++;
  VAR_9 -= VAR_10;
  VAR_4 -= VAR_10;
  VAR_3 = 0;

next:
  VAR_1 = FUNC_2(VAR_1);
 }


 if (VAR_8 > 0)
  FUNC_4(VAR_6 + VAR_8 - 1,
           VAR_0, 0);

 return VAR_8;
}
