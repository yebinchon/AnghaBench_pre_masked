
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {char* ptr; size_t size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(
 const char* VAR_2,
 git_oid *VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5 = 0, VAR_6 = 0, VAR_7;
 git_buf VAR_8 = VAR_0;

 if ((VAR_4 = FUNC_3(&VAR_8, VAR_2)) < 0)
  goto cleanup;

 VAR_7 = FUNC_2(&VAR_8);

 while (VAR_5 < VAR_7) {
  if (VAR_8.ptr[VAR_5] == '/') {
   VAR_5++;
   continue;
  }

  if (FUNC_0(VAR_8.ptr[VAR_5]) < 0) {

   goto cleanup;
  }

  if (VAR_5 != VAR_6)
   VAR_8.ptr[VAR_6] = VAR_8.ptr[VAR_5];

  VAR_5++;
  VAR_6++;
 }

 VAR_8.ptr[VAR_6] = '\0';
 VAR_8.size = VAR_6;

 if (VAR_6 != VAR_1) {

  goto cleanup;
 }

 VAR_4 = FUNC_4(VAR_3, VAR_8.ptr);

cleanup:
 FUNC_1(&VAR_8);
 return VAR_4;
}
