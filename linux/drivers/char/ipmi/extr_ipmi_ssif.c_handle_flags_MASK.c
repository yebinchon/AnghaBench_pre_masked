
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int msg_flags; int ssif_state; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ssif_info*,unsigned long*) ;
 int FUNC_2 (struct ssif_info*,int ) ;
 int FUNC_3 (struct ssif_info*,unsigned long*) ;
 int FUNC_4 (struct ssif_info*,unsigned long*) ;
 int FUNC_5 (struct ssif_info*,unsigned long*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(struct ssif_info *VAR_5, unsigned long *VAR_6)
{
 if (VAR_5->msg_flags & VAR_3) {

  FUNC_2(VAR_5, VAR_4);
  FUNC_3(VAR_5, VAR_6);
  FUNC_0(VAR_5->intf);
 } else if (VAR_5->msg_flags & VAR_1)

  FUNC_5(VAR_5, VAR_6);
 else if (VAR_5->msg_flags & VAR_0)

  FUNC_4(VAR_5, VAR_6);
 else {
  VAR_5->ssif_state = VAR_2;
  FUNC_1(VAR_5, VAR_6);
 }
}
