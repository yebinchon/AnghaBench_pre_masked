
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac {int m_buflen; int m_string; } ;
struct label {int dummy; } ;
struct image_params {struct label* execlabel; } ;
typedef int mac ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mac*,struct mac*,int) ;
 int FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct mac*) ;
 int FUNC_4 (struct label*,char*) ;
 struct label* FUNC_5 () ;
 int FUNC_6 (struct label*) ;
 int VAR_4 ;
 char* FUNC_7 (int ,int ,int ) ;

int
FUNC_8(struct image_params *VAR_5, struct mac *VAR_6)
{
 struct label *VAR_7;
 struct mac VAR_8;
 char *VAR_9;
 int VAR_10;

 if (VAR_6 == ((void*)0))
  return (0);

 if (!(VAR_4 & VAR_1))
  return (VAR_0);

 VAR_10 = FUNC_0(VAR_6, &VAR_8, sizeof(VAR_8));
 if (VAR_10)
  return (VAR_10);

 VAR_10 = FUNC_3(&VAR_8);
 if (VAR_10)
  return (VAR_10);

 VAR_9 = FUNC_7(VAR_8.m_buflen, VAR_2, VAR_3);
 VAR_10 = FUNC_1(VAR_8.m_string, VAR_9, VAR_8.m_buflen, ((void*)0));
 if (VAR_10) {
  FUNC_2(VAR_9, VAR_2);
  return (VAR_10);
 }

 VAR_7 = FUNC_5();
 VAR_10 = FUNC_4(VAR_7, VAR_9);
 FUNC_2(VAR_9, VAR_2);
 if (VAR_10) {
  FUNC_6(VAR_7);
  return (VAR_10);
 }
 VAR_5->execlabel = VAR_7;
 return (0);
}
