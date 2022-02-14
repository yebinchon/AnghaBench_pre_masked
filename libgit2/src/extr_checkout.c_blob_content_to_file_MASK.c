
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct stat {scalar_t__ st_mode; } ;
struct TYPE_14__ {int free; int close; int write; } ;
struct checkout_stream {char const* path; int fd; int open; TYPE_6__ base; } ;
typedef scalar_t__ mode_t ;
struct TYPE_12__ {int * temp_buf; int * attr_session; } ;
typedef TYPE_3__ git_filter_options ;
typedef int git_filter_list ;
typedef int git_blob ;
struct TYPE_11__ {int stat_calls; } ;
struct TYPE_10__ {int file_open_flags; int disable_filters; int dir_mode; scalar_t__ file_mode; } ;
struct TYPE_13__ {TYPE_2__ perfdata; int repo; TYPE_1__ opts; int tmp; int attr_session; } ;
typedef TYPE_4__ checkout_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int **,int ,int *,char const*,int ,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_6__*) ;
 int FUNC_5 (struct checkout_stream*,int ,int) ;
 int FUNC_6 (TYPE_4__*,char const*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,int,scalar_t__) ;
 int FUNC_9 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_10(
 checkout_data *VAR_10,
 struct stat *VAR_11,
 git_blob *VAR_12,
 const char *VAR_13,
 const char *VAR_14,
 mode_t VAR_15)
{
 int VAR_16 = VAR_10->opts.file_open_flags;
 mode_t VAR_17 = VAR_10->opts.file_mode ?
  VAR_10->opts.file_mode : VAR_15;
 git_filter_options VAR_18 = VAR_2;
 struct checkout_stream VAR_19;
 mode_t VAR_20;
 git_filter_list *VAR_21 = ((void*)0);
 int VAR_22;
 int VAR_23 = 0;

 if (VAR_14 == ((void*)0))
  VAR_14 = VAR_13;

 if ((VAR_23 = FUNC_6(VAR_10, VAR_13, VAR_10->opts.dir_mode)) < 0)
  return VAR_23;

 if (VAR_16 <= 0)
  VAR_16 = VAR_4 | VAR_5 | VAR_6;
 if (!(VAR_20 = VAR_17))
  VAR_20 = VAR_1;

 if ((VAR_22 = FUNC_8(VAR_13, VAR_16, VAR_20)) < 0) {
  FUNC_1(VAR_0, "could not open '%s' for writing", VAR_13);
  return VAR_22;
 }

 VAR_18.attr_session = &VAR_10->attr_session;
 VAR_18.temp_buf = &VAR_10->tmp;

 if (!VAR_10->opts.disable_filters &&
  (VAR_23 = FUNC_2(
   &VAR_21, VAR_10->repo, VAR_12, VAR_14,
   VAR_3, &VAR_18))) {
  FUNC_7(VAR_22);
  return VAR_23;
 }


 FUNC_5(&VAR_19, 0, sizeof(struct checkout_stream));
 VAR_19.base.write = VAR_9;
 VAR_19.base.close = VAR_7;
 VAR_19.base.free = VAR_8;
 VAR_19.path = VAR_13;
 VAR_19.fd = VAR_22;
 VAR_19.open = 1;

 VAR_23 = FUNC_4(VAR_21, VAR_12, &VAR_19.base);

 FUNC_0(VAR_19.open == 0);

 FUNC_3(VAR_21);

 if (VAR_23 < 0)
  return VAR_23;

 if (VAR_11) {
  VAR_10->perfdata.stat_calls++;

  if ((VAR_23 = FUNC_9(VAR_13, VAR_11)) < 0) {
   FUNC_1(VAR_0, "failed to stat '%s'", VAR_13);
   return VAR_23;
  }

  VAR_11->st_mode = VAR_15;
 }

 return 0;
}
