
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef char u_char ;
struct prison {char* pr_hostname; int pr_mtx; } ;
struct in6_addr {int* s6_addr8; int* s6_addr32; int * s6_addr16; } ;
struct ifnet {int dummy; } ;
typedef int n ;
typedef int l ;
typedef int ctxt ;
struct TYPE_4__ {TYPE_1__* td_ucred; } ;
struct TYPE_3__ {struct prison* cr_prison; } ;
typedef struct in6_addr MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,char*,char) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct in6_addr*,int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_5 (struct in6_addr*,struct ifnet*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,char) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_2, const char *VAR_3, int VAR_4,
    struct in6_addr *VAR_5, int VAR_6)
{
 struct prison *VAR_7;
 const char *VAR_8;
 u_char *VAR_9;
 MD5_CTX VAR_10;
 u_int8_t VAR_11[16];
 char VAR_12;
 char VAR_13[64];





 if (!VAR_3 && VAR_4 == -1) {
  VAR_7 = VAR_1->td_ucred->cr_prison;
  FUNC_6(&VAR_7->pr_mtx);
  VAR_3 = VAR_7->pr_hostname;
  VAR_4 = FUNC_8(VAR_3);
 } else
  VAR_7 = ((void*)0);
 if (!VAR_3 || !VAR_4) {
  if (VAR_7 != ((void*)0))
   FUNC_7(&VAR_7->pr_mtx);
  return -1;
 }

 VAR_8 = VAR_3;
 while (VAR_8 && *VAR_8 && *VAR_8 != '.' && VAR_8 - VAR_3 < VAR_4)
  VAR_8++;
 if (VAR_8 == VAR_3 || VAR_8 - VAR_3 > sizeof(VAR_13) - 1) {
  if (VAR_7 != ((void*)0))
   FUNC_7(&VAR_7->pr_mtx);
  return -1;
 }
 VAR_12 = VAR_8 - VAR_3;
 FUNC_9(VAR_13, VAR_3, VAR_12);
 if (VAR_7 != ((void*)0))
  FUNC_7(&VAR_7->pr_mtx);
 VAR_13[(int)VAR_12] = '\0';
 for (VAR_9 = VAR_13; *VAR_9; VAR_9++) {
  if ('A' <= *VAR_9 && *VAR_9 <= 'Z')
   *VAR_9 = *VAR_9 - 'A' + 'a';
 }


 FUNC_4(&VAR_10, sizeof(VAR_10));
 FUNC_1(&VAR_10);
 FUNC_2(&VAR_10, &VAR_12, sizeof(VAR_12));
 FUNC_2(&VAR_10, VAR_13, VAR_12);
 FUNC_0(VAR_11, &VAR_10);

 FUNC_4(VAR_5, sizeof(*VAR_5));
 VAR_5->s6_addr16[0] = VAR_0;
 VAR_5->s6_addr8[11] = 2;
 if (VAR_6 == 0) {
  VAR_5->s6_addr8[12] = 0xff;

  FUNC_3(VAR_11, &VAR_5->s6_addr8[13], 3);
 } else {

  FUNC_3(VAR_11, &VAR_5->s6_addr32[3], sizeof(VAR_5->s6_addr32[3]));
 }
 if (FUNC_5(VAR_5, VAR_2, ((void*)0)))
  return (-1);

 return 0;
}
