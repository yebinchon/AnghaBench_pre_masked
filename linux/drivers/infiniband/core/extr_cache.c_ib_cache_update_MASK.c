
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_port_attr {int pkey_tbl_len; int table_len; int subnet_prefix; int state; int lmc; scalar_t__ table; int gid_tbl_len; } ;
struct ib_pkey_cache {int pkey_tbl_len; int table_len; int subnet_prefix; int state; int lmc; scalar_t__ table; int gid_tbl_len; } ;
struct TYPE_6__ {int lock; } ;
struct ib_device {TYPE_3__ cache; TYPE_2__* port_data; int dev; } ;
struct TYPE_4__ {int subnet_prefix; int port_state; int lmc; struct ib_port_attr* pkey; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,size_t,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct ib_device*,size_t,int,scalar_t__) ;
 int FUNC_3 (struct ib_device*,size_t,struct ib_port_attr*) ;
 int FUNC_4 (struct ib_device*,size_t,int ) ;
 int FUNC_5 (struct ib_port_attr*) ;
 struct ib_port_attr* FUNC_6 (int,int ) ;
 int FUNC_7 (struct ib_device*,size_t) ;
 int FUNC_8 (struct ib_device*,size_t) ;
 int FUNC_9 (struct ib_port_attr*,int ,int) ;
 int VAR_1 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ib_device *VAR_2,
       u8 VAR_3,
       bool VAR_4)
{
 struct ib_port_attr *VAR_5 = ((void*)0);
 struct ib_pkey_cache *VAR_6 = ((void*)0), *VAR_7;
 int VAR_8;
 int VAR_9;

 if (!FUNC_7(VAR_2, VAR_3))
  return;

 VAR_5 = FUNC_6(sizeof *VAR_5, VAR_0);
 if (!VAR_5)
  return;

 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_5);
 if (VAR_9) {
  FUNC_1(&VAR_2->dev, "ib_query_port failed (%d)\n", VAR_9);
  goto err;
 }

 if (!FUNC_8(VAR_2, VAR_3)) {
  VAR_9 = FUNC_0(VAR_2, VAR_3,
      VAR_5->gid_tbl_len);
  if (VAR_9)
   goto err;
 }

 VAR_6 = FUNC_6(FUNC_9(VAR_6, VAR_1,
      VAR_5->pkey_tbl_len),
        VAR_0);
 if (!VAR_6)
  goto err;

 VAR_6->table_len = VAR_5->pkey_tbl_len;

 for (VAR_8 = 0; VAR_8 < VAR_6->table_len; ++VAR_8) {
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8, VAR_6->table + VAR_8);
  if (VAR_9) {
   FUNC_1(&VAR_2->dev,
     "ib_query_pkey failed (%d) for index %d\n",
     VAR_9, VAR_8);
   goto err;
  }
 }

 FUNC_10(&VAR_2->cache.lock);

 VAR_7 = VAR_2->port_data[VAR_3].cache.pkey;

 VAR_2->port_data[VAR_3].cache.pkey = VAR_6;
 VAR_2->port_data[VAR_3].cache.lmc = VAR_5->lmc;
 VAR_2->port_data[VAR_3].cache.port_state = VAR_5->state;

 VAR_2->port_data[VAR_3].cache.subnet_prefix = VAR_5->subnet_prefix;
 FUNC_11(&VAR_2->cache.lock);

 if (VAR_4)
  FUNC_4(VAR_2,
      VAR_3,
      VAR_5->subnet_prefix);

 FUNC_5(VAR_7);
 FUNC_5(VAR_5);
 return;

err:
 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
}
