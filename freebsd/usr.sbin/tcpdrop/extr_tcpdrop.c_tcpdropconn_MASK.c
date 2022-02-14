
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin_len; int sin_addr; int sin_port; void* sin_family; int sin6_addr; int sin6_port; void* sin6_family; } ;
struct sockaddr_in {int sin6_len; int sin_len; int sin_addr; int sin_port; void* sin_family; int sin6_addr; int sin6_port; void* sin6_family; } ;
struct sockaddr {int dummy; } ;
struct in_conninfo {int inc_flags; int inc_faddr; int inc_fport; int inc_laddr; int inc_lport; int inc6_faddr; int inc6_laddr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct sockaddr_in6*,int ,int) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static bool
FUNC_3(const struct in_conninfo *VAR_5)
{
 struct sockaddr *VAR_6, *VAR_7;
 struct sockaddr_in6 VAR_8[2];
 struct sockaddr_in VAR_9[2];

 if ((VAR_5->inc_flags & VAR_2) != 0) {
  FUNC_1(VAR_8, 0, sizeof VAR_8);

  VAR_8[VAR_4].sin6_len = sizeof VAR_8[VAR_4];
  VAR_8[VAR_4].sin6_family = VAR_1;
  VAR_8[VAR_4].sin6_port = VAR_5->inc_lport;
  FUNC_0(&VAR_8[VAR_4].sin6_addr, &VAR_5->inc6_laddr,
      sizeof VAR_5->inc6_laddr);
  VAR_6 = (struct sockaddr *)&VAR_8[VAR_4];

  VAR_8[VAR_3].sin6_len = sizeof VAR_8[VAR_3];
  VAR_8[VAR_3].sin6_family = VAR_1;
  VAR_8[VAR_3].sin6_port = VAR_5->inc_fport;
  FUNC_0(&VAR_8[VAR_3].sin6_addr, &VAR_5->inc6_faddr,
      sizeof VAR_5->inc6_faddr);
  VAR_7 = (struct sockaddr *)&VAR_8[VAR_3];
 } else {
  FUNC_1(VAR_9, 0, sizeof VAR_9);

  VAR_9[VAR_4].sin_len = sizeof VAR_9[VAR_4];
  VAR_9[VAR_4].sin_family = VAR_0;
  VAR_9[VAR_4].sin_port = VAR_5->inc_lport;
  FUNC_0(&VAR_9[VAR_4].sin_addr, &VAR_5->inc_laddr,
      sizeof VAR_5->inc_laddr);
  VAR_6 = (struct sockaddr *)&VAR_9[VAR_4];

  VAR_9[VAR_3].sin_len = sizeof VAR_9[VAR_3];
  VAR_9[VAR_3].sin_family = VAR_0;
  VAR_9[VAR_3].sin_port = VAR_5->inc_fport;
  FUNC_0(&VAR_9[VAR_3].sin_addr, &VAR_5->inc_faddr,
      sizeof VAR_5->inc_faddr);
  VAR_7 = (struct sockaddr *)&VAR_9[VAR_3];
 }

 return (FUNC_2(VAR_6, VAR_7));
}
