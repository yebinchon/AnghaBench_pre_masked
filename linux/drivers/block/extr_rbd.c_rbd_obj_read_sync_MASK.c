
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {TYPE_2__* rbd_client; } ;
struct page {int dummy; } ;
struct ceph_osd_request {int r_flags; int r_base_oloc; int r_base_oid; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (int ,int) ;
 struct page** FUNC_3 (int,int ) ;
 int FUNC_4 (struct page**,void*,int ,int) ;
 int FUNC_5 (int *,struct ceph_object_id*) ;
 int FUNC_6 (int *,struct ceph_object_locator*) ;
 int FUNC_7 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_8 (struct ceph_osd_client*,int *,int,int,int ) ;
 int FUNC_9 (struct ceph_osd_request*) ;
 int FUNC_10 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_11 (struct ceph_osd_client*,struct ceph_osd_request*) ;
 int FUNC_12 (struct ceph_osd_request*,int ,int ,int ,int,int ,int ) ;
 int FUNC_13 (struct ceph_osd_request*,int ,struct page**,int,int ,int,int) ;

__attribute__((used)) static int FUNC_14(struct rbd_device *VAR_4,
        struct ceph_object_id *VAR_5,
        struct ceph_object_locator *VAR_6,
        void *VAR_7, int VAR_8)

{
 struct ceph_osd_client *VAR_9 = &VAR_4->rbd_client->client->osdc;
 struct ceph_osd_request *VAR_10;
 struct page **VAR_11;
 int VAR_12 = FUNC_2(0, VAR_8);
 int VAR_13;

 VAR_10 = FUNC_8(VAR_9, ((void*)0), 1, 0, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_5(&VAR_10->r_base_oid, VAR_5);
 FUNC_6(&VAR_10->r_base_oloc, VAR_6);
 VAR_10->r_flags = VAR_0;

 VAR_11 = FUNC_3(VAR_12, VAR_3);
 if (FUNC_0(VAR_11)) {
  VAR_13 = FUNC_1(VAR_11);
  goto out_req;
 }

 FUNC_12(VAR_10, 0, VAR_1, 0, VAR_8, 0, 0);
 FUNC_13(VAR_10, 0, VAR_11, VAR_8, 0, 0,
      1);

 VAR_13 = FUNC_7(VAR_10, VAR_3);
 if (VAR_13)
  goto out_req;

 FUNC_10(VAR_9, VAR_10, 0);
 VAR_13 = FUNC_11(VAR_9, VAR_10);
 if (VAR_13 >= 0)
  FUNC_4(VAR_11, VAR_7, 0, VAR_13);

out_req:
 FUNC_9(VAR_10);
 return VAR_13;
}
