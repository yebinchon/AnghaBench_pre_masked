
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_iterator {int dummy; } ;
struct cache_ref_iterator {char* levels; scalar_t__ prefix; } ;


 int VAR_0 ;
 int FUNC_0 (struct ref_iterator*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct ref_iterator *VAR_1)
{
 struct cache_ref_iterator *VAR_2 =
  (struct cache_ref_iterator *)VAR_1;

 FUNC_1((char *)VAR_2->prefix);
 FUNC_1(VAR_2->levels);
 FUNC_0(VAR_1);
 return VAR_0;
}
