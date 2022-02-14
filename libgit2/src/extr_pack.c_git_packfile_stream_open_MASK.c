
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct git_pack_file {int dummy; } ;
struct TYPE_6__ {void* next_out; void* next_in; int zfree; int zalloc; } ;
struct TYPE_5__ {TYPE_3__ zstream; struct git_pack_file* p; int curpos; } ;
typedef TYPE_1__ git_packfile_stream ;
typedef int git_off_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(git_packfile_stream *VAR_5, struct git_pack_file *VAR_6, git_off_t VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_5, 0, sizeof(git_packfile_stream));
 VAR_5->curpos = VAR_7;
 VAR_5->p = VAR_6;
 VAR_5->zstream.zalloc = VAR_3;
 VAR_5->zstream.zfree = VAR_4;
 VAR_5->zstream.next_in = VAR_1;
 VAR_5->zstream.next_out = VAR_1;
 VAR_8 = FUNC_1(&VAR_5->zstream);
 if (VAR_8 != VAR_2) {
  FUNC_0(VAR_0, "failed to init packfile stream");
  return -1;
 }

 return 0;
}
