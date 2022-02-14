
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

int FUNC_2(const git_buf *VAR_0, const git_buf *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->ptr, VAR_1->ptr, FUNC_1(VAR_0->size, VAR_1->size));
 return (VAR_2 != 0) ? VAR_2 :
  (VAR_0->size < VAR_1->size) ? -1 : (VAR_0->size > VAR_1->size) ? 1 : 0;
}
