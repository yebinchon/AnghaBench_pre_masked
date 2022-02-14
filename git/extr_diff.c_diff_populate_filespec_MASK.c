
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct stat {int st_mode; int st_size; } ;
struct repository {int index; } ;
struct diff_filespec {char* data; scalar_t__ size; int should_free; int is_binary; int should_munmap; int oid; int path; int oid_valid; int mode; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct diff_filespec*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ,char*,scalar_t__,struct strbuf*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct diff_filespec*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (struct repository*,int *,size_t*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 char* FUNC_13 (int *,int*,scalar_t__*) ;
 scalar_t__ FUNC_14 (int ,int ,int *,int ) ;
 void* FUNC_15 (struct strbuf*,size_t*) ;
 scalar_t__ FUNC_16 (struct strbuf*,int ,scalar_t__) ;
 int FUNC_17 (int ,int ) ;
 char* FUNC_18 (int *,scalar_t__,int ,int ,int,int ) ;
 scalar_t__ FUNC_19 (int ) ;

int FUNC_20(struct repository *VAR_10,
      struct diff_filespec *VAR_11,
      unsigned int VAR_12)
{
 int VAR_13 = VAR_12 & VAR_1;
 int VAR_14 = 0;
 int VAR_15 = VAR_9;




 if (VAR_15 & VAR_2)
  VAR_15 = VAR_3;

 if (!FUNC_0(VAR_11))
  FUNC_6("internal error: asking to populate invalid file.");
 if (FUNC_1(VAR_11->mode))
  return -1;

 if (VAR_11->data)
  return 0;

 if (VAR_13 && 0 < VAR_11->size)
  return 0;

 if (FUNC_2(VAR_11->mode))
  return FUNC_7(VAR_11, VAR_13);

 if (!VAR_11->oid_valid ||
     FUNC_14(VAR_10->index, VAR_11->path, &VAR_11->oid, 0)) {
  struct strbuf VAR_16 = VAR_7;
  struct stat VAR_17;
  int VAR_18;

  if (FUNC_8(VAR_11->path, &VAR_17) < 0) {
  err_empty:
   VAR_14 = -1;
  empty:
   VAR_11->data = (char *)"";
   VAR_11->size = 0;
   return VAR_14;
  }
  VAR_11->size = FUNC_19(VAR_17.st_size);
  if (!VAR_11->size)
   goto empty;
  if (FUNC_3(VAR_17.st_mode)) {
   struct strbuf VAR_19 = VAR_7;

   if (FUNC_16(&VAR_19, VAR_11->path, VAR_11->size))
    goto err_empty;
   VAR_11->size = VAR_19.len;
   VAR_11->data = FUNC_15(&VAR_19, ((void*)0));
   VAR_11->should_free = 1;
   return 0;
  }







  if (VAR_13 && !FUNC_17(VAR_10->index, VAR_11->path))
   return 0;
  if ((VAR_12 & VAR_0) &&
      VAR_11->size > VAR_8 && VAR_11->is_binary == -1) {
   VAR_11->is_binary = 1;
   return 0;
  }
  VAR_18 = FUNC_12(VAR_11->path, VAR_5);
  if (VAR_18 < 0)
   goto err_empty;
  VAR_11->data = FUNC_18(((void*)0), VAR_11->size, VAR_6, VAR_4, VAR_18, 0);
  FUNC_4(VAR_18);
  VAR_11->should_munmap = 1;




  if (FUNC_5(VAR_10->index, VAR_11->path, VAR_11->data, VAR_11->size, &VAR_16, VAR_15)) {
   size_t VAR_20 = 0;
   FUNC_9(VAR_11->data, VAR_11->size);
   VAR_11->should_munmap = 0;
   VAR_11->data = FUNC_15(&VAR_16, &VAR_20);
   VAR_11->size = VAR_20;
   VAR_11->should_free = 1;
  }
 }
 else {
  enum object_type VAR_21;
  if (VAR_13 || (VAR_12 & VAR_0)) {
   VAR_21 = FUNC_10(VAR_10, &VAR_11->oid, &VAR_11->size);
   if (VAR_21 < 0)
    FUNC_6("unable to read %s",
        FUNC_11(&VAR_11->oid));
   if (VAR_13)
    return 0;
   if (VAR_11->size > VAR_8 && VAR_11->is_binary == -1) {
    VAR_11->is_binary = 1;
    return 0;
   }
  }
  VAR_11->data = FUNC_13(&VAR_11->oid, &VAR_21, &VAR_11->size);
  if (!VAR_11->data)
   FUNC_6("unable to read %s", FUNC_11(&VAR_11->oid));
  VAR_11->should_free = 1;
 }
 return 0;
}
