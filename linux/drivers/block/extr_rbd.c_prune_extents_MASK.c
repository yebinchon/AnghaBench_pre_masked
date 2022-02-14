
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ceph_file_extent {scalar_t__ fe_off; scalar_t__ fe_len; } ;



__attribute__((used)) static void FUNC_0(struct ceph_file_extent *VAR_0,
     u32 *VAR_1, u64 VAR_2)
{
 u32 VAR_3 = *VAR_1;


 while (VAR_3 && VAR_0[VAR_3 - 1].fe_off >= VAR_2)
  VAR_3--;

 if (VAR_3) {
  struct ceph_file_extent *VAR_4 = &VAR_0[VAR_3 - 1];


  if (VAR_4->fe_off + VAR_4->fe_len > VAR_2)
   VAR_4->fe_len = VAR_2 - VAR_4->fe_off;
 }

 *VAR_1 = VAR_3;
}
