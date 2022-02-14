
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_mode; } ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct index_state*,struct cache_entry const*,struct stat*) ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct cache_entry const*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct index_state *VAR_3,
    const struct cache_entry *VAR_4,
    struct stat *VAR_5)
{
 switch (VAR_5->st_mode & VAR_1) {
 case 128:
  if (FUNC_1(VAR_3, VAR_4, VAR_5))
   return VAR_0;
  break;
 case 129:
  if (FUNC_3(VAR_4, FUNC_4(VAR_5->st_size)))
   return VAR_0;
  break;
 case 130:
  if (FUNC_0(VAR_4->ce_mode))
   return FUNC_2(VAR_4) ? VAR_0 : 0;

 default:
  return VAR_2;
 }
 return 0;
}
