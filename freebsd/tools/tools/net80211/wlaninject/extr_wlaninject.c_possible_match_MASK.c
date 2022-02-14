
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int* i_fc; int i_addr3; int i_addr2; int i_addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct ieee80211_frame *VAR_3, int VAR_4,
     struct ieee80211_frame *VAR_5, int VAR_6)
{
 if (VAR_4 != VAR_6)
  return 0;

 if (FUNC_0(VAR_3->i_addr1, VAR_5->i_addr1, 6) != 0)
  FUNC_1("Addr1 doesn't match\n");

 if ((VAR_3->i_fc[0] & VAR_2) !=
     (VAR_5->i_fc[0] & VAR_2))
  return 0;

 if ((VAR_3->i_fc[0] & VAR_0) !=
     (VAR_5->i_fc[0] & VAR_0))
  return 0;


 if ((VAR_5->i_fc[0] & VAR_2) == VAR_1)
  return 1;

 if (FUNC_0(VAR_3->i_addr2, VAR_5->i_addr2, 6) == 0 &&
     FUNC_0(VAR_3->i_addr3, VAR_5->i_addr3, 6) == 0)
      return 1;

 return 0;
}
