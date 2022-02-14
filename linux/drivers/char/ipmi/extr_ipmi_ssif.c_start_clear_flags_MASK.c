
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {unsigned char msg_flags; int ssif_state; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct ssif_info*,unsigned long*) ;
 scalar_t__ FUNC_1 (struct ssif_info*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct ssif_info *VAR_5, unsigned long *VAR_6)
{
 unsigned char VAR_7[3];

 VAR_5->msg_flags &= ~VAR_4;
 VAR_5->ssif_state = VAR_2;
 FUNC_0(VAR_5, VAR_6);


 VAR_7[0] = (VAR_1 << 2);
 VAR_7[1] = VAR_0;
 VAR_7[2] = VAR_4;

 if (FUNC_1(VAR_5, VAR_7, 3) != 0) {

  VAR_5->ssif_state = VAR_3;
 }
}
