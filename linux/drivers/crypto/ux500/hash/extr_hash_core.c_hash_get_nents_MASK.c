
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_2, int VAR_3, bool *VAR_4)
{
 int VAR_5 = 0;
 bool VAR_6 = 1;

 while (VAR_3 > 0 && VAR_2) {
  VAR_5++;
  VAR_3 -= VAR_2->length;


  if ((VAR_4 && !FUNC_0(VAR_2->offset, VAR_1)) ||
      (!FUNC_0(VAR_2->length, VAR_1) && VAR_3 > 0))
   VAR_6 = 0;

  VAR_2 = FUNC_1(VAR_2);
 }

 if (VAR_4)
  *VAR_4 = VAR_6;

 if (VAR_3 != 0)
  return -VAR_0;

 return VAR_5;
}
