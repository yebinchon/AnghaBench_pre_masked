
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,char const*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t,int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static bool FUNC_6(
 git_buf *VAR_0,
 const char *VAR_1,
 bool (*VAR_2)(const char *))
{
 bool VAR_3;
 size_t VAR_4 = FUNC_2(VAR_0);
 size_t VAR_5 = FUNC_5(VAR_1);
 size_t VAR_6;


 if (FUNC_0(&VAR_6, VAR_4, VAR_5) ||
  FUNC_0(&VAR_6, VAR_6, 2) ||
  FUNC_4(VAR_0, VAR_6, 0) < 0)
  return 0;


 if (FUNC_1(VAR_0, VAR_0->ptr, VAR_1) < 0)
  return 0;

 VAR_3 = VAR_2(VAR_0->ptr);


 FUNC_3(VAR_0, VAR_4);
 return VAR_3;
}
