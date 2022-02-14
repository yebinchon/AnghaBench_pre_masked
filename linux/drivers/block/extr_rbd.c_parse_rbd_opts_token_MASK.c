
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int from; } ;
typedef TYPE_3__ substring_t ;
struct parse_rbd_opts_ctx {TYPE_2__* opts; TYPE_1__* spec; } ;
struct TYPE_8__ {int queue_depth; int alloc_size; int read_only; int lock_on_read; int exclusive; int trim; int lock_timeout; } ;
struct TYPE_7__ {int pool_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,int ,TYPE_3__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(char *VAR_8, void *VAR_9)
{
 struct parse_rbd_opts_ctx *VAR_10 = VAR_9;
 substring_t VAR_11[VAR_3];
 int VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_5(VAR_8, VAR_7, VAR_11);
 if (VAR_12 < VAR_4) {
  VAR_14 = FUNC_3(&VAR_11[0], &VAR_13);
  if (VAR_14 < 0) {
   FUNC_7("bad option arg (not int) at '%s'\n", VAR_8);
   return VAR_14;
  }
  FUNC_0("got int token %d val %d\n", VAR_12, VAR_13);
 } else if (VAR_12 > VAR_4 && VAR_12 < VAR_5) {
  FUNC_0("got string token %d val %s\n", VAR_12, VAR_11[0].from);
 } else {
  FUNC_0("got token %d\n", VAR_12);
 }

 switch (VAR_12) {
 case 130:
  if (VAR_13 < 1) {
   FUNC_7("queue_depth out of range\n");
   return -VAR_0;
  }
  VAR_10->opts->queue_depth = VAR_13;
  break;
 case 136:
  if (VAR_13 < VAR_6) {
   FUNC_7("alloc_size out of range\n");
   return -VAR_0;
  }
  if (!FUNC_1(VAR_13)) {
   FUNC_7("alloc_size must be a power of 2\n");
   return -VAR_0;
  }
  VAR_10->opts->alloc_size = VAR_13;
  break;
 case 133:

  if (VAR_13 < 0 || VAR_13 > VAR_2 / 1000) {
   FUNC_7("lock_timeout out of range\n");
   return -VAR_0;
  }
  VAR_10->opts->lock_timeout = FUNC_6(VAR_13 * 1000);
  break;
 case 131:
  FUNC_2(VAR_10->spec->pool_ns);
  VAR_10->spec->pool_ns = FUNC_4(VAR_11);
  if (!VAR_10->spec->pool_ns)
   return -VAR_1;
  break;
 case 129:
  VAR_10->opts->read_only = 1;
  break;
 case 128:
  VAR_10->opts->read_only = 0;
  break;
 case 134:
  VAR_10->opts->lock_on_read = 1;
  break;
 case 135:
  VAR_10->opts->exclusive = 1;
  break;
 case 132:
  VAR_10->opts->trim = 0;
  break;
 default:

  return -VAR_0;
 }

 return 0;
}
