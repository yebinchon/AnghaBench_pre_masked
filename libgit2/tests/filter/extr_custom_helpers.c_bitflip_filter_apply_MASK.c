
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_filter_source ;
typedef void* git_filter ;
struct TYPE_5__ {size_t size; scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (void**) ;
 unsigned char FUNC_1 (unsigned char const) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (int const*) ;

int FUNC_7(
 git_filter *VAR_0,
 void **VAR_1,
 git_buf *VAR_2,
 const git_buf *VAR_3,
 const git_filter_source *VAR_4)
{
 const unsigned char *VAR_5 = (const unsigned char *)VAR_3->ptr;
 unsigned char *VAR_6;
 size_t VAR_7;

 FUNC_0(VAR_0); FUNC_0(VAR_1);


 FUNC_2(
  0, FUNC_4("hero", FUNC_6(VAR_4), 4));

 if (!VAR_3->size)
  return 0;

 FUNC_3(FUNC_5(VAR_2, VAR_3->size));

 VAR_6 = (unsigned char *)VAR_2->ptr;

 for (VAR_7 = 0; VAR_7 < VAR_3->size; VAR_7++)
  VAR_6[VAR_7] = FUNC_1(VAR_5[VAR_7]);

 VAR_2->size = VAR_3->size;

 return 0;
}
