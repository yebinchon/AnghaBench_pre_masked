
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_25__ {int payload; int (* binary_cb ) (int ,TYPE_11__*,int ) ;} ;
typedef TYPE_9__ git_patch_generated_output ;
struct TYPE_21__ {int flags; } ;
struct TYPE_22__ {int delta; TYPE_5__ diff_opts; } ;
struct TYPE_19__ {char* data; size_t len; } ;
struct TYPE_20__ {TYPE_3__ map; } ;
struct TYPE_17__ {char* data; size_t len; } ;
struct TYPE_18__ {TYPE_1__ map; } ;
struct TYPE_15__ {TYPE_6__ base; TYPE_4__ nfile; TYPE_2__ ofile; } ;
typedef TYPE_10__ git_patch_generated ;
struct TYPE_24__ {scalar_t__ data; int inflatedlen; int datalen; int type; } ;
struct TYPE_23__ {scalar_t__ data; int inflatedlen; int datalen; int type; } ;
struct TYPE_16__ {int contains_data; TYPE_8__ new_file; TYPE_7__ old_file; int member_0; } ;
typedef TYPE_11__ git_diff_binary ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,int *,int *,char const*,size_t,char const*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,TYPE_11__*,int ) ;

__attribute__((used)) static int FUNC_4(git_patch_generated_output *VAR_1, git_patch_generated *VAR_2)
{
 git_diff_binary VAR_3 = {0};
 const char *VAR_4 = VAR_2->ofile.map.data;
 const char *VAR_5 = VAR_2->nfile.map.data;
 size_t VAR_6 = VAR_2->ofile.map.len,
  VAR_7 = VAR_2->nfile.map.len;
 int VAR_8;



 if (VAR_2->base.diff_opts.flags & VAR_0) {
  VAR_3.contains_data = 1;




  if ((VAR_8 = FUNC_0(&VAR_3.old_file.type,
    (char **)&VAR_3.old_file.data,
    &VAR_3.old_file.datalen,
    &VAR_3.old_file.inflatedlen,
    VAR_5, VAR_7, VAR_4, VAR_6)) < 0 ||
   (VAR_8 = FUNC_0(&VAR_3.new_file.type,
    (char **)&VAR_3.new_file.data,
    &VAR_3.new_file.datalen,
    &VAR_3.new_file.inflatedlen,
    VAR_4, VAR_6, VAR_5, VAR_7)) < 0)
   return VAR_8;
 }

 VAR_8 = FUNC_2(
  VAR_1->binary_cb(VAR_2->base.delta, &VAR_3, VAR_1->payload),
  "git_patch");

 FUNC_1((char *) VAR_3.old_file.data);
 FUNC_1((char *) VAR_3.new_file.data);

 return VAR_8;
}
