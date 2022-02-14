
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ status; } ;
typedef TYPE_4__ git_diff_delta ;
struct TYPE_16__ {int inflatedlen; int datalen; int data; int type; } ;
struct TYPE_15__ {int inflatedlen; int datalen; int data; int type; } ;
struct TYPE_19__ {TYPE_2__ old_file; TYPE_1__ new_file; int contains_data; } ;
typedef TYPE_5__ git_diff_binary ;
struct TYPE_17__ {int num_lines; } ;
struct TYPE_20__ {int flags; TYPE_3__ line; TYPE_7__* buf; } ;
typedef TYPE_6__ diff_print_info ;
struct TYPE_21__ {size_t size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,TYPE_4__*,char const*,char const*) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_7__*,char*) ;
 int FUNC_3 (TYPE_7__*,size_t) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(
 diff_print_info *VAR_3, git_diff_delta *VAR_4,
 const char *VAR_5, const char *VAR_6,
 const git_diff_binary *VAR_7)
{
 size_t VAR_8;
 int VAR_9;

 if (VAR_4->status == VAR_0)
  return 0;

 if ((VAR_3->flags & VAR_1) == 0 || !VAR_7->contains_data)
  return FUNC_0(
   VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_8 = VAR_3->buf->size;
 FUNC_2(VAR_3->buf, "GIT binary patch\n");
 VAR_3->line.num_lines++;

 if ((VAR_9 = FUNC_1(VAR_3, VAR_7->new_file.type, VAR_7->new_file.data,
  VAR_7->new_file.datalen, VAR_7->new_file.inflatedlen)) < 0 ||
  (VAR_9 = FUNC_1(VAR_3, VAR_7->old_file.type, VAR_7->old_file.data,
   VAR_7->old_file.datalen, VAR_7->old_file.inflatedlen)) < 0) {

  if (VAR_9 == VAR_2) {
   FUNC_4();
   FUNC_3(VAR_3->buf, VAR_8);

   return FUNC_0(
    VAR_3, VAR_4, VAR_5, VAR_6);
  }
 }

 VAR_3->line.num_lines++;
 return VAR_9;
}
