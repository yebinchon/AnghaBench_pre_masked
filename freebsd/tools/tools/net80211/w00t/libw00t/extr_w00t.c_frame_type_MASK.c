
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int* i_fc; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct ieee80211_frame *VAR_2, int VAR_3, int VAR_4)
{
        if ((VAR_2->i_fc[0] & VAR_1) != VAR_3)
                return 0;

        if ((VAR_2->i_fc[0] & VAR_0) != VAR_4)
                return 0;

        return 1;
}
