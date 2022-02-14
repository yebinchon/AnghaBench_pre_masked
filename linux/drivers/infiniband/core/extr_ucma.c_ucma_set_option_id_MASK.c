
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucma_context {int cm_id; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ucma_context *VAR_2, int VAR_3,
         void *VAR_4, size_t VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_3) {
 case 128:
  if (VAR_5 != sizeof(u8)) {
   VAR_6 = -VAR_0;
   break;
  }
  FUNC_3(VAR_2->cm_id, *((u8 *) VAR_4));
  break;
 case 129:
  if (VAR_5 != sizeof(int)) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_2(VAR_2->cm_id, *((int *) VAR_4) ? 1 : 0);
  break;
 case 130:
  if (VAR_5 != sizeof(int)) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_1(VAR_2->cm_id, *((int *) VAR_4) ? 1 : 0);
  break;
 case 131:
  if (VAR_5 != sizeof(u8)) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_0(VAR_2->cm_id, *((u8 *)VAR_4));
  break;
 default:
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
