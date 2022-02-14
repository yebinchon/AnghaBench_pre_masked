
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_diff_options ;
struct TYPE_8__ {char* ptr; unsigned int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char**,unsigned int*,char*,unsigned int,int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,unsigned int,char const*,char*,unsigned int,char const*,int const*) ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_10(
 const git_buf *VAR_1,
 const char *VAR_2,
 const git_buf *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 const git_diff_options *VAR_6)
{
 git_patch *VAR_7;
 git_buf VAR_8 = VAR_0;
 git_buf VAR_9 = VAR_0;
 char *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_3(FUNC_8(&VAR_7,
  VAR_1 ? VAR_1->ptr : ((void*)0), VAR_1 ? VAR_1->size : 0,
  VAR_2,
  VAR_3 ? VAR_3->ptr : ((void*)0), VAR_3 ? VAR_3->size : 0,
  VAR_4,
  VAR_6));

 if (VAR_5) {
  FUNC_3(FUNC_9(&VAR_9, VAR_7));
  FUNC_2(VAR_5, VAR_9.ptr);
 }

 VAR_12 = FUNC_5(&VAR_8, &VAR_10, &VAR_11, VAR_1 ? VAR_1->ptr : ((void*)0), VAR_1 ? VAR_1->size : 0, VAR_7, ((void*)0));

 if (VAR_12 == 0 && VAR_3 == ((void*)0)) {
  FUNC_0(0, VAR_8.size);
  FUNC_1(((void*)0), VAR_10);
  FUNC_0(0, VAR_11);
 }
 else if (VAR_12 == 0) {
  FUNC_2(VAR_3->ptr, VAR_8.ptr);
  FUNC_2(VAR_4 ? VAR_4 : VAR_2, VAR_10);
  FUNC_0(0100644, VAR_11);
 }

 FUNC_4(VAR_10);
 FUNC_6(&VAR_8);
 FUNC_6(&VAR_9);
 FUNC_7(VAR_7);

 return VAR_12;
}
