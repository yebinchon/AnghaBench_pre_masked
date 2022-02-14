
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* authname; } ;
struct datalink {TYPE_1__ peer; } ;


 int FUNC_0 (char*,char const*,int) ;

void
FUNC_1(struct datalink *VAR_0, const char *VAR_1)
{
  FUNC_0(VAR_0->peer.authname, VAR_1, sizeof VAR_0->peer.authname - 1);
  VAR_0->peer.authname[sizeof VAR_0->peer.authname - 1] = '\0';
}
