
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {scalar_t__ reset; } ;
struct submodule {int dummy; } ;
struct cache_entry {int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct unpack_trees_options*,int ,int ) ;
 struct submodule* FUNC_1 (struct cache_entry const*) ;
 scalar_t__ FUNC_2 (int ,char const*,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(const struct cache_entry *VAR_3,
         const char *VAR_4,
         const char *VAR_5,
         struct unpack_trees_options *VAR_6)
{
 unsigned VAR_7 = VAR_1;
 const struct submodule *VAR_8 = FUNC_1(VAR_3);

 if (!VAR_8)
  return 0;

 if (VAR_6->reset)
  VAR_7 |= VAR_2;

 if (FUNC_2(VAR_3->name, VAR_4, VAR_5, VAR_7))
  return FUNC_0(VAR_6, VAR_0, VAR_3->name);
 return 0;
}
