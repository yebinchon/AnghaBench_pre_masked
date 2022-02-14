
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; scalar_t__ len; } ;
struct stat {unsigned long st_size; } ;
struct repository {int dummy; } ;
struct object_info {int* typep; unsigned long* sizep; unsigned long* disk_sizep; int whence; int * contentp; int type_name; scalar_t__ delta_base_sha1; } ;
struct object_id {int dummy; } ;
typedef int hdr ;
typedef int git_zstream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (struct repository*,struct object_id const*,unsigned long*) ;
 int FUNC_5 (void*,unsigned long) ;
 int FUNC_6 (struct object_id const*) ;
 int FUNC_7 (char*,struct object_info*,int) ;
 scalar_t__ FUNC_8 (struct repository*,struct object_id const*) ;
 scalar_t__ FUNC_9 (struct repository*,struct object_id const*,struct stat*,char const**) ;
 int FUNC_10 (struct strbuf*) ;
 scalar_t__ FUNC_11 (int *,void*,unsigned long,char*,int) ;
 scalar_t__ FUNC_12 (int *,void*,unsigned long,char*,int,struct strbuf*) ;
 int FUNC_13 (int *,char*,unsigned long,struct object_id const*) ;

__attribute__((used)) static int FUNC_14(struct repository *VAR_5,
        const struct object_id *VAR_6,
        struct object_info *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10;
 void *VAR_11;
 git_zstream VAR_12;
 char VAR_13[VAR_0];
 struct strbuf VAR_14 = VAR_4;
 unsigned long VAR_15;

 if (VAR_7->delta_base_sha1)
  FUNC_3(VAR_7->delta_base_sha1);
 if (!VAR_7->typep && !VAR_7->type_name && !VAR_7->sizep && !VAR_7->contentp) {
  const char *VAR_16;
  struct stat VAR_17;
  if (!VAR_7->disk_sizep && (VAR_8 & VAR_2))
   return FUNC_8(VAR_5, VAR_6) ? 0 : -1;
  if (FUNC_9(VAR_5, VAR_6, &VAR_17, &VAR_16) < 0)
   return -1;
  if (VAR_7->disk_sizep)
   *VAR_7->disk_sizep = VAR_17.st_size;
  return 0;
 }

 VAR_11 = FUNC_4(VAR_5, VAR_6, &VAR_10);
 if (!VAR_11)
  return -1;

 if (!VAR_7->sizep)
  VAR_7->sizep = &VAR_15;

 if (VAR_7->disk_sizep)
  *VAR_7->disk_sizep = VAR_10;
 if ((VAR_8 & VAR_1)) {
  if (FUNC_12(&VAR_12, VAR_11, VAR_10, VAR_13, sizeof(VAR_13), &VAR_14) < 0)
   VAR_9 = FUNC_1(FUNC_0("unable to unpack %s header with --allow-unknown-type"),
           FUNC_6(VAR_6));
 } else if (FUNC_11(&VAR_12, VAR_11, VAR_10, VAR_13, sizeof(VAR_13)) < 0)
  VAR_9 = FUNC_1(FUNC_0("unable to unpack %s header"),
          FUNC_6(VAR_6));
 if (VAR_9 < 0)
  ;
 else if (VAR_14.len) {
  if ((VAR_9 = FUNC_7(VAR_14.buf, VAR_7, VAR_8)) < 0)
   VAR_9 = FUNC_1(FUNC_0("unable to parse %s header with --allow-unknown-type"),
           FUNC_6(VAR_6));
 } else if ((VAR_9 = FUNC_7(VAR_13, VAR_7, VAR_8)) < 0)
  VAR_9 = FUNC_1(FUNC_0("unable to parse %s header"), FUNC_6(VAR_6));

 if (VAR_9 >= 0 && VAR_7->contentp) {
  *VAR_7->contentp = FUNC_13(&VAR_12, VAR_13,
        *VAR_7->sizep, VAR_6);
  if (!*VAR_7->contentp) {
   FUNC_2(&VAR_12);
   VAR_9 = -1;
  }
 } else
  FUNC_2(&VAR_12);

 FUNC_5(VAR_11, VAR_10);
 if (VAR_9 && VAR_7->typep)
  *VAR_7->typep = VAR_9;
 if (VAR_7->sizep == &VAR_15)
  VAR_7->sizep = ((void*)0);
 FUNC_10(&VAR_14);
 VAR_7->whence = VAR_3;
 return (VAR_9 < 0) ? VAR_9 : 0;
}
