
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct checkout {int dummy; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry*,struct checkout const*,int *,int *) ;
 int FUNC_1 (struct cache_entry*) ;
 struct cache_entry* FUNC_2 (unsigned int,struct object_id*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_0, struct object_id *VAR_1,
    const char *VAR_2, const struct checkout *VAR_3)
{
 struct cache_entry *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, 0);
 VAR_5 = FUNC_0(VAR_4, VAR_3, ((void*)0), ((void*)0));

 FUNC_1(VAR_4);
 return VAR_5;
}
