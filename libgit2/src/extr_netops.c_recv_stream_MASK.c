
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {size_t len; size_t offset; size_t data; scalar_t__ cb_data; } ;
typedef TYPE_1__ gitno_buffer ;
typedef int git_stream ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t,int) ;
 size_t FUNC_1 (size_t,int ) ;

__attribute__((used)) static int FUNC_2(gitno_buffer *VAR_1)
{
 git_stream *VAR_2 = (git_stream *) VAR_1->cb_data;
 size_t VAR_3 = VAR_1->len - VAR_1->offset;
 ssize_t VAR_4;

 VAR_3 = FUNC_1(VAR_3, VAR_0);

 VAR_4 = FUNC_0(VAR_2, VAR_1->data + VAR_1->offset, (int)VAR_3);
 if (VAR_4 < 0)
  return -1;

 VAR_1->offset += VAR_4;
 return (int)VAR_4;
}
