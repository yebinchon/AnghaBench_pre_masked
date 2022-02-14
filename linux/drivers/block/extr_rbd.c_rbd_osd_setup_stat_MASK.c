
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ceph_timespec {int dummy; } ;
struct ceph_osd_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int FUNC_1 (struct page**) ;
 struct page** FUNC_2 (int,int ) ;
 int FUNC_3 (struct ceph_osd_request*,int,int ,int ) ;
 int FUNC_4 (struct ceph_osd_request*,int,struct page**,int,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct ceph_osd_request *VAR_2, int VAR_3)
{
 struct page **VAR_4;
 VAR_4 = FUNC_2(1, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_3(VAR_2, VAR_3, VAR_0, 0);
 FUNC_4(VAR_2, VAR_3, VAR_4,
         8 + sizeof(struct ceph_timespec),
         0, 0, 1);
 return 0;
}
