
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;
struct ieee80211req {int i_val; int i_type; int i_name; } ;
struct adapter {int socket; int name; int prev_roaming; } ;
typedef int ireq ;
typedef int ifr ;
typedef struct ieee80211req* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int ,int ,struct ieee80211req*) ;
 int FUNC_4 (int ,int ,int) ;

void
FUNC_5(void *VAR_5)
{
 struct adapter *VAR_6;
 struct ifreq VAR_7;
 struct ieee80211req VAR_8;

 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = VAR_5;


 FUNC_0((char *)&VAR_8, sizeof(VAR_8));
 FUNC_4(VAR_8.i_name, VAR_6->name, sizeof (VAR_7.ifr_name));
 VAR_8.i_type = VAR_0;
 VAR_8.i_val = VAR_6->prev_roaming;
 FUNC_3(VAR_6->socket, VAR_3, &VAR_8);

 FUNC_0((char *)&VAR_7, sizeof(VAR_7));
        FUNC_4(VAR_7.ifr_name, VAR_6->name, sizeof (VAR_7.ifr_name));
        FUNC_3(VAR_6->socket, VAR_2, (caddr_t)&VAR_7);
        VAR_7.ifr_flags &= ~VAR_1;
        FUNC_3(VAR_6->socket, VAR_4, (caddr_t)&VAR_7);
 FUNC_1(VAR_6->socket);
 FUNC_2(VAR_6);

 return;
}
