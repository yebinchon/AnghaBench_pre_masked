
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_gid_table {int rwlock; TYPE_1__** data_vec; } ;
struct ib_gid_attr {int gid_type; struct net_device* ndev; } ;
struct ib_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_2__ {struct ib_gid_attr attr; } ;


 int VAR_0 ;
 struct ib_gid_attr const* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct ib_gid_table*,union ib_gid const*,struct ib_gid_attr*,int,unsigned long,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 struct ib_gid_table* FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

const struct ib_gid_attr *
FUNC_7(struct ib_device *VAR_4,
        const union ib_gid *VAR_5,
        enum ib_gid_type VAR_6,
        u8 VAR_7, struct net_device *VAR_8)
{
 int VAR_9;
 struct ib_gid_table *VAR_10;
 unsigned long VAR_11 = VAR_1 |
        VAR_2;
 struct ib_gid_attr VAR_12 = {.ndev = VAR_8, .gid_type = VAR_6};
 const struct ib_gid_attr *VAR_13;
 unsigned long VAR_14;

 if (!FUNC_4(VAR_4, VAR_7))
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_3(VAR_4, VAR_7);

 if (VAR_8)
  VAR_11 |= VAR_3;

 FUNC_5(&VAR_10->rwlock, VAR_14);
 VAR_9 = FUNC_1(VAR_10, VAR_5, &VAR_12, 0, VAR_11, ((void*)0));
 if (VAR_9 >= 0) {
  FUNC_2(VAR_10->data_vec[VAR_9]);
  VAR_13 = &VAR_10->data_vec[VAR_9]->attr;
  FUNC_6(&VAR_10->rwlock, VAR_14);
  return VAR_13;
 }

 FUNC_6(&VAR_10->rwlock, VAR_14);
 return FUNC_0(-VAR_0);
}
