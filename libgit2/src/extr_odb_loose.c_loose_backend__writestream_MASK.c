
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ (* write ) (int *,char*,size_t) ;int mode; int * free; int * finalize_write; int * read; int * backend; } ;
struct TYPE_13__ {int fbuf; TYPE_1__ stream; } ;
typedef TYPE_2__ loose_writestream ;
struct TYPE_14__ {int object_file_mode; int objects_dir; } ;
typedef TYPE_3__ loose_backend ;
typedef int hdr ;
typedef int git_off_t ;
typedef int git_odb_stream ;
typedef int git_odb_backend ;
typedef int git_object_t ;
struct TYPE_15__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (size_t*,char*,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int *,char*,size_t) ;
 scalar_t__ FUNC_11 (int *,char*,size_t) ;

__attribute__((used)) static int FUNC_12(git_odb_stream **VAR_5, git_odb_backend *VAR_6, git_off_t VAR_7, git_object_t VAR_8)
{
 loose_backend *VAR_9;
 loose_writestream *VAR_10 = ((void*)0);
 char VAR_11[VAR_2];
 git_buf VAR_12 = VAR_0;
 size_t VAR_13;
 int VAR_14;

 FUNC_1(VAR_6 && VAR_7 >= 0);

 VAR_9 = (loose_backend *)VAR_6;
 *VAR_5 = ((void*)0);

 if ((VAR_14 = FUNC_9(&VAR_13,
  VAR_11, sizeof(VAR_11), VAR_7, VAR_8)) < 0)
  return VAR_14;

 VAR_10 = FUNC_3(1, sizeof(loose_writestream));
 FUNC_0(VAR_10);

 VAR_10->stream.backend = VAR_6;
 VAR_10->stream.read = ((void*)0);
 VAR_10->stream.write = &FUNC_10;
 VAR_10->stream.finalize_write = &VAR_3;
 VAR_10->stream.free = &VAR_4;
 VAR_10->stream.mode = VAR_1;

 if (FUNC_6(&VAR_12, VAR_9->objects_dir, "tmp_object") < 0 ||
  FUNC_8(&VAR_10->fbuf, VAR_12.ptr, FUNC_2(VAR_9),
   VAR_9->object_file_mode) < 0 ||
  VAR_10->stream.write((git_odb_stream *)VAR_10, VAR_11, VAR_13) < 0)
 {
  FUNC_7(&VAR_10->fbuf);
  FUNC_4(VAR_10);
  VAR_10 = ((void*)0);
 }
 FUNC_5(&VAR_12);
 *VAR_5 = (git_odb_stream *)VAR_10;

 return !VAR_10 ? -1 : 0;
}
