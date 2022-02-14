
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct loop_device {int lo_offset; int transfer; } ;
struct loop_cmd {int use_aio; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int) ;
 int VAR_2 ;
 struct loop_cmd* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct loop_device*,struct request*,int) ;
 int FUNC_4 (struct loop_device*,struct request*,int) ;
 int FUNC_5 (struct loop_device*,struct request*,int) ;
 int FUNC_6 (struct loop_device*,struct request*) ;
 int FUNC_7 (struct loop_device*,struct loop_cmd*,int,int ) ;
 int FUNC_8 (struct loop_device*,struct request*,int) ;
 int FUNC_9 (struct loop_device*,struct request*,int) ;
 int FUNC_10 (struct request*) ;

__attribute__((used)) static int FUNC_11(struct loop_device *VAR_3, struct request *VAR_4)
{
 struct loop_cmd *VAR_5 = FUNC_1(VAR_4);
 loff_t VAR_6 = ((loff_t) FUNC_2(VAR_4) << 9) + VAR_3->lo_offset;
 switch (FUNC_10(VAR_4)) {
 case 131:
  return FUNC_6(VAR_3, VAR_4);
 case 132:
 case 128:
  return FUNC_3(VAR_3, VAR_4, VAR_6);
 case 129:
  if (VAR_3->transfer)
   return FUNC_9(VAR_3, VAR_4, VAR_6);
  else if (VAR_5->use_aio)
   return FUNC_7(VAR_3, VAR_5, VAR_6, VAR_2);
  else
   return FUNC_8(VAR_3, VAR_4, VAR_6);
 case 130:
  if (VAR_3->transfer)
   return FUNC_5(VAR_3, VAR_4, VAR_6);
  else if (VAR_5->use_aio)
   return FUNC_7(VAR_3, VAR_5, VAR_6, VAR_1);
  else
   return FUNC_4(VAR_3, VAR_4, VAR_6);
 default:
  FUNC_0(1);
  return -VAR_0;
 }
}
