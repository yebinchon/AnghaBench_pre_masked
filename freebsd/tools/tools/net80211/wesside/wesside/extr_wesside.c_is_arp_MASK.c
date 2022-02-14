
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int dummy; } ;
struct arphdr {int dummy; } ;



int FUNC_0(struct ieee80211_frame *VAR_0, int VAR_1)
{
        int VAR_2 = 8 + sizeof(struct arphdr) + 10*2;

        if (VAR_1 == VAR_2 || VAR_1 == 54)
                return 1;

        return 0;
}
