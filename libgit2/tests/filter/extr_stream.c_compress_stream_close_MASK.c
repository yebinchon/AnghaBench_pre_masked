
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct compress_stream {TYPE_1__* next; int current_chunk; } ;
typedef int git_writestream ;
struct TYPE_2__ {int (* close ) (TYPE_1__*) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(git_writestream *VAR_0)
{
 struct compress_stream *VAR_1 = (struct compress_stream *)VAR_0;
 FUNC_0(0, VAR_1->current_chunk);
 VAR_1->next->close(VAR_1->next);
 return 0;
}
