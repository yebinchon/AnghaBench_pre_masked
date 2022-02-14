
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_index {struct index_state* base; int base_oid; } ;
struct index_state {int cache_nr; int oid; struct split_index* split_index; scalar_t__ initialized; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (struct index_state*) ;
 int FUNC_3 (struct index_state*,char const*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct index_state*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct index_state*) ;
 int VAR_0 ;
 int FUNC_11 (char*,char*,int ,char*,char const*) ;
 int FUNC_12 (char*,char*,int ,char*,char const*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char const*) ;
 struct index_state* FUNC_15 (int,int) ;
 char* FUNC_16 (char*,char const*,char*) ;

int FUNC_17(struct index_state *VAR_1, const char *VAR_2,
      const char *VAR_3)
{
 struct split_index *VAR_4;
 int VAR_5;
 char *VAR_6;
 char *VAR_7;


 if (VAR_1->initialized)
  return VAR_1->cache_nr;





 FUNC_11("index", "do_read_index", VAR_0,
       "%s", VAR_2);
 FUNC_13();
 VAR_5 = FUNC_3(VAR_1, VAR_2, 0);
 FUNC_14("read cache %s", VAR_2);
 FUNC_12("index", "do_read_index", VAR_0,
       "%s", VAR_2);

 VAR_4 = VAR_1->split_index;
 if (!VAR_4 || FUNC_6(&VAR_4->base_oid)) {
  FUNC_10(VAR_1);
  return VAR_5;
 }

 FUNC_13();
 if (VAR_4->base)
  FUNC_2(VAR_4->base);
 else
  VAR_4->base = FUNC_15(1, sizeof(*VAR_4->base));

 VAR_6 = FUNC_8(&VAR_4->base_oid);
 VAR_7 = FUNC_16("%s/sharedindex.%s", VAR_3, VAR_6);
 FUNC_11("index", "shared/do_read_index",
       VAR_0, "%s", VAR_7);
 VAR_5 = FUNC_3(VAR_4->base, VAR_7, 1);
 FUNC_12("index", "shared/do_read_index",
       VAR_0, "%s", VAR_7);
 if (!FUNC_9(&VAR_4->base_oid, &VAR_4->base->oid))
  FUNC_1(FUNC_0("broken index, expect %s in %s, got %s"),
      VAR_6, VAR_7,
      FUNC_8(&VAR_4->base->oid));

 FUNC_5(VAR_7, 0);
 FUNC_7(VAR_1);
 FUNC_10(VAR_1);
 FUNC_14("read cache %s", VAR_7);
 FUNC_4(VAR_7);
 return VAR_5;
}
