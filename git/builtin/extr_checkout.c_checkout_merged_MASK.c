
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int threeway ;
struct object_id {int dummy; } ;
struct checkout {int istate; } ;
struct cache_entry {char* name; int ce_mode; int oid; } ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ mmfile_t ;
struct TYPE_9__ {int ptr; int size; } ;
typedef TYPE_2__ mmbuffer_t ;


 int FUNC_0 (char*) ;
 struct cache_entry** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_entry*,struct checkout const*,int *,int*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (struct cache_entry*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct object_id*) ;
 int FUNC_9 (TYPE_2__*,char const*,TYPE_1__*,char*,TYPE_1__*,char*,TYPE_1__*,char*,int ,int *) ;
 struct cache_entry* FUNC_10 (unsigned int,struct object_id*,char const*,int) ;
 int FUNC_11 (struct object_id*,int ,int) ;
 int FUNC_12 (struct object_id*,int *) ;
 int FUNC_13 (TYPE_1__*,struct object_id*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 scalar_t__ FUNC_15 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_16(int VAR_3, const struct checkout *VAR_4, int *VAR_5)
{
 struct cache_entry *VAR_6 = VAR_0[VAR_3];
 const char *VAR_7 = VAR_6->name;
 mmfile_t VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct object_id VAR_12;
 mmbuffer_t VAR_13;
 struct object_id VAR_14[3];
 unsigned VAR_15 = 0;

 FUNC_11(VAR_14, 0, sizeof(VAR_14));
 while (VAR_3 < VAR_1) {
  int VAR_16;
  VAR_16 = FUNC_1(VAR_6);
  if (!VAR_16 || FUNC_14(VAR_7, VAR_6->name))
   break;
  FUNC_12(&VAR_14[VAR_16 - 1], &VAR_6->oid);
  if (VAR_16 == 2)
   VAR_15 = FUNC_3(VAR_6->ce_mode);
  VAR_3++;
  VAR_6 = VAR_0[VAR_3];
 }
 if (FUNC_8(&VAR_14[1]) || FUNC_8(&VAR_14[2]))
  return FUNC_6(FUNC_0("path '%s' does not have necessary versions"), VAR_7);

 FUNC_13(&VAR_8, &VAR_14[0]);
 FUNC_13(&VAR_9, &VAR_14[1]);
 FUNC_13(&VAR_10, &VAR_14[2]);





 VAR_11 = FUNC_9(&VAR_13, VAR_7, &VAR_8, "base",
     &VAR_9, "ours", &VAR_10, "theirs",
     VAR_4->istate, ((void*)0));
 FUNC_7(VAR_8.ptr);
 FUNC_7(VAR_9.ptr);
 FUNC_7(VAR_10.ptr);
 if (VAR_11 < 0 || !VAR_13.ptr) {
  FUNC_7(VAR_13.ptr);
  return FUNC_6(FUNC_0("path '%s': cannot merge"), VAR_7);
 }
 if (FUNC_15(VAR_13.ptr, VAR_13.size, VAR_2, &VAR_12))
  FUNC_4(FUNC_0("Unable to add merge result for '%s'"), VAR_7);
 FUNC_7(VAR_13.ptr);
 VAR_6 = FUNC_10(VAR_15, &VAR_12, VAR_7, 2);
 if (!VAR_6)
  FUNC_4(FUNC_0("make_cache_entry failed for path '%s'"), VAR_7);
 VAR_11 = FUNC_2(VAR_6, VAR_4, ((void*)0), VAR_5);
 FUNC_5(VAR_6);
 return VAR_11;
}
