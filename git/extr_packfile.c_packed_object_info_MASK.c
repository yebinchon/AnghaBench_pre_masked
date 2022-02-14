
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revindex_entry {scalar_t__ offset; } ;
struct repository {int dummy; } ;
struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
struct object_info {unsigned long* sizep; int* typep; int whence; scalar_t__ delta_base_sha1; scalar_t__ type_name; scalar_t__* disk_sizep; int * contentp; } ;
typedef scalar_t__ off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct repository*,struct packed_git*,scalar_t__,unsigned long*,int*) ;
 struct revindex_entry* FUNC_1 (struct packed_git*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct packed_git*,struct pack_window**,scalar_t__*,int,scalar_t__) ;
 unsigned char* FUNC_3 (struct packed_git*,struct pack_window**,scalar_t__,int,scalar_t__) ;
 unsigned long FUNC_4 (struct packed_git*,struct pack_window**,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,unsigned char const*) ;
 scalar_t__ FUNC_7 (struct packed_git*,scalar_t__) ;
 int FUNC_8 (struct repository*,struct packed_git*,scalar_t__,int,struct pack_window**,scalar_t__) ;
 int FUNC_9 (scalar_t__,char const*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (struct packed_git*,struct pack_window**,scalar_t__*,unsigned long*) ;
 int FUNC_12 (struct pack_window**) ;

int FUNC_13(struct repository *VAR_5, struct packed_git *VAR_6,
         off_t VAR_7, struct object_info *VAR_8)
{
 struct pack_window *VAR_9 = ((void*)0);
 unsigned long VAR_10;
 off_t VAR_11 = VAR_7;
 enum object_type VAR_12;





 if (VAR_8->contentp) {
  *VAR_8->contentp = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8->sizep,
            &VAR_12);
  if (!*VAR_8->contentp)
   VAR_12 = VAR_0;
 } else {
  VAR_12 = FUNC_11(VAR_6, &VAR_9, &VAR_11, &VAR_10);
 }

 if (!VAR_8->contentp && VAR_8->sizep) {
  if (VAR_12 == VAR_1 || VAR_12 == VAR_2) {
   off_t VAR_13 = VAR_11;
   off_t VAR_14 = FUNC_2(VAR_6, &VAR_9, &VAR_13,
          VAR_12, VAR_7);
   if (!VAR_14) {
    VAR_12 = VAR_0;
    goto out;
   }
   *VAR_8->sizep = FUNC_4(VAR_6, &VAR_9, VAR_13);
   if (*VAR_8->sizep == 0) {
    VAR_12 = VAR_0;
    goto out;
   }
  } else {
   *VAR_8->sizep = VAR_10;
  }
 }

 if (VAR_8->disk_sizep) {
  struct revindex_entry *VAR_15 = FUNC_1(VAR_6, VAR_7);
  *VAR_8->disk_sizep = VAR_15[1].offset - VAR_7;
 }

 if (VAR_8->typep || VAR_8->type_name) {
  enum object_type VAR_16;
  VAR_16 = FUNC_8(VAR_5, VAR_6, VAR_7,
          VAR_12, &VAR_9, VAR_11);
  if (VAR_8->typep)
   *VAR_8->typep = VAR_16;
  if (VAR_8->type_name) {
   const char *VAR_17 = FUNC_10(VAR_16);
   if (VAR_17)
    FUNC_9(VAR_8->type_name, VAR_17);
  }
  if (VAR_16 < 0) {
   VAR_12 = VAR_0;
   goto out;
  }
 }

 if (VAR_8->delta_base_sha1) {
  if (VAR_12 == VAR_1 || VAR_12 == VAR_2) {
   const unsigned char *VAR_18;

   VAR_18 = FUNC_3(VAR_6, &VAR_9, VAR_11,
         VAR_12, VAR_7);
   if (!VAR_18) {
    VAR_12 = VAR_0;
    goto out;
   }

   FUNC_6(VAR_8->delta_base_sha1, VAR_18);
  } else
   FUNC_5(VAR_8->delta_base_sha1);
 }

 VAR_8->whence = FUNC_7(VAR_6, VAR_7) ? VAR_3 :
         VAR_4;

out:
 FUNC_12(&VAR_9);
 return VAR_12;
}
