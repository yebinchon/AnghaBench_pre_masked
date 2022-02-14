
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; scalar_t__ asize; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,size_t) ;

void FUNC_2(char *VAR_0, size_t VAR_1, const git_buf *VAR_2)
{
 size_t VAR_3;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 VAR_0[0] = '\0';

 if (VAR_2->size == 0 || VAR_2->asize <= 0)
  return;

 VAR_3 = VAR_2->size;
 if (VAR_3 > VAR_1 - 1)
  VAR_3 = VAR_1 - 1;
 FUNC_1(VAR_0, VAR_2->ptr, VAR_3);
 VAR_0[VAR_3] = '\0';
}
