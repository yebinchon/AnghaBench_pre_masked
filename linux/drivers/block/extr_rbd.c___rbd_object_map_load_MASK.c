
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_7__ {int size; } ;
struct rbd_device {size_t object_map_size; int object_map; int header_oloc; TYPE_4__* spec; TYPE_3__ mapping; int layout; TYPE_2__* rbd_client; } ;
struct page {int dummy; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_8__ {int snap_id; } ;
struct TYPE_6__ {TYPE_1__* client; } ;
struct TYPE_5__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct page**) ;
 int VAR_6 ;
 int FUNC_3 (struct page**) ;
 int FUNC_4 (int ,size_t) ;
 struct page** FUNC_5 (int,int ) ;
 int FUNC_6 (struct page**,int ,size_t,size_t) ;
 size_t FUNC_7 (int *,int ) ;
 int FUNC_8 (struct ceph_osd_client*,int *,int *,char*,char*,int ,int *,int ,struct page**,size_t*) ;
 int FUNC_9 (struct page**,int) ;
 int FUNC_10 (void**,void*,size_t*) ;
 int FUNC_11 (size_t,int ) ;
 int FUNC_12 (size_t,size_t) ;
 size_t FUNC_13 (void*) ;
 int VAR_7 ;
 void* FUNC_14 (struct page*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct rbd_device*,int ,int *) ;
 int FUNC_17 (struct rbd_device*,char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_18(struct rbd_device *VAR_8)
{
 struct ceph_osd_client *VAR_9 = &VAR_8->rbd_client->client->osdc;
 FUNC_0(VAR_7);
 struct page **VAR_10;
 void *VAR_11, *VAR_12;
 size_t VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_15(!VAR_8->object_map && !VAR_8->object_map_size);

 VAR_14 = FUNC_7(&VAR_8->layout,
        VAR_8->mapping.size);
 VAR_15 = FUNC_1(VAR_14 * VAR_1,
         VAR_0);
 VAR_17 = FUNC_4(0, VAR_15) + 1;
 VAR_10 = FUNC_5(VAR_17, VAR_5);
 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_10);

 VAR_13 = VAR_17 * VAR_6;
 FUNC_16(VAR_8, VAR_8->spec->snap_id, &VAR_7);
 VAR_18 = FUNC_8(VAR_9, &VAR_7, &VAR_8->header_oloc,
        "rbd", "object_map_load", VAR_2,
        ((void*)0), 0, VAR_10, &VAR_13);
 if (VAR_18)
  goto out;

 VAR_11 = FUNC_14(VAR_10[0]);
 VAR_12 = VAR_11 + FUNC_12(VAR_13, (size_t)VAR_6);
 VAR_18 = FUNC_10(&VAR_11, VAR_12, &VAR_16);
 if (VAR_18)
  goto out;

 if (VAR_16 != VAR_14) {
  FUNC_17(VAR_8, "object map size mismatch: %llu vs %llu",
    VAR_16, VAR_14);
  VAR_18 = -VAR_3;
  goto out;
 }

 if (FUNC_13(VAR_11) + VAR_15 > VAR_13) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_8->object_map = FUNC_11(VAR_15, VAR_5);
 if (!VAR_8->object_map) {
  VAR_18 = -VAR_4;
  goto out;
 }

 VAR_8->object_map_size = VAR_16;
 FUNC_6(VAR_10, VAR_8->object_map,
       FUNC_13(VAR_11), VAR_15);

out:
 FUNC_9(VAR_10, VAR_17);
 return VAR_18;
}
