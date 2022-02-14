
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_size; } ;
struct pattern_list {int dummy; } ;
struct oid_stat {int valid; int stat; int oid; } ;
struct index_state {TYPE_2__** cache; } ;
struct TYPE_5__ {int oid; } ;
struct TYPE_4__ {int * empty_blob; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char const*,int,struct pattern_list*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct stat*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int FUNC_7 (char*,size_t,char*,int *) ;
 int FUNC_8 (struct index_state*,char const*,int ) ;
 int FUNC_9 (struct index_state*,int *,struct stat*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char const*,int ) ;
 size_t FUNC_12 (int,char*,size_t) ;
 int FUNC_13 (struct index_state*,char const*,size_t*,char**,struct oid_stat*) ;
 int FUNC_14 (char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (struct index_state*,char const*) ;
 char* FUNC_17 (size_t) ;
 size_t FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(const char *VAR_2, const char *VAR_3, int VAR_4,
   struct pattern_list *VAR_5, struct index_state *VAR_6,
   struct oid_stat *VAR_7)
{
 struct stat VAR_8;
 int VAR_9;
 int VAR_10;
 size_t VAR_11 = 0;
 char *VAR_12;

 VAR_10 = FUNC_11(VAR_2, VAR_0);
 if (VAR_10 < 0 || FUNC_6(VAR_10, &VAR_8) < 0) {
  if (VAR_10 < 0)
   FUNC_15(VAR_2);
  else
   FUNC_3(VAR_10);
  if (!VAR_6)
   return -1;
  VAR_9 = FUNC_13(VAR_6, VAR_2,
             &VAR_11, &VAR_12,
             VAR_7);
  if (VAR_9 != 1)
   return VAR_9;
 } else {
  VAR_11 = FUNC_18(VAR_8.st_size);
  if (VAR_11 == 0) {
   if (VAR_7) {
    FUNC_4(&VAR_7->stat, &VAR_8);
    FUNC_10(&VAR_7->oid, VAR_1->empty_blob);
    VAR_7->valid = 1;
   }
   FUNC_3(VAR_10);
   return 0;
  }
  VAR_12 = FUNC_17(VAR_11);
  if (FUNC_12(VAR_10, VAR_12, VAR_11) != VAR_11) {
   FUNC_5(VAR_12);
   FUNC_3(VAR_10);
   return -1;
  }
  VAR_12[VAR_11++] = '\n';
  FUNC_3(VAR_10);
  if (VAR_7) {
   int VAR_13;
   if (VAR_7->valid &&
       !FUNC_9(VAR_6, &VAR_7->stat, &VAR_8))
    ;
   else if (VAR_6 &&
     (VAR_13 = FUNC_8(VAR_6, VAR_2, FUNC_14(VAR_2))) >= 0 &&
     !FUNC_1(VAR_6->cache[VAR_13]) &&
     FUNC_2(VAR_6->cache[VAR_13]) &&
     !FUNC_16(VAR_6, VAR_2))
    FUNC_10(&VAR_7->oid,
           &VAR_6->cache[VAR_13]->oid);
   else
    FUNC_7(VAR_12, VAR_11, "blob",
       &VAR_7->oid);
   FUNC_4(&VAR_7->stat, &VAR_8);
   VAR_7->valid = 1;
  }
 }

 FUNC_0(VAR_12, VAR_11, VAR_3, VAR_4, VAR_5);
 return 0;
}
