
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {size_t short_oid_len; int found; scalar_t__ res_oid; void* dir_len; scalar_t__ short_oid; } ;
typedef TYPE_1__ loose_locate_object_state ;
struct TYPE_15__ {char* objects_dir; } ;
typedef TYPE_2__ loose_backend ;
typedef int git_oid ;
struct TYPE_16__ {char* ptr; int size; } ;
typedef TYPE_3__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*,size_t) ;
 void* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,char*,size_t) ;
 int FUNC_5 (TYPE_3__*,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int const*,size_t) ;
 int FUNC_8 (char*,int const*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (char*,int *) ;
 int FUNC_11 (TYPE_3__*,int ,int ,TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_3__*) ;
 size_t FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(
 git_buf *VAR_3,
 git_oid *VAR_4,
 loose_backend *VAR_5,
 const git_oid *VAR_6,
 size_t VAR_7)
{
 char *VAR_8 = VAR_5->objects_dir;
 size_t VAR_9 = FUNC_14(VAR_8), VAR_10;
 loose_locate_object_state VAR_11;
 int VAR_12;


 FUNC_0(&VAR_10, VAR_9, VAR_1);
 FUNC_0(&VAR_10, VAR_10, 3);
 if (FUNC_1(VAR_3, VAR_10) < 0)
  return -1;

 FUNC_4(VAR_3, VAR_8, VAR_9);
 FUNC_13(VAR_3);


 VAR_9 = FUNC_2(VAR_3);


 FUNC_8((char *)VAR_11.short_oid, VAR_6);


 if (FUNC_3(VAR_3, (char *)VAR_11.short_oid, 3) < 0)
  return -1;
 VAR_3->ptr[VAR_3->size - 1] = '/';


 if (FUNC_12(VAR_3->ptr) == 0)
  return FUNC_7("no matching loose object for prefix",
   VAR_6, VAR_7);

 VAR_11.dir_len = FUNC_2(VAR_3);
 VAR_11.short_oid_len = VAR_7;
 VAR_11.found = 0;


 VAR_12 = FUNC_11(
  VAR_3, 0, VAR_2, &VAR_11);
 if (VAR_12 < 0 && VAR_12 != VAR_0)
  return VAR_12;

 if (!VAR_11.found)
  return FUNC_7("no matching loose object for prefix",
   VAR_6, VAR_7);

 if (VAR_11.found > 1)
  return FUNC_6("multiple matches in loose objects");


 VAR_12 = FUNC_9(VAR_4, (char *)VAR_11.res_oid);
 if (VAR_12)
  return VAR_12;


 FUNC_0(&VAR_10, VAR_9, VAR_1);
 FUNC_0(&VAR_10, VAR_10, 2);

 FUNC_5(VAR_3, VAR_9);
 if (FUNC_1(VAR_3, VAR_10) < 0)
  return -1;

 FUNC_10(VAR_3->ptr + VAR_9, VAR_4);

 VAR_3->size += VAR_1 + 1;
 VAR_3->ptr[VAR_3->size] = '\0';

 return 0;
}
