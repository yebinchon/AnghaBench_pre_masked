
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 unsigned long VAR_1 ;
 int FUNC_2 (char*,int,long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_2, int VAR_3,
         char *VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8;
 int VAR_9;

 for (VAR_6 = VAR_1, VAR_7 = VAR_6 + VAR_5 * VAR_0, VAR_8 = 0;
      FUNC_3(VAR_1, VAR_7); VAR_8++) {
  VAR_9 = FUNC_1(VAR_2, FUNC_0(VAR_2));
  if (VAR_9)
   return VAR_9;
 }

 FUNC_2("%6u opers/sec, %9lu bytes/sec\n",
        VAR_8 / VAR_5, ((long)VAR_8 * VAR_3) / VAR_5);

 return 0;
}
