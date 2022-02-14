
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct lock_file {int dummy; } ;
struct index_state {scalar_t__ cache_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct lock_file*,char const*,int ) ;
 int FUNC_3 (struct index_state*,char const*,int ) ;
 int FUNC_4 (struct lock_file*) ;
 int FUNC_5 (struct object_id*,struct index_state*,int,int,char const*) ;
 int FUNC_6 (struct index_state*,struct lock_file*,int ) ;

int FUNC_7(struct object_id *VAR_5, struct index_state *VAR_6, const char *VAR_7, int VAR_8, const char *VAR_9)
{
 int VAR_10, VAR_11;
 struct lock_file VAR_12 = VAR_2;
 int VAR_13;

 FUNC_2(&VAR_12, VAR_7, VAR_1);

 VAR_10 = FUNC_3(VAR_6, VAR_7, FUNC_1());
 if (VAR_10 < 0) {
  VAR_13 = VAR_4;
  goto out;
 }

 VAR_11 = !(VAR_8 & VAR_3) &&
      VAR_6->cache_tree &&
      FUNC_0(VAR_6->cache_tree);

 VAR_13 = FUNC_5(VAR_5, VAR_6, VAR_11, VAR_8,
        VAR_9);
 if (!VAR_13 && !VAR_11) {
  FUNC_6(VAR_6, &VAR_12, VAR_0);






 }

out:
 FUNC_4(&VAR_12);
 return VAR_13;
}
