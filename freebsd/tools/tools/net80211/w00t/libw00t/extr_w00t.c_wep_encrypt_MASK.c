
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uLong ;
struct ieee80211_frame {int dummy; } ;
typedef int seed ;
typedef int RC4_KEY ;


 int FUNC_0 (int *,int,char*,char*) ;
 int FUNC_1 (int *,int,char*) ;
 char* VAR_0 ;
 int FUNC_2 (int) ;
 long FUNC_3 (long,char*,int) ;
 int FUNC_4 (char*,char*,int) ;

void FUNC_5(struct ieee80211_frame *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 RC4_KEY VAR_5;
 char VAR_6[64];
 char *VAR_7 = (char*) (VAR_1+1);
 uLong VAR_8 = FUNC_3(0L, VAR_0, 0);
 uLong *VAR_9;

 FUNC_2(sizeof(VAR_6) >= VAR_4 + 3);
 FUNC_4(VAR_6, VAR_7, 3);
 FUNC_4(&VAR_6[3], VAR_3, VAR_4);

 FUNC_1(&VAR_5, VAR_4+3, VAR_6);

 VAR_2 -= sizeof(*VAR_1);
 VAR_7 += 4;
 VAR_8 = FUNC_3(VAR_8, VAR_7, VAR_2 - 4);
 VAR_9 = (uLong*) (VAR_7+VAR_2-4);
 *VAR_9 = VAR_8;

 FUNC_0(&VAR_5, VAR_2, VAR_7, VAR_7);
}
