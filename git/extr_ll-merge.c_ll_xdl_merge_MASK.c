
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int flags; } ;
struct TYPE_16__ {int marker_size; char const* ancestor; char const* file1; char const* file2; scalar_t__ style; TYPE_1__ xpp; int favor; int level; } ;
typedef TYPE_2__ xmparam_t ;
typedef int xmp ;
struct ll_merge_options {int xdl_opts; int variant; } ;
struct ll_merge_driver {int dummy; } ;
struct TYPE_17__ {scalar_t__ size; int ptr; } ;
typedef TYPE_3__ mmfile_t ;
typedef int mmbuffer_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ll_merge_options const*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ll_merge_driver const*,int *,char const*,TYPE_3__*,char const*,TYPE_3__*,char const*,TYPE_3__*,char const*,struct ll_merge_options const*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(const struct ll_merge_driver *VAR_3,
   mmbuffer_t *VAR_4,
   const char *VAR_5,
   mmfile_t *VAR_6, const char *VAR_7,
   mmfile_t *VAR_8, const char *VAR_9,
   mmfile_t *VAR_10, const char *VAR_11,
   const struct ll_merge_options *VAR_12,
   int VAR_13)
{
 xmparam_t VAR_14;
 FUNC_0(VAR_12);

 if (VAR_6->size > VAR_0 ||
     VAR_8->size > VAR_0 ||
     VAR_10->size > VAR_0 ||
     FUNC_1(VAR_6->ptr, VAR_6->size) ||
     FUNC_1(VAR_8->ptr, VAR_8->size) ||
     FUNC_1(VAR_10->ptr, VAR_10->size)) {
  return FUNC_2(VAR_3, VAR_4,
           VAR_5,
           VAR_6, VAR_7,
           VAR_8, VAR_9,
           VAR_10, VAR_11,
           VAR_12, VAR_13);
 }

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.level = VAR_1;
 VAR_14.favor = VAR_12->variant;
 VAR_14.xpp.flags = VAR_12->xdl_opts;
 if (VAR_2 >= 0)
  VAR_14.style = VAR_2;
 if (VAR_13 > 0)
  VAR_14.marker_size = VAR_13;
 VAR_14.ancestor = VAR_7;
 VAR_14.file1 = VAR_9;
 VAR_14.file2 = VAR_11;
 return FUNC_4(VAR_6, VAR_8, VAR_10, &VAR_14, VAR_4);
}
