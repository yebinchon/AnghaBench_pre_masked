
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_diff_binary_t ;
struct TYPE_6__ {size_t size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (size_t) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void**,size_t*,char const*,size_t,char const*,size_t,size_t) ;
 int FUNC_5 (TYPE_1__*,void*,size_t) ;

__attribute__((used)) static int FUNC_6(
 git_diff_binary_t *VAR_4,
 char **VAR_5,
 size_t *VAR_6,
 size_t *VAR_7,
 const char *VAR_8,
 size_t VAR_9,
 const char *VAR_10,
 size_t VAR_11)
{
 git_buf VAR_12 = VAR_0, VAR_13 = VAR_0;
 size_t VAR_14 = 0;
 int VAR_15;


 if (!FUNC_1(VAR_9) || !FUNC_1(VAR_11))
  return VAR_3;

 if ((VAR_15 = FUNC_5(&VAR_12, VAR_10, VAR_11)) < 0)
  goto done;


 if (!FUNC_1(VAR_12.size)) {
  VAR_15 = VAR_3;
  goto done;
 }

 if (VAR_9 && VAR_11) {
  void *VAR_16;

  VAR_15 = FUNC_4(&VAR_16, &VAR_14,
   VAR_8, VAR_9,
   VAR_10, VAR_11,
   VAR_12.size);

  if (VAR_15 == 0) {
   VAR_15 = FUNC_5(
    &VAR_13, VAR_16, VAR_14);

   FUNC_0(VAR_16);
  } else if (VAR_15 == VAR_3) {
   VAR_15 = 0;
  }

  if (VAR_15 < 0)
   goto done;
 }

 if (VAR_13.size && VAR_13.size < VAR_12.size) {
  *VAR_4 = VAR_1;
  *VAR_6 = VAR_13.size;
  *VAR_5 = FUNC_2(&VAR_13);
  *VAR_7 = VAR_14;
 } else {
  *VAR_4 = VAR_2;
  *VAR_6 = VAR_12.size;
  *VAR_5 = FUNC_2(&VAR_12);
  *VAR_7 = VAR_11;
 }

done:
 FUNC_3(&VAR_12);
 FUNC_3(&VAR_13);

 return VAR_15;
}
