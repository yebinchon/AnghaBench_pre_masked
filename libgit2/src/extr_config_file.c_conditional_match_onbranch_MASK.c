
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_10__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,char const*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_9 (char const) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_13(
 int *VAR_6,
 const git_repository *VAR_7,
 const char *VAR_8,
 const char *VAR_9)
{
 git_buf VAR_10 = VAR_0, VAR_11 = VAR_0;
 int VAR_12;

 FUNC_0(VAR_8);
 if ((VAR_12 = FUNC_4(&VAR_11, FUNC_10(VAR_7), VAR_1)) < 0 ||
     (VAR_12 = FUNC_8(&VAR_10, VAR_11.ptr)) < 0)
  goto out;
 FUNC_6(&VAR_10);

 if (FUNC_1(VAR_10.ptr, VAR_3, FUNC_11(VAR_3)))
  goto out;
 FUNC_2(&VAR_10, VAR_10.ptr + FUNC_11(VAR_3));

 if (FUNC_1(VAR_10.ptr, VAR_2, FUNC_11(VAR_2)))
  goto out;
 FUNC_2(&VAR_10, VAR_10.ptr + FUNC_11(VAR_2));





 if ((VAR_12 = FUNC_7(&VAR_11, VAR_9)) < 0)
  goto out;
 if (FUNC_9(VAR_9[FUNC_11(VAR_9) - 1]) &&
     (VAR_12 = FUNC_5(&VAR_11, "**")) < 0)
  goto out;

 *VAR_6 = FUNC_12(VAR_11.ptr, VAR_10.ptr, VAR_5) == VAR_4;
out:
 FUNC_3(&VAR_10);
 FUNC_3(&VAR_11);

 return VAR_12;

}
