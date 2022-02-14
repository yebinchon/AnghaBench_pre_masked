
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free; int close; int write; } ;
struct proxy_stream {void** payload; int temp_buf; int * output; int * target; int const* source; int * filter; TYPE_1__ parent; } ;
typedef int git_writestream ;
typedef int git_filter_source ;
typedef int git_filter ;
typedef int git_buf ;


 int FUNC_0 (struct proxy_stream*) ;
 struct proxy_stream* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(
 git_writestream **VAR_3,
 git_filter *VAR_4,
 git_buf *VAR_5,
 void **VAR_6,
 const git_filter_source *VAR_7,
 git_writestream *VAR_8)
{
 struct proxy_stream *VAR_9 = FUNC_1(1, sizeof(struct proxy_stream));
 FUNC_0(VAR_9);

 VAR_9->parent.write = VAR_2;
 VAR_9->parent.close = VAR_0;
 VAR_9->parent.free = VAR_1;
 VAR_9->filter = VAR_4;
 VAR_9->payload = VAR_6;
 VAR_9->source = VAR_7;
 VAR_9->target = VAR_8;
 VAR_9->output = VAR_5 ? VAR_5 : &VAR_9->temp_buf;

 if (VAR_5)
  FUNC_2(VAR_5);

 *VAR_3 = (git_writestream *)VAR_9;
 return 0;
}
