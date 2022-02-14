
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int ov ;
struct TYPE_2__ {int port; int host; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void
FUNC_10 (int *VAR_7)
{
  int VAR_8 = 1;
  struct addrinfo VAR_9, *VAR_10;


  FUNC_6 (&VAR_9, 0, sizeof VAR_9);
  VAR_9.ai_family = VAR_0;
  VAR_9.ai_socktype = VAR_1;

  if (FUNC_4 (VAR_6.host, VAR_6.port, &VAR_9, &VAR_10) != 0)
    FUNC_0 ("Unable to set server: %s.", FUNC_3 (VAR_5));


  *VAR_7 = FUNC_8 (VAR_10->ai_family, VAR_10->ai_socktype, VAR_10->ai_protocol);


  if (FUNC_7 (*VAR_7, VAR_2, VAR_4, &VAR_8, sizeof (VAR_8)) == -1)
    FUNC_0 ("Unable to set setsockopt: %s.", FUNC_9 (VAR_5));


  if (FUNC_1 (*VAR_7, VAR_10->ai_addr, VAR_10->ai_addrlen) != 0)
    FUNC_0 ("Unable to set bind: %s.", FUNC_9 (VAR_5));
  FUNC_2 (VAR_10);


  if (FUNC_5 (*VAR_7, VAR_3) == -1)
    FUNC_0 ("Unable to listen: %s.", FUNC_9 (VAR_5));
}
