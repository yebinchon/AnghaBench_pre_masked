
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;
struct stat {int dummy; } ;
struct checkout {int dummy; } ;
struct cache_entry {int oid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct checkout const*,struct stat*) ;
 int FUNC_2 (char*,struct cache_entry const*,int) ;
 int FUNC_3 (int,int *,struct stream_filter*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const struct cache_entry *VAR_0, char *VAR_1,
     struct stream_filter *VAR_2,
     const struct checkout *VAR_3, int VAR_4,
     int *VAR_5, struct stat *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_0, VAR_4);
 if (VAR_8 < 0)
  return -1;

 VAR_7 |= FUNC_3(VAR_8, &VAR_0->oid, VAR_2, 1);
 *VAR_5 = FUNC_1(VAR_8, VAR_3, VAR_6);
 VAR_7 |= FUNC_0(VAR_8);

 if (VAR_7)
  FUNC_4(VAR_1);
 return VAR_7;
}
