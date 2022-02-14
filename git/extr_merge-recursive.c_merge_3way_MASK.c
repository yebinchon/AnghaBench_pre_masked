
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct merge_options {int recursive_variant; char const* ancestor; TYPE_2__* repo; TYPE_1__* priv; int xdl_opts; int renormalize; } ;
struct ll_merge_options {int extra_marker_size; int virtual_ancestor; scalar_t__ variant; int xdl_opts; int renormalize; int member_0; } ;
struct diff_filespec {scalar_t__ path; int oid; } ;
struct TYPE_10__ {char* ptr; } ;
typedef TYPE_3__ mmfile_t ;
typedef int mmbuffer_t ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {scalar_t__ call_depth; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,scalar_t__,TYPE_3__*,char*,TYPE_3__*,char*,TYPE_3__*,char*,int ,struct ll_merge_options*) ;
 char* FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct merge_options *VAR_2,
        mmbuffer_t *VAR_3,
        const struct diff_filespec *VAR_4,
        const struct diff_filespec *VAR_5,
        const struct diff_filespec *VAR_6,
        const char *VAR_7,
        const char *VAR_8,
        const int VAR_9)
{
 mmfile_t VAR_10, VAR_11, VAR_12;
 struct ll_merge_options VAR_13 = {0};
 char *VAR_14, *VAR_15, *VAR_16;
 int VAR_17;

 VAR_13.renormalize = VAR_2->renormalize;
 VAR_13.extra_marker_size = VAR_9;
 VAR_13.xdl_opts = VAR_2->xdl_opts;

 if (VAR_2->priv->call_depth) {
  VAR_13.virtual_ancestor = 1;
  VAR_13.variant = 0;
 } else {
  switch (VAR_2->recursive_variant) {
  case 129:
   VAR_13.variant = VAR_0;
   break;
  case 128:
   VAR_13.variant = VAR_1;
   break;
  default:
   VAR_13.variant = 0;
   break;
  }
 }

 FUNC_0(VAR_5->path && VAR_6->path && VAR_4->path && VAR_2->ancestor);
 if (FUNC_5(VAR_5->path, VAR_6->path) || FUNC_5(VAR_5->path, VAR_4->path) != 0) {
  VAR_14 = FUNC_3("%s:%s", VAR_2->ancestor, VAR_4->path);
  VAR_15 = FUNC_3("%s:%s", VAR_7, VAR_5->path);
  VAR_16 = FUNC_3("%s:%s", VAR_8, VAR_6->path);
 } else {
  VAR_14 = FUNC_3("%s", VAR_2->ancestor);
  VAR_15 = FUNC_3("%s", VAR_7);
  VAR_16 = FUNC_3("%s", VAR_8);
 }

 FUNC_4(&VAR_10, &VAR_4->oid);
 FUNC_4(&VAR_11, &VAR_5->oid);
 FUNC_4(&VAR_12, &VAR_6->oid);

 VAR_17 = FUNC_2(VAR_3, VAR_5->path, &VAR_10, VAR_14,
    &VAR_11, VAR_15, &VAR_12, VAR_16,
    VAR_2->repo->index, &VAR_13);

 FUNC_1(VAR_14);
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_1(VAR_10.ptr);
 FUNC_1(VAR_11);
 FUNC_1(VAR_12);
 return VAR_17;
}
