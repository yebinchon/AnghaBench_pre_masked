
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct mlx4_port_gid_table {TYPE_1__* gids; } ;
struct mlx4_ib_iboe {int lock; struct mlx4_port_gid_table* gids; } ;
struct mlx4_ib_dev {struct mlx4_ib_iboe iboe; } ;
struct ib_gid_attr {int port_num; int device; } ;
struct gid_entry {int gid_type; int gid; } ;
struct gid_cache_context {unsigned int real_index; int refcount; } ;
struct TYPE_2__ {int gid_type; int gid; struct gid_entry* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gid_entry*) ;
 struct gid_entry* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct gid_entry*,struct mlx4_ib_dev*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct mlx4_ib_dev* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(const struct ib_gid_attr *VAR_5, void **VAR_6)
{
 struct gid_cache_context *VAR_7 = *VAR_6;
 struct mlx4_ib_dev *VAR_8 = FUNC_8(VAR_5->device);
 struct mlx4_ib_iboe *VAR_9 = &VAR_8->iboe;
 struct mlx4_port_gid_table *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 struct gid_entry *VAR_13 = ((void*)0);

 if (!FUNC_5(VAR_5->device, VAR_5->port_num))
  return -VAR_0;

 if (VAR_5->port_num > VAR_3)
  return -VAR_0;

 VAR_10 = &VAR_9->gids[VAR_5->port_num - 1];
 FUNC_6(&VAR_9->lock);
 if (VAR_7) {
  VAR_7->refcount--;
  if (!VAR_7->refcount) {
   unsigned int VAR_14 = VAR_7->real_index;

   FUNC_3(&VAR_10->gids[VAR_14].gid, 0,
          sizeof(VAR_10->gids[VAR_14].gid));
   FUNC_0(VAR_10->gids[VAR_14].ctx);
   VAR_10->gids[VAR_14].ctx = ((void*)0);
   VAR_12 = 1;
  }
 }
 if (!VAR_11 && VAR_12) {
  int VAR_15;

  VAR_13 = FUNC_1(VAR_4, sizeof(*VAR_13),
         VAR_2);
  if (!VAR_13) {
   VAR_11 = -VAR_1;
  } else {
   for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
    FUNC_2(&VAR_13[VAR_15].gid,
           &VAR_10->gids[VAR_15].gid,
           sizeof(union ib_gid));
    VAR_13[VAR_15].gid_type =
        VAR_10->gids[VAR_15].gid_type;
   }
  }
 }
 FUNC_7(&VAR_9->lock);

 if (!VAR_11 && VAR_12) {
  VAR_11 = FUNC_4(VAR_13, VAR_8, VAR_5->port_num);
  FUNC_0(VAR_13);
 }
 return VAR_11;
}
