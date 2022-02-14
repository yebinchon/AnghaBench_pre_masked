
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct mlx4_port_gid_table {TYPE_1__* gids; } ;
struct mlx4_ib_iboe {int lock; struct mlx4_port_gid_table* gids; } ;
struct mlx4_ib_dev {struct mlx4_ib_iboe iboe; } ;
struct ib_gid_attr {int port_num; scalar_t__ gid_type; int gid; int device; } ;
struct gid_entry {scalar_t__ gid_type; int gid; } ;
struct gid_cache_context {int real_index; int refcount; } ;
struct TYPE_2__ {scalar_t__ gid_type; int gid; struct gid_cache_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gid_entry*) ;
 struct gid_cache_context* FUNC_1 (int,int ) ;
 struct gid_entry* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct gid_entry*,struct mlx4_ib_dev*,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct mlx4_ib_dev* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const struct ib_gid_attr *VAR_6, void **VAR_7)
{
 struct mlx4_ib_dev *VAR_8 = FUNC_10(VAR_6->device);
 struct mlx4_ib_iboe *VAR_9 = &VAR_8->iboe;
 struct mlx4_port_gid_table *VAR_10;
 int VAR_11 = -1, VAR_12 = -1;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;
 struct gid_entry *VAR_16 = ((void*)0);

 if (!FUNC_6(VAR_6->device, VAR_6->port_num))
  return -VAR_0;

 if (VAR_6->port_num > VAR_4)
  return -VAR_0;

 if (!VAR_7)
  return -VAR_0;

 VAR_10 = &VAR_9->gids[VAR_6->port_num - 1];
 FUNC_8(&VAR_9->lock);
 for (VAR_15 = 0; VAR_15 < VAR_5; ++VAR_15) {
  if (!FUNC_3(&VAR_10->gids[VAR_15].gid,
       &VAR_6->gid, sizeof(VAR_6->gid)) &&
      VAR_10->gids[VAR_15].gid_type == VAR_6->gid_type) {
   VAR_12 = VAR_15;
   break;
  }
  if (VAR_11 < 0 && FUNC_7(&VAR_10->gids[VAR_15].gid))
   VAR_11 = VAR_15;
 }

 if (VAR_12 < 0) {
  if (VAR_11 < 0) {
   VAR_13 = -VAR_2;
  } else {
   VAR_10->gids[VAR_11].ctx = FUNC_1(sizeof(*VAR_10->gids[VAR_11].ctx), VAR_3);
   if (!VAR_10->gids[VAR_11].ctx) {
    VAR_13 = -VAR_1;
   } else {
    *VAR_7 = VAR_10->gids[VAR_11].ctx;
    FUNC_4(&VAR_10->gids[VAR_11].gid,
           &VAR_6->gid, sizeof(VAR_6->gid));
    VAR_10->gids[VAR_11].gid_type = VAR_6->gid_type;
    VAR_10->gids[VAR_11].ctx->real_index = VAR_11;
    VAR_10->gids[VAR_11].ctx->refcount = 1;
    VAR_14 = 1;
   }
  }
 } else {
  struct gid_cache_context *VAR_17 = VAR_10->gids[VAR_12].ctx;
  *VAR_7 = VAR_17;
  VAR_17->refcount++;
 }
 if (!VAR_13 && VAR_14) {
  VAR_16 = FUNC_2(VAR_5, sizeof(*VAR_16),
         VAR_3);
  if (!VAR_16) {
   VAR_13 = -VAR_1;
  } else {
   for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
    FUNC_4(&VAR_16[VAR_15].gid, &VAR_10->gids[VAR_15].gid, sizeof(union ib_gid));
    VAR_16[VAR_15].gid_type = VAR_10->gids[VAR_15].gid_type;
   }
  }
 }
 FUNC_9(&VAR_9->lock);

 if (!VAR_13 && VAR_14) {
  VAR_13 = FUNC_5(VAR_16, VAR_8, VAR_6->port_num);
  FUNC_0(VAR_16);
 }

 return VAR_13;
}
