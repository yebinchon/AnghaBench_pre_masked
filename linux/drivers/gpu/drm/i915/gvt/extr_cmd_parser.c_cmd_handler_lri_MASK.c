
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct parser_exec_state {scalar_t__ ring_id; TYPE_1__* vgpu; } ;
struct intel_gvt {int dev_priv; } ;
struct TYPE_2__ {struct intel_gvt* gvt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct parser_exec_state*) ;
 scalar_t__ FUNC_3 (struct parser_exec_state*,int) ;
 int FUNC_4 (struct parser_exec_state*,scalar_t__,int,char*) ;
 scalar_t__ FUNC_5 (struct parser_exec_state*,int) ;
 int FUNC_6 (char*,int,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct parser_exec_state *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 int VAR_9 = FUNC_2(VAR_6);
 struct intel_gvt *VAR_10 = VAR_6->vgpu->gvt;
 u32 VAR_11 = FUNC_0(1);






 if ((VAR_9 < VAR_11) || (VAR_9 > 127)) {
  FUNC_6("len is not valid:  len=%u  valid_len=%u\n",
   VAR_9, VAR_11);
  return -VAR_3;
 }

 for (VAR_7 = 1; VAR_7 < VAR_9; VAR_7 += 2) {
  if (FUNC_1(VAR_10->dev_priv) && VAR_6->ring_id != VAR_5) {
   if (VAR_6->ring_id == VAR_0 &&
       FUNC_3(VAR_6, VAR_7) == FUNC_7(VAR_1))
    VAR_8 |= 0;
   else
    VAR_8 |= FUNC_5(VAR_6, VAR_7) ? -VAR_2 : 0;
  }
  if (VAR_8)
   break;
  VAR_8 |= FUNC_4(VAR_6, FUNC_3(VAR_6, VAR_7), VAR_7, "lri");
  if (VAR_8)
   break;
 }
 return VAR_8;
}
