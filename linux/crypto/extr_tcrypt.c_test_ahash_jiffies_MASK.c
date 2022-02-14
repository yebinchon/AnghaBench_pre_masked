
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*,int ) ;
 unsigned long VAR_1 ;
 int FUNC_4 (char*,int,long) ;
 int FUNC_5 (struct ahash_request*,int,char*,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_2, int VAR_3,
         int VAR_4, char *VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_4 == VAR_3)
  return FUNC_5(VAR_2, VAR_3, VAR_5, VAR_6);

 for (VAR_7 = VAR_1, VAR_8 = VAR_7 + VAR_6 * VAR_0, VAR_9 = 0;
      FUNC_6(VAR_1, VAR_8); VAR_9++) {
  VAR_11 = FUNC_3(VAR_2, FUNC_1(VAR_2));
  if (VAR_11)
   return VAR_11;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 += VAR_4) {
   VAR_11 = FUNC_3(VAR_2, FUNC_2(VAR_2));
   if (VAR_11)
    return VAR_11;
  }

  VAR_11 = FUNC_3(VAR_2, FUNC_0(VAR_2));
  if (VAR_11)
   return VAR_11;
 }

 FUNC_4("%6u opers/sec, %9lu bytes/sec\n",
  VAR_9 / VAR_6, ((long)VAR_9 * VAR_3) / VAR_6);

 return 0;
}
