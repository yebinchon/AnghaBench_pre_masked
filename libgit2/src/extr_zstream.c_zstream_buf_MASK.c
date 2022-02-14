
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_zstream_t ;
typedef int git_zstream ;
struct TYPE_4__ {size_t asize; size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,size_t*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,void const*,size_t) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_1, const void *VAR_2, size_t VAR_3, git_zstream_t VAR_4)
{
 git_zstream VAR_5 = VAR_0;
 int VAR_6 = 0;

 if ((VAR_6 = FUNC_4(&VAR_5, VAR_4)) < 0)
  return VAR_6;

 if ((VAR_6 = FUNC_5(&VAR_5, VAR_2, VAR_3)) < 0)
  goto done;

 while (!FUNC_1(&VAR_5)) {
  size_t VAR_7 = FUNC_6(&VAR_5), VAR_8;

  if ((VAR_6 = FUNC_0(VAR_1, VAR_7)) < 0)
   goto done;

  VAR_8 = VAR_1->asize - VAR_1->size;

  if ((VAR_6 = FUNC_3(
    VAR_1->ptr + VAR_1->size, &VAR_8, &VAR_5)) < 0)
   goto done;

  VAR_1->size += VAR_8;
 }


 if (VAR_1->size < VAR_1->asize)
  VAR_1->ptr[VAR_1->size] = '\0';

done:
 FUNC_2(&VAR_5);
 return VAR_6;
}
