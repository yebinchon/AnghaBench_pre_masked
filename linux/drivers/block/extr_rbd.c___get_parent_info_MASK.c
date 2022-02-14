
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rbd_device {int header_oloc; int header_oid; TYPE_2__* rbd_client; } ;
struct parent_image_info {int overlap; int has_overlap; } ;
struct page {int dummy; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (void**,void*,int ,int ) ;
 int FUNC_1 (void**,void*,int ,int ) ;
 int FUNC_2 (struct ceph_osd_client*,int *,int *,char*,char*,int ,struct page*,int,struct page**,size_t*) ;
 int FUNC_3 (void**,void*,struct parent_image_info*) ;
 int VAR_4 ;
 void* FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct rbd_device *VAR_5,
        struct page *VAR_6,
        struct page *VAR_7,
        struct parent_image_info *VAR_8)
{
 struct ceph_osd_client *VAR_9 = &VAR_5->rbd_client->client->osdc;
 size_t VAR_10 = VAR_3;
 void *VAR_11, *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_9, &VAR_5->header_oid, &VAR_5->header_oloc,
        "rbd", "parent_get", VAR_0,
        VAR_6, sizeof(u64), &VAR_7, &VAR_10);
 if (VAR_13)
  return VAR_13 == -VAR_2 ? 1 : VAR_13;

 VAR_11 = FUNC_4(VAR_7);
 VAR_12 = VAR_11 + VAR_10;
 VAR_13 = FUNC_3(&VAR_11, VAR_12, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_9, &VAR_5->header_oid, &VAR_5->header_oloc,
        "rbd", "parent_overlap_get", VAR_0,
        VAR_6, sizeof(u64), &VAR_7, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_11 = FUNC_4(VAR_7);
 VAR_12 = VAR_11 + VAR_10;
 FUNC_1(&VAR_11, VAR_12, VAR_8->has_overlap, VAR_4);
 if (VAR_8->has_overlap)
  FUNC_0(&VAR_11, VAR_12, VAR_8->overlap, VAR_4);

 return 0;

e_inval:
 return -VAR_1;
}
