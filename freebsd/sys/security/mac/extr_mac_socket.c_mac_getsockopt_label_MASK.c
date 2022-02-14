
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct socket {int so_label; } ;
struct mac {int m_string; int m_buflen; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (int ,char*,int ,int *) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct mac*) ;
 int VAR_5 ;
 int FUNC_6 (int ,struct label*) ;
 int FUNC_7 (struct label*,char*,char*,int ) ;
 struct label* FUNC_8 (int) ;
 int FUNC_9 (struct label*) ;
 char* FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (char*) ;

int
FUNC_12(struct ucred *VAR_6, struct socket *VAR_7, struct mac *VAR_8)
{
 char *VAR_9, *VAR_10;
 struct label *VAR_11;
 int VAR_12;

 if (!(VAR_5 & VAR_1))
  return (VAR_0);

 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12)
  return (VAR_12);

 VAR_10 = FUNC_10(VAR_8->m_buflen, VAR_2, VAR_3);
 VAR_12 = FUNC_2(VAR_8->m_string, VAR_10, VAR_8->m_buflen, ((void*)0));
 if (VAR_12) {
  FUNC_4(VAR_10, VAR_2);
  return (VAR_12);
 }

 VAR_9 = FUNC_10(VAR_8->m_buflen, VAR_2, VAR_3 | VAR_4);
 VAR_11 = FUNC_8(VAR_3);
 FUNC_0(VAR_7);
 FUNC_6(VAR_7->so_label, VAR_11);
 FUNC_1(VAR_7);
 VAR_12 = FUNC_7(VAR_11, VAR_10, VAR_9,
     VAR_8->m_buflen);
 FUNC_9(VAR_11);
 if (VAR_12 == 0)
  VAR_12 = FUNC_3(VAR_9, VAR_8->m_string, FUNC_11(VAR_9)+1);

 FUNC_4(VAR_9, VAR_2);
 FUNC_4(VAR_10, VAR_2);

 return (VAR_12);
}
