
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct git_pack_header {int dummy; } ;
typedef scalar_t__ git_off_t ;
struct TYPE_13__ {scalar_t__ size; } ;
typedef TYPE_2__ git_mwindow_file ;
typedef int git_mwindow ;
struct TYPE_14__ {scalar_t__ local_objects; scalar_t__ total_objects; } ;
typedef TYPE_3__ git_indexer_progress ;
struct TYPE_16__ {int hdr_entries; } ;
struct TYPE_15__ {scalar_t__ inbuf_len; TYPE_6__ hdr; int trailer; TYPE_1__* pack; } ;
typedef TYPE_4__ git_indexer ;
struct TYPE_12__ {TYPE_2__ mwf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_2__*,int **,scalar_t__,size_t,unsigned int*) ;
 int FUNC_4 (TYPE_4__*,void*,unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_6__*,int ,int) ;

__attribute__((used)) static int FUNC_7(git_indexer *VAR_0, git_indexer_progress *VAR_1)
{
 void *VAR_2;
 size_t VAR_3 = 1024*1024;
 git_off_t VAR_4 = 0;
 git_mwindow *VAR_5 = ((void*)0);
 git_mwindow_file *VAR_6;
 unsigned int VAR_7;

 VAR_6 = &VAR_0->pack->mwf;

 FUNC_0(&VAR_0->trailer);



 VAR_0->hdr.hdr_entries = FUNC_5(VAR_1->total_objects + VAR_1->local_objects);
 if (FUNC_6(VAR_0, &VAR_0->hdr, 0, sizeof(struct git_pack_header)) < 0)
  return -1;







 FUNC_2(VAR_6);
 VAR_0->inbuf_len = 0;
 while (VAR_4 < VAR_6->size) {
  VAR_2 = FUNC_3(VAR_6, &VAR_5, VAR_4, VAR_3, &VAR_7);
  if (VAR_2 == ((void*)0))
   return -1;

  FUNC_4(VAR_0, VAR_2, VAR_7);
  VAR_4 += VAR_7;

  FUNC_1(&VAR_5);
 }

 return 0;
}
