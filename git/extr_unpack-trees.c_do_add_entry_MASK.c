
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int result; } ;
struct cache_entry {unsigned int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,struct cache_entry*,int) ;

__attribute__((used)) static int FUNC_1(struct unpack_trees_options *VAR_5, struct cache_entry *VAR_6,
    unsigned int VAR_7, unsigned int VAR_8)
{
 VAR_8 |= VAR_2;

 if (VAR_7 & VAR_3)
  VAR_7 |= VAR_4;

 VAR_6->ce_flags = (VAR_6->ce_flags & ~VAR_8) | VAR_7;
 return FUNC_0(&VAR_5->result, VAR_6,
          VAR_0 | VAR_1);
}
