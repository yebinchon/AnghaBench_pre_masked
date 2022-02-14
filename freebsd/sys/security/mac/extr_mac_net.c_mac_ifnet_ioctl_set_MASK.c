
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct mac {int m_buflen; int m_string; } ;
struct label {int dummy; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_label; } ;
typedef int mac ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int) ;
 int FUNC_1 (struct ifnet*,int) ;
 int FUNC_2 (int ,struct ucred*,struct ifnet*,int ,struct label*) ;
 int FUNC_3 (int ,struct ucred*,struct ifnet*,int ,struct label*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,struct mac*,int) ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int FUNC_6 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct ifreq*) ;
 int FUNC_8 (struct mac*) ;
 int FUNC_9 (struct label*,char*) ;
 struct label* FUNC_10 () ;
 int FUNC_11 (struct label*) ;
 int VAR_7 ;
 char* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct ucred*,int ) ;

int
FUNC_14(struct ucred *VAR_8, struct ifreq *VAR_9, struct ifnet *VAR_10)
{
 struct label *VAR_11;
 struct mac VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15;

 if (!(VAR_7 & VAR_1))
  return (VAR_0);

 VAR_14 = FUNC_4(FUNC_7(VAR_9), &VAR_12, sizeof(VAR_12));
 if (VAR_14)
  return (VAR_14);

 VAR_14 = FUNC_8(&VAR_12);
 if (VAR_14)
  return (VAR_14);

 VAR_13 = FUNC_12(VAR_12.m_buflen, VAR_2, VAR_3);
 VAR_14 = FUNC_5(VAR_12.m_string, VAR_13, VAR_12.m_buflen, ((void*)0));
 if (VAR_14) {
  FUNC_6(VAR_13, VAR_2);
  return (VAR_14);
 }

 VAR_11 = FUNC_10();
 VAR_14 = FUNC_9(VAR_11, VAR_13);
 FUNC_6(VAR_13, VAR_2);
 if (VAR_14) {
  FUNC_11(VAR_11);
  return (VAR_14);
 }






 VAR_14 = FUNC_13(VAR_8, VAR_4);
 if (VAR_14) {
  FUNC_11(VAR_11);
  return (VAR_14);
 }

 FUNC_0(VAR_10, VAR_15);
 FUNC_2(VAR_5, VAR_8, VAR_10,
     VAR_10->if_label, VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_10, VAR_15);
  FUNC_11(VAR_11);
  return (VAR_14);
 }

 FUNC_3(VAR_6, VAR_8, VAR_10, VAR_10->if_label,
     VAR_11);
 FUNC_1(VAR_10, VAR_15);

 FUNC_11(VAR_11);
 return (0);
}
