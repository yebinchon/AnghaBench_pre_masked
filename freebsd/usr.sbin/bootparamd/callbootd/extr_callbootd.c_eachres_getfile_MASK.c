
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct hostent {char* h_name; } ;
typedef int bp_getfile_res ;
typedef int bool_t ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char*,int,int ) ;
 char* FUNC_1 (TYPE_1__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool_t
FUNC_4(bp_getfile_res *VAR_1, struct sockaddr_in *VAR_2)
{
  struct hostent *VAR_3;

  VAR_3 = FUNC_0((char *)&VAR_2->sin_addr.s_addr,4,VAR_0);
  FUNC_2("%s answered:\n", VAR_3 ? VAR_3->h_name : FUNC_1(VAR_2->sin_addr));
  FUNC_3(VAR_1);
  FUNC_2("\n");
  return(0);
}
