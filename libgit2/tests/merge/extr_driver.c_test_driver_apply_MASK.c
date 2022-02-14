
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int git_merge_driver_source ;
typedef int const git_merge_driver ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_2(
 git_merge_driver *VAR_1,
 const char **VAR_2,
 uint32_t *VAR_3,
 git_buf *VAR_4,
 const char *VAR_5,
 const git_merge_driver_source *VAR_6)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_6);

 *VAR_2 = "applied.txt";
 *VAR_3 = VAR_0;

 return FUNC_1(VAR_4, "This is the `%s` driver.\n",
  VAR_5);
}
