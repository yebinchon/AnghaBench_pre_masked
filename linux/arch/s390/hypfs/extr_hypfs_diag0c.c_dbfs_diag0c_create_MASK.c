
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hypfs_diag0c_hdr {int dummy; } ;
struct hypfs_diag0c_entry {int dummy; } ;
struct TYPE_2__ {unsigned int len; unsigned int count; int version; int tod_ext; } ;
struct hypfs_diag0c_data {TYPE_1__ hdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hypfs_diag0c_data*) ;
 int FUNC_1 (struct hypfs_diag0c_data*) ;
 struct hypfs_diag0c_data* FUNC_2 (unsigned int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_5(void **VAR_1, void **VAR_2, size_t *VAR_3)
{
 struct hypfs_diag0c_data *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_2(&VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 FUNC_4(&VAR_4->hdr, 0, sizeof(VAR_4->hdr));
 FUNC_3(VAR_4->hdr.tod_ext);
 VAR_4->hdr.len = VAR_5 * sizeof(struct hypfs_diag0c_entry);
 VAR_4->hdr.version = VAR_0;
 VAR_4->hdr.count = VAR_5;
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_4->hdr.len + sizeof(struct hypfs_diag0c_hdr);
 return 0;
}
