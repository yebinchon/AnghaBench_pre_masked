
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_scope_id; int sin6_port; int sin6_family; } ;
typedef int address_part ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct sockaddr_in6*,int ,int) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (int ,char const*,int *) ;

int FUNC_7(const char* VAR_1, int VAR_2, struct sockaddr_in6* VAR_3) {
  char VAR_4[40];
  size_t VAR_5;
  const char* VAR_6;

  FUNC_4(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->sin6_family = VAR_0;
  VAR_3->sin6_port = FUNC_1(VAR_2);




  VAR_6 = FUNC_5(VAR_1, '%');
  if (VAR_6 != ((void*)0)) {
    VAR_5 = VAR_6 - VAR_1;
    if (VAR_5 >= sizeof(VAR_4))
      VAR_5 = sizeof(VAR_4) - 1;

    FUNC_3(VAR_4, VAR_1, VAR_5);
    VAR_4[VAR_5] = '\0';
    VAR_1 = VAR_4;

    VAR_6++;




    VAR_3->sin6_scope_id = FUNC_2(VAR_6);

  }

  return FUNC_6(VAR_0, VAR_1, &VAR_3->sin6_addr);
}
