
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nlm_fmn_msg {int dummy; } ;
struct fmn_message_handler {int arg; int (* action ) (int,int,int,int,struct nlm_fmn_msg*,int ) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct fmn_message_handler* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int*,int*,int*,struct nlm_fmn_msg*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int,int,int,struct nlm_fmn_msg*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct fmn_message_handler *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct nlm_fmn_msg VAR_11;
 uint32_t VAR_12, VAR_13;

 VAR_12 = FUNC_1();

 FUNC_3(VAR_3, 0);
 while (1) {


  VAR_13 = (FUNC_4() >> 24) & 0xff;
  if (VAR_13 == 0xff)
   break;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {

   if (VAR_13 & (1 << VAR_6))
    continue;
   VAR_7 = FUNC_2(VAR_6, &VAR_8, &VAR_9, &VAR_10,
      &VAR_11);
   if (VAR_7 != 0)
    continue;

   VAR_5 = &VAR_1[VAR_10];
   if (VAR_5->action == ((void*)0))
    FUNC_5("No msgring handler for stnid %d\n",
      VAR_10);
   else {
    FUNC_0(VAR_12);
    VAR_5->action(VAR_6, VAR_10, VAR_8, VAR_9,
     &VAR_11, VAR_5->arg);
    VAR_12 = FUNC_1();
   }
  }
 };

 FUNC_3(VAR_3, (1 << VAR_2) - 1);
 FUNC_0(VAR_12);
 return VAR_0;
}
