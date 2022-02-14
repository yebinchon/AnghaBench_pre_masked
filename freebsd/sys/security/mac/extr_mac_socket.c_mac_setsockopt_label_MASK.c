
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct socket {int dummy; } ;
struct mac {int m_buflen; int m_string; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct mac*) ;
 int VAR_4 ;
 int FUNC_3 (struct label*,char*) ;
 struct label* FUNC_4 (int ) ;
 int FUNC_5 (struct label*) ;
 int FUNC_6 (struct ucred*,struct socket*,struct label*) ;
 char* FUNC_7 (int ,int ,int ) ;

int
FUNC_8(struct ucred *VAR_5, struct socket *VAR_6, struct mac *VAR_7)
{
 struct label *VAR_8;
 char *VAR_9;
 int VAR_10;

 if (!(VAR_4 & VAR_1))
  return (VAR_0);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  return (VAR_10);

 VAR_9 = FUNC_7(VAR_7->m_buflen, VAR_2, VAR_3);
 VAR_10 = FUNC_0(VAR_7->m_string, VAR_9, VAR_7->m_buflen, ((void*)0));
 if (VAR_10) {
  FUNC_1(VAR_9, VAR_2);
  return (VAR_10);
 }

 VAR_8 = FUNC_4(VAR_3);
 VAR_10 = FUNC_3(VAR_8, VAR_9);
 FUNC_1(VAR_9, VAR_2);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_8);
out:
 FUNC_5(VAR_8);
 return (VAR_10);
}
