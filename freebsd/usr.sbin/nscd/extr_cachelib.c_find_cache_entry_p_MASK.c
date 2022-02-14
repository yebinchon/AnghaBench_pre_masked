
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry_ {int dummy; } ;
struct cache_ {int entries_size; int entries; } ;


 scalar_t__ FUNC_0 (char const*,int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct cache_entry_ **
FUNC_1(struct cache_ *VAR_1, const char *VAR_2)
{

 return ((struct cache_entry_ **)(FUNC_0(VAR_2, VAR_1->entries,
  VAR_1->entries_size, sizeof(struct cache_entry_ *),
  VAR_0)));
}
