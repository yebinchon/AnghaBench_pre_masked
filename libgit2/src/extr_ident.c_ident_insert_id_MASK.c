
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int oid ;
typedef int git_filter_source ;
struct TYPE_8__ {char* ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t) ;
 int FUNC_3 (TYPE_1__*,char const*,size_t) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (char*,int,int ) ;
 scalar_t__ FUNC_6 (char const**,char const**,char*,int ) ;

__attribute__((used)) static int FUNC_7(
 git_buf *VAR_2, const git_buf *VAR_3, const git_filter_source *VAR_4)
{
 char VAR_5[VAR_0+1];
 const char *VAR_6, *VAR_7, *VAR_8 = VAR_3->ptr + VAR_3->size;
 size_t VAR_9;



 if (!FUNC_4(VAR_4))
  return VAR_1;

 FUNC_5(VAR_5, sizeof(VAR_5), FUNC_4(VAR_4));

 if (FUNC_6(&VAR_6, &VAR_7, VAR_3->ptr, VAR_3->size) < 0)
  return VAR_1;

 VAR_9 = (size_t)(VAR_6 - VAR_3->ptr) +
  5 + VAR_0 + 2 +
  (size_t)(VAR_8 - VAR_7);

 if (FUNC_0(VAR_2, VAR_9) < 0)
  return -1;

 FUNC_3(VAR_2, VAR_3->ptr, (size_t)(VAR_6 - VAR_3->ptr));
 FUNC_2(VAR_2, "$Id: ", 5);
 FUNC_2(VAR_2, VAR_5, VAR_0);
 FUNC_2(VAR_2, " $", 2);
 FUNC_2(VAR_2, VAR_7, (size_t)(VAR_8 - VAR_7));

 return FUNC_1(VAR_2) ? -1 : 0;
}
