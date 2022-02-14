
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rbd_device {int header_oloc; int header_oid; TYPE_2__* rbd_client; } ;
struct parent_image_info {int has_overlap; int overlap; int snap_id; int * image_id; int pool_id; } ;
struct page {int dummy; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void**,void*,int ,int ) ;
 int * FUNC_3 (void**,void*,int *,int ) ;
 int FUNC_4 (struct ceph_osd_client*,int *,int *,char*,char*,int ,struct page*,int,struct page**,size_t*) ;
 int VAR_4 ;
 void* FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct rbd_device *VAR_5,
        struct page *VAR_6,
        struct page *VAR_7,
        struct parent_image_info *VAR_8)
{
 struct ceph_osd_client *VAR_9 = &VAR_5->rbd_client->client->osdc;
 size_t VAR_10 = VAR_3;
 void *VAR_11, *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_9, &VAR_5->header_oid, &VAR_5->header_oloc,
        "rbd", "get_parent", VAR_0,
        VAR_6, sizeof(u64), &VAR_7, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_5(VAR_7);
 VAR_12 = VAR_11 + VAR_10;
 FUNC_2(&VAR_11, VAR_12, VAR_8->pool_id, VAR_4);
 VAR_8->image_id = FUNC_3(&VAR_11, VAR_12, ((void*)0), VAR_2);
 if (FUNC_0(VAR_8->image_id)) {
  VAR_13 = FUNC_1(VAR_8->image_id);
  VAR_8->image_id = ((void*)0);
  return VAR_13;
 }
 FUNC_2(&VAR_11, VAR_12, VAR_8->snap_id, VAR_4);
 VAR_8->has_overlap = 1;
 FUNC_2(&VAR_11, VAR_12, VAR_8->overlap, VAR_4);

 return 0;

e_inval:
 return -VAR_1;
}
