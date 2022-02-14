
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_diff_options ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,size_t,char const*,size_t,char const*,char const*,unsigned int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char const*,size_t,char*,char const*,size_t,char*,int const*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(
 const char *VAR_1,
 size_t VAR_2,
 const char *VAR_3,
 size_t VAR_4,
 const char *VAR_5,
 const git_diff_options *VAR_6,
 const char *VAR_7,
 unsigned int VAR_8)
{
 git_patch *VAR_9;
 git_buf VAR_10 = VAR_0;
 int VAR_11;

 FUNC_2(FUNC_5(&VAR_9,
  VAR_1, VAR_2, "file.txt",
  VAR_3, VAR_4, "file.txt",
  VAR_6));
 FUNC_2(FUNC_6(&VAR_10, VAR_9));

 FUNC_1(VAR_5, VAR_10.ptr);

 VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, VAR_8);

 FUNC_3(&VAR_10);
 FUNC_4(VAR_9);

 return VAR_11;
}
