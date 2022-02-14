
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_task {struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {scalar_t__* dir; } ;
typedef int sector_t ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iscsi_iser_task*,int,int *) ;

__attribute__((used)) static u8
FUNC_1(struct iscsi_task *VAR_2, sector_t *VAR_3)
{
 struct iscsi_iser_task *VAR_4 = VAR_2->dd_data;
 enum iser_data_dir VAR_5 = VAR_4->dir[VAR_0] ?
     VAR_0 : VAR_1;

 return FUNC_0(VAR_4, VAR_5, VAR_3);
}
