
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ git_off_t ;
typedef int git_odb_stream ;
typedef int git_odb_backend ;
typedef int git_object_t ;
struct TYPE_6__ {int mode; int * free; int * finalize_write; int * write; int * read; int * backend; } ;
struct TYPE_7__ {size_t size; TYPE_1__ stream; int * buffer; int type; } ;
typedef TYPE_2__ fake_wstream ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (size_t) ;

__attribute__((used)) static int FUNC_5(git_odb_stream **VAR_4, git_odb_backend *VAR_5, git_off_t VAR_6, git_object_t VAR_7)
{
 fake_wstream *VAR_8;
 size_t VAR_9;

 FUNC_1(VAR_6);
 VAR_9 = (size_t)VAR_6;

 VAR_8 = FUNC_2(1, sizeof(fake_wstream));
 FUNC_0(VAR_8);

 VAR_8->size = VAR_9;
 VAR_8->type = VAR_7;
 VAR_8->buffer = FUNC_4(VAR_9);
 if (VAR_8->buffer == ((void*)0)) {
  FUNC_3(VAR_8);
  return -1;
 }

 VAR_8->stream.backend = VAR_5;
 VAR_8->stream.read = ((void*)0);
 VAR_8->stream.write = &VAR_3;
 VAR_8->stream.finalize_write = &VAR_2;
 VAR_8->stream.free = &VAR_1;
 VAR_8->stream.mode = VAR_0;

 *VAR_4 = (git_odb_stream *)VAR_8;
 return 0;
}
