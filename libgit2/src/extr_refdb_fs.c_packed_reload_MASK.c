
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct packref {char* name; int flags; int peel; int oid; } ;
struct TYPE_7__ {scalar_t__ peeling_mode; int refcache; int gitpath; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_oid ;
struct TYPE_8__ {int size; scalar_t__ ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (void**,int ,char*) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char const*) ;
 int * FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(refdb_fs_backend *VAR_10)
{
 int VAR_11;
 git_buf VAR_12 = VAR_0;
 char *VAR_13, *VAR_14, *VAR_15;

 if (!VAR_10->gitpath)
  return 0;

 VAR_11 = FUNC_7(VAR_10->refcache, &VAR_12);







 if (VAR_11 <= 0) {
  if (VAR_11 == VAR_1) {
   FUNC_6(VAR_10->refcache, 1);
   FUNC_2();
   VAR_11 = 0;
  }
  return VAR_11;
 }



 FUNC_6(VAR_10->refcache, 0);

 VAR_13 = (char *)VAR_12.ptr;
 VAR_14 = VAR_13 + VAR_12.size;

 VAR_10->peeling_mode = VAR_8;

 if (*VAR_13 == '#') {
  static const char *VAR_16 = "# pack-refs with: ";

  if (FUNC_0(VAR_13, VAR_16) == 0) {
   VAR_13 += FUNC_11(VAR_16);
   VAR_15 = FUNC_10(VAR_13, '\n');

   if (!VAR_15)
    goto parse_failed;
   *VAR_15 = '\0';

   if (FUNC_12(VAR_13, " fully-peeled ") != ((void*)0)) {
    VAR_10->peeling_mode = VAR_7;
   } else if (FUNC_12(VAR_13, " peeled ") != ((void*)0)) {
    VAR_10->peeling_mode = VAR_9;
   }

   VAR_13 = VAR_15 + 1;
  }
 }

 while (VAR_13 < VAR_14 && *VAR_13 == '#') {
  if (!(VAR_15 = FUNC_10(VAR_13, '\n')))
   goto parse_failed;
  VAR_13 = VAR_15 + 1;
 }

 while (VAR_13 < VAR_14) {
  struct packref *VAR_17;
  git_oid VAR_18;



  if (FUNC_5(&VAR_18, VAR_13) < 0)
   goto parse_failed;
  VAR_13 += VAR_3;

  if (*VAR_13++ != ' ')
   goto parse_failed;
  if (!(VAR_15 = FUNC_10(VAR_13, '\n')))
   goto parse_failed;
  *VAR_15 = '\0';
  if (VAR_15[-1] == '\r')
   VAR_15[-1] = '\0';

  if (FUNC_8((void **)&VAR_17, VAR_10->refcache, VAR_13) < 0)
   goto parse_failed;
  VAR_13 = VAR_15 + 1;

  FUNC_4(&VAR_17->oid, &VAR_18);



  if (*VAR_13 == '^') {
   if (FUNC_5(&VAR_18, VAR_13 + 1) < 0)
    goto parse_failed;
   VAR_13 += VAR_3 + 1;

   if (VAR_13 < VAR_14) {
    if (!(VAR_15 = FUNC_10(VAR_13, '\n')))
     goto parse_failed;
    VAR_13 = VAR_15 + 1;
   }

   FUNC_4(&VAR_17->peel, &VAR_18);
   VAR_17->flags |= VAR_6;
  }
  else if (VAR_10->peeling_mode == VAR_7 ||
    (VAR_10->peeling_mode == VAR_9 &&
     FUNC_0(VAR_17->name, VAR_4) == 0))
   VAR_17->flags |= VAR_5;
 }

 FUNC_9(VAR_10->refcache);
 FUNC_1(&VAR_12);

 return 0;

parse_failed:
 FUNC_3(VAR_2, "corrupted packed references file");

 FUNC_6(VAR_10->refcache, 0);
 FUNC_9(VAR_10->refcache);
 FUNC_1(&VAR_12);

 return -1;
}
