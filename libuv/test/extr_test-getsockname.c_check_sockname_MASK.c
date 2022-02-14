
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char const*,char*,int) ;
 scalar_t__ FUNC_4 (char const*,int,struct sockaddr_in*) ;
 int FUNC_5 (struct sockaddr_in*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct sockaddr* VAR_1, const char* VAR_2,
  int VAR_3, const char* VAR_4) {
  struct sockaddr_in VAR_5 = *(struct sockaddr_in*) VAR_1;
  struct sockaddr_in VAR_6;
  char VAR_7[17];
  int VAR_8;

  FUNC_0(0 == FUNC_4(VAR_2, VAR_3, &VAR_6));


  FUNC_0(VAR_5.sin_family == VAR_0);
  FUNC_0(VAR_6.sin_family == VAR_0);


  FUNC_0(FUNC_1(&VAR_5.sin_addr,
         &VAR_6.sin_addr,
         sizeof VAR_6.sin_addr) == 0);


  FUNC_0(VAR_3 == 0 || VAR_5.sin_port == VAR_6.sin_port);

  VAR_8 = FUNC_5(&VAR_5, (char*) VAR_7, sizeof VAR_7);
  FUNC_0(VAR_8 == 0);

  FUNC_3("%s: %s:%d\n", VAR_4, VAR_7, FUNC_2(VAR_5.sin_port));
}
