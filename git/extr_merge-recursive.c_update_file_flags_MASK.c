
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {unsigned long len; } ;
struct merge_options {TYPE_2__* repo; TYPE_1__* priv; } ;
struct diff_filespec {int mode; int oid; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {scalar_t__ call_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct merge_options*,struct diff_filespec const*,char const*,int ,int,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,char const*,void*,unsigned long,struct strbuf*) ;
 int FUNC_7 (struct merge_options*,int ,...) ;
 int VAR_6 ;
 int FUNC_8 (void*) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (struct merge_options*,char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*,int,int) ;
 void* FUNC_12 (int *,int*,unsigned long*) ;
 int FUNC_13 (char const*) ;
 void* FUNC_14 (struct strbuf*,int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (char*,char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (int,void*,unsigned long) ;
 char* FUNC_19 (void*,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct merge_options *VAR_8,
        const struct diff_filespec *VAR_9,
        const char *VAR_10,
        int VAR_11,
        int VAR_12)
{
 int VAR_13 = 0;

 if (VAR_8->priv->call_depth)
  VAR_12 = 0;

 if (VAR_12) {
  enum object_type VAR_14;
  void *VAR_15;
  unsigned long VAR_16;

  if (FUNC_0(VAR_9->mode)) {





   VAR_12 = 0;
   goto update_index;
  }

  VAR_15 = FUNC_12(&VAR_9->oid, &VAR_14, &VAR_16);
  if (!VAR_15) {
   VAR_13 = FUNC_7(VAR_8, FUNC_3("cannot read object %s '%s'"),
      FUNC_10(&VAR_9->oid), VAR_10);
   goto free_buf;
  }
  if (VAR_14 != VAR_1) {
   VAR_13 = FUNC_7(VAR_8, FUNC_3("blob expected for %s '%s'"),
      FUNC_10(&VAR_9->oid), VAR_10);
   goto free_buf;
  }
  if (FUNC_2(VAR_9->mode)) {
   struct strbuf VAR_17 = VAR_5;
   if (FUNC_6(VAR_8->repo->index,
          VAR_10, VAR_15, VAR_16, &VAR_17)) {
    FUNC_8(VAR_15);
    VAR_16 = VAR_17.len;
    VAR_15 = FUNC_14(&VAR_17, ((void*)0));
   }
  }

  if (FUNC_9(VAR_8, VAR_10) < 0) {
   VAR_12 = 0;
   goto free_buf;
  }
  if (FUNC_2(VAR_9->mode) ||
      (!VAR_7 && FUNC_1(VAR_9->mode))) {
   int VAR_18;
   int VAR_19 = (VAR_9->mode & 0100 ? 0777 : 0666);

   VAR_18 = FUNC_11(VAR_10, VAR_4 | VAR_3 | VAR_2, VAR_19);
   if (VAR_18 < 0) {
    VAR_13 = FUNC_7(VAR_8, FUNC_3("failed to open '%s': %s"),
       VAR_10, FUNC_15(VAR_6));
    goto free_buf;
   }
   FUNC_18(VAR_18, VAR_15, VAR_16);
   FUNC_5(VAR_18);
  } else if (FUNC_1(VAR_9->mode)) {
   char *VAR_20 = FUNC_19(VAR_15, VAR_16);
   FUNC_13(VAR_10);
   FUNC_17(VAR_10);
   if (FUNC_16(VAR_20, VAR_10))
    VAR_13 = FUNC_7(VAR_8, FUNC_3("failed to symlink '%s': %s"),
       VAR_10, FUNC_15(VAR_6));
   FUNC_8(VAR_20);
  } else
   VAR_13 = FUNC_7(VAR_8,
      FUNC_3("do not know what to do with %06o %s '%s'"),
      VAR_9->mode, FUNC_10(&VAR_9->oid), VAR_10);
 free_buf:
  FUNC_8(VAR_15);
 }
update_index:
 if (!VAR_13 && VAR_11)
  if (FUNC_4(VAR_8, VAR_9, VAR_10, 0, VAR_12,
      VAR_0))
   return -1;
 return VAR_13;
}
