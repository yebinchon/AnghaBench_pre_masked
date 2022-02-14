
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diag2fc_data {int dummy; } ;
struct dbfs_d2fc_hdr {int dummy; } ;
struct TYPE_2__ {unsigned int len; unsigned int count; int reserved; int version; int tod_ext; } ;
struct dbfs_d2fc {TYPE_1__ hdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dbfs_d2fc*) ;
 int FUNC_1 (struct dbfs_d2fc*) ;
 struct dbfs_d2fc* FUNC_2 (int ,unsigned int*,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(void **VAR_2, void **VAR_3, size_t *VAR_4)
{
 struct dbfs_d2fc *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_2(VAR_1, &VAR_6, sizeof(VAR_5->hdr));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 FUNC_3(VAR_5->hdr.tod_ext);
 VAR_5->hdr.len = VAR_6 * sizeof(struct diag2fc_data);
 VAR_5->hdr.version = VAR_0;
 VAR_5->hdr.count = VAR_6;
 FUNC_4(&VAR_5->hdr.reserved, 0, sizeof(VAR_5->hdr.reserved));
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_5->hdr.len + sizeof(struct dbfs_d2fc_hdr);
 return 0;
}
