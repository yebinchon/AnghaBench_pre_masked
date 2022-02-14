
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
struct diff_options {int dummy; } ;
struct cache_entry {unsigned int ce_mode; struct object_id oid; } ;


 unsigned int FUNC_0 (struct cache_entry const*,int ) ;
 int FUNC_1 (struct cache_entry const*) ;
 int FUNC_2 (struct cache_entry const*,struct stat*) ;
 int FUNC_3 (struct diff_options*,struct cache_entry const*,struct stat*,int ,unsigned int*) ;
 struct object_id VAR_0 ;

__attribute__((used)) static int FUNC_4(const struct cache_entry *VAR_1,
    const struct object_id **VAR_2,
    unsigned int *VAR_3,
    int VAR_4, int VAR_5,
    unsigned *VAR_6, struct diff_options *VAR_7)
{
 const struct object_id *VAR_8 = &VAR_1->oid;
 unsigned int VAR_9 = VAR_1->ce_mode;

 if (!VAR_4 && !FUNC_1(VAR_1)) {
  int VAR_10;
  struct stat VAR_11;
  VAR_10 = FUNC_2(VAR_1, &VAR_11);
  if (VAR_10 < 0)
   return -1;
  else if (VAR_10) {
   if (VAR_5) {
    *VAR_2 = VAR_8;
    *VAR_3 = VAR_9;
    return 0;
   }
   return -1;
  }
  VAR_10 = FUNC_3(VAR_7, VAR_1, &VAR_11,
          0, VAR_6);
  if (VAR_10) {
   VAR_9 = FUNC_0(VAR_1, VAR_11.st_mode);
   VAR_8 = &VAR_0;
  }
 }

 *VAR_2 = VAR_8;
 *VAR_3 = VAR_9;
 return 0;
}
