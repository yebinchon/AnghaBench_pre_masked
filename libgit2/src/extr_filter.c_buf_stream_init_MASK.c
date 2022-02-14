
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free; int close; int write; } ;
struct buf_stream {int * target; TYPE_1__ parent; } ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct buf_stream*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct buf_stream *VAR_3, git_buf *VAR_4)
{
 FUNC_1(VAR_3, 0, sizeof(struct buf_stream));

 VAR_3->parent.write = VAR_2;
 VAR_3->parent.close = VAR_0;
 VAR_3->parent.free = VAR_1;
 VAR_3->target = VAR_4;

 FUNC_0(VAR_4);
}
