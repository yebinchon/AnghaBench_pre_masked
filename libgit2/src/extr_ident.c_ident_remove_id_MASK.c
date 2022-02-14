
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t) ;
 int FUNC_3 (TYPE_1__*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const**,char const**,char*,int ) ;

__attribute__((used)) static int FUNC_5(
 git_buf *VAR_1, const git_buf *VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5 = VAR_2->ptr + VAR_2->size;
 size_t VAR_6;

 if (FUNC_4(&VAR_3, &VAR_4, VAR_2->ptr, VAR_2->size) < 0)
  return VAR_0;

 VAR_6 = (size_t)(VAR_3 - VAR_2->ptr) +
  4 + (size_t)(VAR_5 - VAR_4);

 if (FUNC_0(VAR_1, VAR_6) < 0)
  return -1;

 FUNC_3(VAR_1, VAR_2->ptr, (size_t)(VAR_3 - VAR_2->ptr));
 FUNC_2(VAR_1, "$Id$", 4);
 FUNC_2(VAR_1, VAR_4, (size_t)(VAR_5 - VAR_4));

 return FUNC_1(VAR_1) ? -1 : 0;
}
