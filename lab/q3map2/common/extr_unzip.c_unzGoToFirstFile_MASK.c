
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_file_ok; int cur_file_info_internal; int cur_file_info; scalar_t__ num_file; int offset_central_dir; int pos_in_central_dir; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *,int ,int *,int ,int *,int ) ;

extern int FUNC_1 (unzFile VAR_2)
{
 int VAR_3=VAR_0;
 unz_s* VAR_4;
 if (VAR_2==((void*)0))
  return VAR_1;
 VAR_4=(unz_s*)VAR_2;
 VAR_4->pos_in_central_dir=VAR_4->offset_central_dir;
 VAR_4->num_file=0;
 VAR_3=FUNC_0(VAR_2,&VAR_4->cur_file_info,
            &VAR_4->cur_file_info_internal,
            ((void*)0),0,((void*)0),0,((void*)0),0);
 VAR_4->current_file_ok = (VAR_3 == VAR_0);
 return VAR_3;
}
