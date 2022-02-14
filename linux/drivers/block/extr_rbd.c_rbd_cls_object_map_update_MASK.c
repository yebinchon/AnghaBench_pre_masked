
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct ceph_osd_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int FUNC_1 (struct page**) ;
 struct page** FUNC_2 (int,int ) ;
 int FUNC_3 (void**,scalar_t__) ;
 int FUNC_4 (void**,int const) ;
 int FUNC_5 (struct ceph_osd_request*,int,char*,char*) ;
 int FUNC_6 (struct ceph_osd_request*,int,struct page**,int,int ,int,int) ;
 void* FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct ceph_osd_request *VAR_1,
         int VAR_2, u64 VAR_3, u8 VAR_4,
         const u8 *VAR_5)
{
 struct page **VAR_6;
 void *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_1, VAR_2, "rbd", "object_map_update");
 if (VAR_9)
  return VAR_9;

 VAR_6 = FUNC_2(1, VAR_0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = VAR_8 = FUNC_7(VAR_6[0]);
 FUNC_3(&VAR_7, VAR_3);
 FUNC_3(&VAR_7, VAR_3 + 1);
 FUNC_4(&VAR_7, VAR_4);
 if (VAR_5) {
  FUNC_4(&VAR_7, 1);
  FUNC_4(&VAR_7, *VAR_5);
 } else {
  FUNC_4(&VAR_7, 0);
 }

 FUNC_6(VAR_1, VAR_2, VAR_6, VAR_7 - VAR_8, 0,
       0, 1);
 return 0;
}
