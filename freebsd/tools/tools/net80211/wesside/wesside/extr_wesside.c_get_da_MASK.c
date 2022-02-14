
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int* i_fc; void* i_addr1; void* i_addr3; } ;


 int VAR_0 ;

void *FUNC_0(struct ieee80211_frame *VAR_1)
{
        if (VAR_1->i_fc[1] & VAR_0)
                return VAR_1->i_addr1;
        else
                return VAR_1->i_addr3;
}
