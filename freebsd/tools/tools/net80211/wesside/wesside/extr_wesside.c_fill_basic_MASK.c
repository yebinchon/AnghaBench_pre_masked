
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_frame {scalar_t__ i_dur; scalar_t__ i_seq; int i_addr3; int i_addr2; int i_addr1; } ;
struct TYPE_4__ {int psent; } ;
struct TYPE_3__ {int bss; } ;


 unsigned short FUNC_0 (int ,int ) ;
 unsigned short FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_3(struct ieee80211_frame* VAR_3) {
 unsigned short* VAR_4;

 FUNC_2(VAR_3->i_addr1, VAR_2.bss, 6);
 FUNC_2(VAR_3->i_addr2, VAR_0, 6);
 FUNC_2(VAR_3->i_addr3, VAR_2.bss, 6);



 VAR_4 = (unsigned short*) VAR_3->i_seq;
 *VAR_4 = FUNC_0(0, VAR_1.psent);

 VAR_4 = (unsigned short*) VAR_3->i_dur;
 *VAR_4 = FUNC_1(32767);
}
