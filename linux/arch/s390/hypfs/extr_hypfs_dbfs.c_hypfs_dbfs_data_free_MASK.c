
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hypfs_dbfs_data {int buf_free_ptr; TYPE_1__* dbfs_file; } ;
struct TYPE_2__ {int (* data_free ) (int ) ;} ;


 int FUNC_0 (struct hypfs_dbfs_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hypfs_dbfs_data *VAR_0)
{
 VAR_0->dbfs_file->data_free(VAR_0->buf_free_ptr);
 FUNC_0(VAR_0);
}
