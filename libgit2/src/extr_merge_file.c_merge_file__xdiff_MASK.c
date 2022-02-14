
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int flags; } ;
struct TYPE_24__ {int automergeable; char const* ptr; int mode; int len; int * path; int marker_size; TYPE_1__ xpp; int style; int level; int favor; int * file2; int * file1; int * ancestor; } ;
typedef TYPE_2__ xmparam_t ;
struct TYPE_25__ {char* ptr; int size; int member_0; } ;
typedef TYPE_3__ mmfile_t ;
struct TYPE_26__ {int size; scalar_t__ ptr; } ;
typedef TYPE_4__ mmbuffer_t ;
typedef TYPE_2__ git_merge_file_result ;
struct TYPE_27__ {scalar_t__ favor; int flags; int marker_size; int * their_label; int * our_label; int * ancestor_label; } ;
typedef TYPE_6__ git_merge_file_options ;
struct TYPE_28__ {int mode; int * path; int size; scalar_t__ ptr; } ;
typedef TYPE_7__ git_merge_file_input ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 char* FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_6__ const*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(
 git_merge_file_result *VAR_23,
 const git_merge_file_input *VAR_24,
 const git_merge_file_input *VAR_25,
 const git_merge_file_input *VAR_26,
 const git_merge_file_options *VAR_27)
{
 xmparam_t VAR_28;
 mmfile_t VAR_29 = {0}, VAR_30 = {0}, VAR_31 = {0};
 mmbuffer_t VAR_32;
 git_merge_file_options VAR_33 = VAR_9;
 const char *VAR_34;
 int VAR_35;
 int VAR_36 = 0;

 FUNC_5(VAR_23, 0x0, sizeof(git_merge_file_result));

 FUNC_6(&VAR_33, VAR_27);

 FUNC_5(&VAR_28, 0x0, sizeof(xmparam_t));

 if (VAR_24) {
  VAR_28.ancestor = (VAR_33.ancestor_label) ?
   VAR_33.ancestor_label : VAR_24->path;
  VAR_29.ptr = (char *)VAR_24->ptr;
  VAR_29.size = VAR_24->size;
 }

 VAR_28.file1 = (VAR_33.our_label) ?
  VAR_33.our_label : VAR_25->path;
 VAR_30.ptr = (char *)VAR_25->ptr;
 VAR_30.size = VAR_25->size;

 VAR_28.file2 = (VAR_33.their_label) ?
  VAR_33.their_label : VAR_26->path;
 VAR_31.ptr = (char *)VAR_26->ptr;
 VAR_31.size = VAR_26->size;

 if (VAR_33.favor == VAR_3)
  VAR_28.favor = VAR_18;
 else if (VAR_33.favor == VAR_4)
  VAR_28.favor = VAR_19;
 else if (VAR_33.favor == VAR_5)
  VAR_28.favor = VAR_20;

 VAR_28.level = (VAR_33.flags & VAR_10) ?
  VAR_22 : VAR_21;

 if (VAR_33.flags & VAR_11)
  VAR_28.style = VAR_17;

 if (VAR_33.flags & VAR_6)
  VAR_28.xpp.flags |= VAR_12;
 if (VAR_33.flags & VAR_7)
  VAR_28.xpp.flags |= VAR_14;
 if (VAR_33.flags & VAR_8)
  VAR_28.xpp.flags |= VAR_13;

 if (VAR_33.flags & VAR_2)
  VAR_28.xpp.flags |= VAR_16;

 if (VAR_33.flags & VAR_1)
  VAR_28.xpp.flags |= VAR_15;

 VAR_28.marker_size = VAR_33.marker_size;

 if ((VAR_35 = FUNC_7(&VAR_29, &VAR_30,
  &VAR_31, &VAR_28, &VAR_32)) < 0) {
  FUNC_1(VAR_0, "failed to merge files");
  VAR_36 = -1;
  goto done;
 }

 VAR_34 = FUNC_3(
  VAR_24 ? VAR_24->path : ((void*)0),
  VAR_25->path,
  VAR_26->path);

 if (VAR_34 != ((void*)0) && (VAR_23->path = FUNC_0(VAR_34)) == ((void*)0)) {
  VAR_36 = -1;
  goto done;
 }

 VAR_23->automergeable = (VAR_35 == 0);
 VAR_23->ptr = (const char *)VAR_32.ptr;
 VAR_23->len = VAR_32.size;
 VAR_23->mode = FUNC_2(
  VAR_24 ? VAR_24->mode : 0,
  VAR_25->mode,
  VAR_26->mode);

done:
 if (VAR_36 < 0)
  FUNC_4(VAR_23);

 return VAR_36;
}
