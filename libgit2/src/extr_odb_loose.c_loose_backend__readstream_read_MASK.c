
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t start_len; size_t start_read; size_t start; int zstream; } ;
typedef TYPE_1__ loose_readstream ;
typedef int git_odb_stream ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t*,int *) ;
 int FUNC_1 (char*,size_t,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;

__attribute__((used)) static int FUNC_3(
 git_odb_stream *VAR_1,
 char *VAR_2,
 size_t VAR_3)
{
 loose_readstream *VAR_4 = (loose_readstream *)VAR_1;
 size_t VAR_5 = VAR_4->start_len - VAR_4->start_read;
 int VAR_6 = 0, VAR_7;

 VAR_3 = FUNC_2(VAR_3, VAR_0);





 if (VAR_5 && VAR_3) {
  size_t VAR_8 = FUNC_2(VAR_5, VAR_3);
  FUNC_1(VAR_2, VAR_4->start + VAR_4->start_read, VAR_8);

  VAR_2 += VAR_8;
  VAR_4->start_read += VAR_8;

  VAR_6 += (int)VAR_8;
  VAR_3 -= VAR_8;
 }

 if (VAR_3) {
  size_t VAR_9 = VAR_3;

  if ((VAR_7 = FUNC_0(VAR_2, &VAR_9, &VAR_4->zstream)) < 0)
   return VAR_7;

  VAR_6 += (int)VAR_9;
 }

 return (int)VAR_6;
}
