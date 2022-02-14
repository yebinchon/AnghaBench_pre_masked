
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int opcode; } ;
struct rxe_qp {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





__attribute__((used)) static int FUNC_0(struct rxe_qp *VAR_13, u32 VAR_14, int VAR_15)
{
 switch (VAR_14) {
 case 131:
  if (VAR_13->req.opcode == VAR_1 ||
      VAR_13->req.opcode == VAR_4)
   return VAR_15 ?
    VAR_2 :
    VAR_4;
  else
   return VAR_15 ?
    VAR_5 :
    VAR_1;

 case 130:
  if (VAR_13->req.opcode == VAR_1 ||
      VAR_13->req.opcode == VAR_4)
   return VAR_15 ?
    VAR_3 :
    VAR_4;
  else
   return VAR_15 ?
    VAR_6 :
    VAR_1;

 case 129:
  if (VAR_13->req.opcode == VAR_7 ||
      VAR_13->req.opcode == VAR_10)
   return VAR_15 ?
    VAR_8 :
    VAR_10;
  else
   return VAR_15 ?
    VAR_11 :
    VAR_7;

 case 128:
  if (VAR_13->req.opcode == VAR_7 ||
      VAR_13->req.opcode == VAR_10)
   return VAR_15 ?
    VAR_9 :
    VAR_10;
  else
   return VAR_15 ?
    VAR_12 :
    VAR_7;
 }

 return -VAR_0;
}
