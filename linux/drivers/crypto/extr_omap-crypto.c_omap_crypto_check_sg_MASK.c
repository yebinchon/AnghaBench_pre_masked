
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scatterlist {int offset; int length; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct scatterlist *VAR_4, int VAR_5, int VAR_6,
    u16 VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (!FUNC_0(VAR_5, VAR_6))
  return VAR_2;

 while (VAR_4) {
  VAR_9++;

  if (!FUNC_0(VAR_4->offset, 4))
   return VAR_2;
  if (!FUNC_0(VAR_4->length, VAR_6))
   return VAR_2;





  VAR_8 += VAR_4->length;
  VAR_4 = FUNC_2(VAR_4);

  if (VAR_8 >= VAR_5)
   break;
 }

 if ((VAR_7 & VAR_1) && VAR_9 > 1)
  return VAR_2;

 if (VAR_8 != VAR_5)
  return VAR_0;

 return 0;
}
