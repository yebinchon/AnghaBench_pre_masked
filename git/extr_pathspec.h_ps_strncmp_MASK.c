
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int magic; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static inline int FUNC_2(const struct pathspec_item *VAR_1,
        const char *VAR_2, const char *VAR_3, size_t VAR_4)
{
 if (VAR_1->magic & VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4);
}
