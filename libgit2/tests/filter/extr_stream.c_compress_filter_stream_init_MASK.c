
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free; int close; int write; } ;
struct compress_stream {int mode; int * next; TYPE_1__ parent; } ;
typedef int git_writestream ;
typedef int git_filter_source ;
typedef void* git_filter ;


 int FUNC_0 (void**) ;
 int FUNC_1 (struct compress_stream*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct compress_stream* FUNC_2 (int,int) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(
 git_writestream **VAR_3,
 git_filter *VAR_4,
 void **VAR_5,
 const git_filter_source *VAR_6,
 git_writestream *VAR_7)
{
 struct compress_stream *VAR_8 = FUNC_2(1, sizeof(struct compress_stream));
 FUNC_1(VAR_8);

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);

 VAR_8->parent.write = VAR_2;
 VAR_8->parent.close = VAR_0;
 VAR_8->parent.free = VAR_1;
 VAR_8->next = VAR_7;
 VAR_8->mode = FUNC_3(VAR_6);

 *VAR_3 = (git_writestream *)VAR_8;
 return 0;
}
