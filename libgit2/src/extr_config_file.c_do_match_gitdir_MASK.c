
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_12__ {char* ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const) ;
 int FUNC_9 (TYPE_1__*,int const*,int ) ;
 int FUNC_10 (TYPE_1__*,char const*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_13(
 int *VAR_5,
 const git_repository *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 bool VAR_9)
{
 git_buf VAR_10 = VAR_0, VAR_11 = VAR_0;
 int VAR_12;

 if (VAR_8[0] == '.' && FUNC_8(VAR_8[1])) {
  FUNC_6(&VAR_10, VAR_7);
  FUNC_1(&VAR_10, VAR_10.ptr, VAR_8 + 2);
 } else if (VAR_8[0] == '~' && FUNC_8(VAR_8[1]))
  FUNC_10(&VAR_10, VAR_8 + 1);
 else if (!FUNC_7(VAR_8))
  FUNC_1(&VAR_10, "**", VAR_8);
 else
  FUNC_4(&VAR_10, VAR_8);

 if (FUNC_8(VAR_8[FUNC_11(VAR_8) - 1]))
  FUNC_3(&VAR_10, "**");

 if (FUNC_2(&VAR_10)) {
  VAR_12 = -1;
  goto out;
 }

 if ((VAR_12 = FUNC_9(&VAR_11, VAR_6, VAR_1)) < 0)
  goto out;

 if (FUNC_8(VAR_11.ptr[VAR_11.size - 1]))
  FUNC_5(&VAR_11, VAR_11.size - 1);

 *VAR_5 = FUNC_12(VAR_10.ptr, VAR_11.ptr,
        VAR_4 | (VAR_9 ? VAR_2 : 0)) == VAR_3;
out:
 FUNC_0(&VAR_10);
 FUNC_0(&VAR_11);
 return VAR_12;
}
