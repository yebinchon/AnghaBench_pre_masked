
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hypfs_dbfs_file {int dummy; } ;
struct hypfs_dbfs_data {struct hypfs_dbfs_file* dbfs_file; } ;


 int VAR_0 ;
 struct hypfs_dbfs_data* FUNC_0 (int,int ) ;

__attribute__((used)) static struct hypfs_dbfs_data *FUNC_1(struct hypfs_dbfs_file *VAR_1)
{
 struct hypfs_dbfs_data *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->dbfs_file = VAR_1;
 return VAR_2;
}
