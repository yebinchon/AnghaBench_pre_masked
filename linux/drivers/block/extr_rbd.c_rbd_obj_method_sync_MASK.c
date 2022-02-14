
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {TYPE_2__* rbd_client; } ;
struct page {int dummy; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct ceph_osd_client*,struct ceph_object_id*,struct ceph_object_locator*,int ,char const*,int ,struct page*,size_t,struct page**,size_t*) ;
 int FUNC_3 (void*,void const*,size_t) ;
 void const* FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct rbd_device *VAR_6,
        struct ceph_object_id *VAR_7,
        struct ceph_object_locator *VAR_8,
        const char *VAR_9,
        const void *VAR_10,
        size_t VAR_11,
        void *VAR_12,
        size_t VAR_13)
{
 struct ceph_osd_client *VAR_14 = &VAR_6->rbd_client->client->osdc;
 struct page *VAR_15 = ((void*)0);
 struct page *VAR_16;
 int VAR_17;
 if (VAR_10) {
  if (VAR_11 > VAR_4)
   return -VAR_1;

  VAR_15 = FUNC_1(VAR_3);
  if (!VAR_15)
   return -VAR_2;

  FUNC_3(FUNC_4(VAR_15), VAR_10, VAR_11);
 }

 VAR_16 = FUNC_1(VAR_3);
 if (!VAR_16) {
  if (VAR_15)
   FUNC_0(VAR_15);
  return -VAR_2;
 }

 VAR_17 = FUNC_2(VAR_14, VAR_7, VAR_8, VAR_5, VAR_9,
        VAR_0, VAR_15, VAR_11,
        &VAR_16, &VAR_13);
 if (!VAR_17) {
  FUNC_3(VAR_12, FUNC_4(VAR_16), VAR_13);
  VAR_17 = VAR_13;
 }

 if (VAR_15)
  FUNC_0(VAR_15);
 FUNC_0(VAR_16);
 return VAR_17;
}
