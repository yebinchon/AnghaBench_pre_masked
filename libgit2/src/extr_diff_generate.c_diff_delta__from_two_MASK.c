
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int git_oid ;
struct TYPE_13__ {char* path; int id; int file_size; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_diff_generated ;
struct TYPE_12__ {int flags; void* mode; int size; void* id_abbrev; int id; } ;
struct TYPE_11__ {int flags; void* id_abbrev; int id; void* mode; int size; } ;
struct TYPE_14__ {int nfiles; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_4__ git_diff_delta ;
typedef scalar_t__ git_delta_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*) ;
 void* VAR_5 ;
 TYPE_4__* FUNC_3 (int *,scalar_t__,char const*) ;
 int FUNC_4 (int *,TYPE_4__*,char const*) ;
 int FUNC_5 (TYPE_3__ const*) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
 git_diff_generated *VAR_6,
 git_delta_t VAR_7,
 const git_index_entry *VAR_8,
 uint32_t VAR_9,
 const git_index_entry *VAR_10,
 uint32_t VAR_11,
 const git_oid *VAR_12,
 const char *VAR_13)
{
 const git_oid *VAR_14 = &VAR_8->id;
 git_diff_delta *VAR_15;
 const char *VAR_16 = VAR_8->path;

 if (VAR_7 == VAR_0 &&
  FUNC_0(VAR_6, VAR_3))
  return 0;

 if (!VAR_12)
  VAR_12 = &VAR_10->id;

 if (FUNC_1(VAR_6, VAR_4)) {
  uint32_t VAR_17 = VAR_9;
  const git_index_entry *VAR_18 = VAR_8;
  const git_oid *VAR_19 = VAR_14;

  VAR_8 = VAR_10;
  VAR_10 = VAR_18;
  VAR_9 = VAR_11;
  VAR_11 = VAR_17;
  VAR_14 = VAR_12;
  VAR_12 = VAR_19;
 }

 VAR_15 = FUNC_3(VAR_6, VAR_7, VAR_16);
 FUNC_2(VAR_15);
 VAR_15->nfiles = 2;

 if (!FUNC_5(VAR_8)) {
  VAR_15->old_file.size = VAR_8->file_size;
  VAR_15->old_file.mode = VAR_9;
  FUNC_6(&VAR_15->old_file.id, VAR_14);
  VAR_15->old_file.id_abbrev = VAR_5;
  VAR_15->old_file.flags |= VAR_2 |
   VAR_1;
 }

 if (!FUNC_5(VAR_10)) {
  FUNC_6(&VAR_15->new_file.id, VAR_12);
  VAR_15->new_file.id_abbrev = VAR_5;
  VAR_15->new_file.size = VAR_10->file_size;
  VAR_15->new_file.mode = VAR_11;
  VAR_15->old_file.flags |= VAR_1;
  VAR_15->new_file.flags |= VAR_1;

  if (!FUNC_7(&VAR_10->id))
   VAR_15->new_file.flags |= VAR_2;
 }

 return FUNC_4(VAR_6, VAR_15, VAR_13);
}
