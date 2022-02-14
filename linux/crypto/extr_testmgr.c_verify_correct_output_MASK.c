
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_sglist {unsigned int nents; struct scatterlist* sgl_ptr; } ;
struct scatterlist {unsigned int length; unsigned int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static int FUNC_6(const struct test_sglist *VAR_3,
     const char *VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6,
     bool VAR_7)
{
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->nents; VAR_8++) {
  struct scatterlist *VAR_9 = &VAR_3->sgl_ptr[VAR_8];
  unsigned int VAR_10 = VAR_9->length;
  unsigned int VAR_11 = VAR_9->offset;
  const char *VAR_12;

  if (VAR_6) {
   if (VAR_6 >= VAR_10) {
    VAR_6 -= VAR_10;
    continue;
   }
   VAR_11 += VAR_6;
   VAR_10 -= VAR_6;
   VAR_6 = 0;
  }
  VAR_10 = FUNC_2(VAR_10, VAR_5);
  VAR_12 = FUNC_3(FUNC_4(VAR_9)) + VAR_11;
  if (FUNC_1(VAR_4, VAR_12, VAR_10) != 0)
   return -VAR_0;
  if (VAR_7 &&
      !FUNC_5(VAR_12 + VAR_10, VAR_2))
   return -VAR_1;
  VAR_5 -= VAR_10;
  VAR_4 += VAR_10;
 }
 if (FUNC_0(VAR_5 != 0))
  return -VAR_0;
 return 0;
}
