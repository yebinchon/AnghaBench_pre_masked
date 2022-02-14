
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_write_stack {char const* path; } ;



__attribute__((used)) static inline int FUNC_0(struct tree_write_stack *VAR_0,
  const char *VAR_1)
{
 return VAR_1[0] == VAR_0->path[0] &&
  VAR_1[1] == VAR_0->path[1] &&
  VAR_1[2] == '/';
}
