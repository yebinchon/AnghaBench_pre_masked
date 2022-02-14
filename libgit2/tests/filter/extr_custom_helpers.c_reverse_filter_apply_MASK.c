
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* git_filter_source ;
typedef void* const git_filter ;
struct TYPE_5__ {int size; scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (void* const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (void* const*) ;

int FUNC_6(
 git_filter *VAR_0,
 void **VAR_1,
 git_buf *VAR_2,
 const git_buf *VAR_3,
 const git_filter_source *VAR_4)
{
 const unsigned char *VAR_5 = (const unsigned char *)VAR_3->ptr;
 const unsigned char *VAR_6 = VAR_5 + VAR_3->size;
 unsigned char *VAR_7;

 FUNC_0(VAR_0); FUNC_0(VAR_1); FUNC_0(VAR_4);


 FUNC_1(
  0, FUNC_3("hero", FUNC_5(VAR_4), 4));

 if (!VAR_3->size)
  return 0;

 FUNC_2(FUNC_4(VAR_2, VAR_3->size));

 VAR_7 = (unsigned char *)VAR_2->ptr + VAR_3->size - 1;

 while (VAR_5 < VAR_6)
  *VAR_7-- = *VAR_5++;

 VAR_2->size = VAR_3->size;

 return 0;
}
