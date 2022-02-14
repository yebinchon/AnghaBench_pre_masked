
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_recovery_ctx {scalar_t__ data_only_stripes; scalar_t__ data_parity_stripes; int meta_page; scalar_t__ seq; int pos; int cached_list; } ;
struct r5l_log {int last_checkpoint; scalar_t__ seq; int log_start; int next_checkpoint; scalar_t__ last_cp_seq; TYPE_1__* rdev; } ;
struct mddev {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {struct mddev* mddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct r5l_recovery_ctx*) ;
 struct r5l_recovery_ctx* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (struct r5l_log*,struct r5l_recovery_ctx*) ;
 int FUNC_9 (struct r5l_log*,struct r5l_recovery_ctx*) ;
 scalar_t__ FUNC_10 (struct r5l_log*,struct r5l_recovery_ctx*) ;
 int FUNC_11 (struct r5l_log*,int ,int ) ;
 scalar_t__ FUNC_12 (struct r5l_log*,struct r5l_recovery_ctx*) ;
 int FUNC_13 (struct r5l_log*,struct r5l_recovery_ctx*) ;
 int FUNC_14 (struct r5l_log*,int ,int ) ;
 int FUNC_15 (struct r5l_log*,int ) ;

__attribute__((used)) static int FUNC_16(struct r5l_log *VAR_4)
{
 struct mddev *VAR_5 = VAR_4->rdev->mddev;
 struct r5l_recovery_ctx *VAR_6;
 int VAR_7;
 sector_t VAR_8;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->pos = VAR_4->last_checkpoint;
 VAR_6->seq = VAR_4->last_cp_seq;
 FUNC_0(&VAR_6->cached_list);
 VAR_6->meta_page = FUNC_2(VAR_3);

 if (!VAR_6->meta_page) {
  VAR_7 = -VAR_2;
  goto meta_page;
 }

 if (FUNC_12(VAR_4, VAR_6) != 0) {
  VAR_7 = -VAR_2;
  goto ra_pool;
 }

 VAR_7 = FUNC_9(VAR_4, VAR_6);

 if (VAR_7)
  goto error;

 VAR_8 = VAR_6->pos;
 VAR_6->seq += 10000;

 if ((VAR_6->data_only_stripes == 0) && (VAR_6->data_parity_stripes == 0))
  FUNC_7("md/raid:%s: starting from clean shutdown\n",
    FUNC_5(VAR_5));
 else
  FUNC_7("md/raid:%s: recovering %d data-only stripes and %d data-parity stripes\n",
    FUNC_5(VAR_5), VAR_6->data_only_stripes,
    VAR_6->data_parity_stripes);

 if (VAR_6->data_only_stripes == 0) {
  VAR_4->next_checkpoint = VAR_6->pos;
  FUNC_11(VAR_4, VAR_6->pos, VAR_6->seq++);
  VAR_6->pos = FUNC_14(VAR_4, VAR_6->pos, VAR_0);
 } else if (FUNC_10(VAR_4, VAR_6)) {
  FUNC_6("md/raid:%s: failed to rewrite stripes to journal\n",
         FUNC_5(VAR_5));
  VAR_7 = -VAR_1;
  goto error;
 }

 VAR_4->log_start = VAR_6->pos;
 VAR_4->seq = VAR_6->seq;
 VAR_4->last_checkpoint = VAR_8;
 FUNC_15(VAR_4, VAR_8);

 FUNC_8(VAR_4, VAR_6);
 VAR_7 = 0;
error:
 FUNC_13(VAR_4, VAR_6);
ra_pool:
 FUNC_1(VAR_6->meta_page);
meta_page:
 FUNC_3(VAR_6);
 return VAR_7;
}
