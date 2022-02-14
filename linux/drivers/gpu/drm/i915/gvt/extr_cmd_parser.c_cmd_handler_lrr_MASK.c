
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser_exec_state {TYPE_2__* vgpu; } ;
struct TYPE_4__ {TYPE_1__* gvt; } ;
struct TYPE_3__ {int dev_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct parser_exec_state*) ;
 int FUNC_2 (struct parser_exec_state*,int) ;
 int FUNC_3 (struct parser_exec_state*,int ,int,char*) ;
 scalar_t__ FUNC_4 (struct parser_exec_state*,int) ;

__attribute__((used)) static int FUNC_5(struct parser_exec_state *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 int VAR_4 = FUNC_1(VAR_1);

 for (VAR_2 = 1; VAR_2 < VAR_4; VAR_2 += 2) {
  if (FUNC_0(VAR_1->vgpu->gvt->dev_priv))
   VAR_3 |= ((FUNC_4(VAR_1, VAR_2) ||
     (FUNC_4(VAR_1, VAR_2 + 1)))) ?
    -VAR_0 : 0;
  if (VAR_3)
   break;
  VAR_3 |= FUNC_3(VAR_1, FUNC_2(VAR_1, VAR_2), VAR_2, "lrr-src");
  if (VAR_3)
   break;
  VAR_3 |= FUNC_3(VAR_1, FUNC_2(VAR_1, VAR_2 + 1), VAR_2, "lrr-dst");
  if (VAR_3)
   break;
 }
 return VAR_3;
}
