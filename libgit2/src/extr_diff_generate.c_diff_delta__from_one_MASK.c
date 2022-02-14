
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int flags; int id; int file_size; int mode; int path; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_diff_generated ;
struct TYPE_12__ {int flags; int id; void* id_abbrev; int size; int mode; } ;
struct TYPE_11__ {int flags; void* id_abbrev; int id; int size; int mode; } ;
struct TYPE_14__ {int nfiles; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_4__ git_diff_delta ;
typedef scalar_t__ git_delta_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int *,TYPE_4__*,char const*) ;
 int FUNC_6 (char const**,int *,TYPE_3__ const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
 git_diff_generated *VAR_12,
 git_delta_t VAR_13,
 const git_index_entry *VAR_14,
 const git_index_entry *VAR_15)
{
 const git_index_entry *VAR_16 = VAR_15;
 bool VAR_17 = 0;
 git_diff_delta *VAR_18;
 const char *VAR_19;

 FUNC_3((VAR_14 != ((void*)0)) ^ (VAR_15 != ((void*)0)));

 if (VAR_14) {
  VAR_16 = VAR_14;
  VAR_17 = 1;
 }

 if (FUNC_1(VAR_12, VAR_9))
  VAR_17 = !VAR_17;

 if ((VAR_16->flags & VAR_10) != 0)
  return 0;

 if (VAR_13 == VAR_0 &&
  FUNC_0(VAR_12, VAR_6))
  return 0;

 if (VAR_13 == VAR_3 &&
  FUNC_0(VAR_12, VAR_8))
  return 0;

 if (VAR_13 == VAR_2 &&
  FUNC_0(VAR_12, VAR_7))
  return 0;

 if (!FUNC_6(&VAR_19, VAR_12, VAR_16))
  return 0;

 VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_16->path);
 FUNC_2(VAR_18);


 FUNC_3(VAR_13 != VAR_1);
 VAR_18->nfiles = 1;

 if (VAR_17) {
  VAR_18->old_file.mode = VAR_16->mode;
  VAR_18->old_file.size = VAR_16->file_size;
  VAR_18->old_file.flags |= VAR_4;
  FUNC_7(&VAR_18->old_file.id, &VAR_16->id);
  VAR_18->old_file.id_abbrev = VAR_11;
 } else {
  VAR_18->new_file.mode = VAR_16->mode;
  VAR_18->new_file.size = VAR_16->file_size;
  VAR_18->new_file.flags |= VAR_4;
  FUNC_7(&VAR_18->new_file.id, &VAR_16->id);
  VAR_18->new_file.id_abbrev = VAR_11;
 }

 VAR_18->old_file.flags |= VAR_5;

 if (VAR_17 || !FUNC_8(&VAR_18->new_file.id))
  VAR_18->new_file.flags |= VAR_5;

 return FUNC_5(VAR_12, VAR_18, VAR_19);
}
