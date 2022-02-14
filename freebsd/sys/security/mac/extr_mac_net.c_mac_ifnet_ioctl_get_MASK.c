
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mac {int m_string; int m_buflen; } ;
struct label {int dummy; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_label; } ;
typedef int mac ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int) ;
 int FUNC_1 (struct ifnet*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,struct mac*,int) ;
 int FUNC_3 (int ,char*,int ,int *) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct ifreq*) ;
 int FUNC_7 (struct mac*) ;
 int FUNC_8 (int ,struct label*) ;
 int FUNC_9 (struct label*,char*,char*,int ) ;
 struct label* FUNC_10 () ;
 int FUNC_11 (struct label*) ;
 int VAR_5 ;
 char* FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 (char*) ;

int
FUNC_14(struct ucred *VAR_6, struct ifreq *VAR_7,
    struct ifnet *VAR_8)
{
 char *VAR_9, *VAR_10;
 struct label *VAR_11;
 struct mac VAR_12;
 int VAR_13, VAR_14;

 if (!(VAR_5 & VAR_1))
  return (VAR_0);

 VAR_13 = FUNC_2(FUNC_6(VAR_7), &VAR_12, sizeof(VAR_12));
 if (VAR_13)
  return (VAR_13);

 VAR_13 = FUNC_7(&VAR_12);
 if (VAR_13)
  return (VAR_13);

 VAR_9 = FUNC_12(VAR_12.m_buflen, VAR_2, VAR_3);
 VAR_13 = FUNC_3(VAR_12.m_string, VAR_9, VAR_12.m_buflen, ((void*)0));
 if (VAR_13) {
  FUNC_5(VAR_9, VAR_2);
  return (VAR_13);
 }

 VAR_10 = FUNC_12(VAR_12.m_buflen, VAR_2, VAR_3 | VAR_4);
 VAR_11 = FUNC_10();
 FUNC_0(VAR_8, VAR_14);
 FUNC_8(VAR_8->if_label, VAR_11);
 FUNC_1(VAR_8, VAR_14);
 VAR_13 = FUNC_9(VAR_11, VAR_9, VAR_10,
     VAR_12.m_buflen);
 FUNC_11(VAR_11);
 if (VAR_13 == 0)
  VAR_13 = FUNC_4(VAR_10, VAR_12.m_string, FUNC_13(VAR_10)+1);

 FUNC_5(VAR_10, VAR_2);
 FUNC_5(VAR_9, VAR_2);

 return (VAR_13);
}
