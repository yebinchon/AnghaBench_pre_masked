
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tl_combinator {int var_num; int args_num; int IP_len; int IP; int result; TYPE_1__** args; scalar_t__ name; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void**,int,int*) ;
 int FUNC_3 (TYPE_1__*,void**,int,int*,int,int ) ;
 int FUNC_4 (TYPE_1__*,void**,int,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 void* VAR_2 ;
 void* VAR_3 ;

int FUNC_6 (struct tl_combinator *VAR_4, void **VAR_5, int VAR_6) {
  if (VAR_6 <= 10) { return -1; }
  FUNC_1 (!VAR_4->IP);
  int VAR_7 = 0;
  VAR_5[VAR_7 ++] = VAR_2;
  VAR_5[VAR_7 ++] = (void *)(long)VAR_4->name;
  int VAR_8;
  int VAR_9[VAR_4->var_num];
  FUNC_5 (VAR_9, 0, sizeof (int) * VAR_4->var_num);
  int VAR_10;
  for (VAR_8 = 0; VAR_8 < VAR_4->args_num; VAR_8++) if (!(VAR_4->args[VAR_8]->flags & VAR_1)) {
    if (VAR_4->args[VAR_8]->flags & VAR_0) {
      VAR_10 = FUNC_4 (VAR_4->args[VAR_8], VAR_5 + VAR_7, VAR_6 - VAR_7, VAR_9, VAR_8 + 1);
    } else {

      VAR_10 = FUNC_3 (VAR_4->args[VAR_8], VAR_5 + VAR_7, VAR_6 - VAR_7, VAR_9, VAR_8 + 1, 0);
    }
    if (VAR_10 < 0) { return -1; }
    VAR_7 += VAR_10;

  }
  int VAR_11 = FUNC_2 (VAR_4->result, VAR_5 + VAR_7, VAR_6 - VAR_7, VAR_9);
  if (VAR_11 < 0) { return -1; }
  VAR_7 += VAR_11;
  if (VAR_6 - VAR_7 <= 10) { return -1; }
  VAR_5[VAR_7 ++] = VAR_3;
  VAR_4->IP = FUNC_0 (VAR_5, VAR_7);
  VAR_4->IP_len = VAR_7;
  return VAR_7;
}
