
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
__attribute__((used)) static int FUNC_0(struct rxe_qp *VAR_18, u32 VAR_19, int VAR_20)
{
 switch (VAR_19) {
 case 133:
  if (VAR_18->req.opcode == VAR_4 ||
      VAR_18->req.opcode == VAR_7)
   return VAR_20 ?
    VAR_5 :
    VAR_7;
  else
   return VAR_20 ?
    VAR_8 :
    VAR_4;

 case 132:
  if (VAR_18->req.opcode == VAR_4 ||
      VAR_18->req.opcode == VAR_7)
   return VAR_20 ?
    VAR_6 :
    VAR_7;
  else
   return VAR_20 ?
    VAR_9 :
    VAR_4;

 case 130:
  if (VAR_18->req.opcode == VAR_10 ||
      VAR_18->req.opcode == VAR_14)
   return VAR_20 ?
    VAR_11 :
    VAR_14;
  else
   return VAR_20 ?
    VAR_15 :
    VAR_10;

 case 129:
  if (VAR_18->req.opcode == VAR_10 ||
      VAR_18->req.opcode == VAR_14)
   return VAR_20 ?
    VAR_12 :
    VAR_14;
  else
   return VAR_20 ?
    VAR_16 :
    VAR_10;

 case 134:
  return VAR_3;

 case 137:
  return VAR_1;

 case 136:
  return VAR_2;

 case 128:
  if (VAR_18->req.opcode == VAR_10 ||
      VAR_18->req.opcode == VAR_14)
   return VAR_20 ? VAR_13 :
    VAR_14;
  else
   return VAR_20 ? VAR_17 :
    VAR_10;
 case 131:
 case 135:
  return VAR_19;
 }

 return -VAR_0;
}
