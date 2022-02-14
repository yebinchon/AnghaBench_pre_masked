
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ib_gid_table {int sz; int rwlock; TYPE_1__** data_vec; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {struct ib_gid_attr attr; } ;


 int VAR_0 ;
 struct ib_gid_attr const* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct ib_gid_table* FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

const struct ib_gid_attr *
FUNC_7(struct ib_device *VAR_1, u8 VAR_2, int VAR_3)
{
 const struct ib_gid_attr *VAR_4 = FUNC_0(-VAR_0);
 struct ib_gid_table *VAR_5;
 unsigned long VAR_6;

 if (!FUNC_4(VAR_1, VAR_2))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 < 0 || VAR_3 >= VAR_5->sz)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_5->rwlock, VAR_6);
 if (!FUNC_2(VAR_5->data_vec[VAR_3]))
  goto done;

 FUNC_1(VAR_5->data_vec[VAR_3]);
 VAR_4 = &VAR_5->data_vec[VAR_3]->attr;
done:
 FUNC_6(&VAR_5->rwlock, VAR_6);
 return VAR_4;
}
