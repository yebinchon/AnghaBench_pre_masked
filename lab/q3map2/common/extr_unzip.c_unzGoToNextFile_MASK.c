
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size_file_comment; scalar_t__ size_file_extra; scalar_t__ size_filename; } ;
struct TYPE_4__ {scalar_t__ number_entry; } ;
struct TYPE_5__ {int current_file_ok; scalar_t__ num_file; int cur_file_info_internal; TYPE_3__ cur_file_info; int pos_in_central_dir; TYPE_1__ gi; } ;
typedef TYPE_2__ unz_s ;
typedef int * unzFile ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_3__*,int *,int *,int ,int *,int ,int *,int ) ;

extern int FUNC_1 (unzFile VAR_4)
{
 unz_s* VAR_5;
 int VAR_6;

 if (VAR_4==((void*)0))
  return VAR_3;
 VAR_5=(unz_s*)VAR_4;
 if (!VAR_5->current_file_ok)
  return VAR_1;
 if (VAR_5->num_file+1==VAR_5->gi.number_entry)
  return VAR_1;

 VAR_5->pos_in_central_dir += VAR_0 + VAR_5->cur_file_info.size_filename +
   VAR_5->cur_file_info.size_file_extra + VAR_5->cur_file_info.size_file_comment ;
 VAR_5->num_file++;
 VAR_6 = FUNC_0(VAR_4,&VAR_5->cur_file_info,
              &VAR_5->cur_file_info_internal,
              ((void*)0),0,((void*)0),0,((void*)0),0);
 VAR_5->current_file_ok = (VAR_6 == VAR_2);
 return VAR_6;
}
