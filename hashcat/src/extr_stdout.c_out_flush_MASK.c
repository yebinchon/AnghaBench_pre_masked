
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int fp; int buf; } ;
typedef TYPE_1__ out_t ;


 int FUNC_0 (int ,int,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1 (out_t *VAR_0)
{
  if (VAR_0->len == 0) return;

  FUNC_0 (VAR_0->buf, 1, VAR_0->len, &VAR_0->fp);

  VAR_0->len = 0;
}
