
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ref_cache* cache; } ;
struct TYPE_4__ {TYPE_1__ subdir; } ;
struct ref_entry {int flag; TYPE_2__ u; } ;
struct ref_cache {int dummy; } ;


 int FUNC_0 (struct ref_entry*,int ,char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct ref_entry *FUNC_1(struct ref_cache *VAR_3,
       const char *VAR_4, size_t VAR_5,
       int VAR_6)
{
 struct ref_entry *VAR_7;

 FUNC_0(VAR_7, VAR_2, VAR_4, VAR_5);
 VAR_7->u.subdir.cache = VAR_3;
 VAR_7->flag = VAR_0 | (VAR_6 ? VAR_1 : 0);
 return VAR_7;
}
