
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * url; int * repo; scalar_t__ connected; } ;
typedef TYPE_1__ transport_local ;
typedef int git_transport ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(git_transport *VAR_0)
{
 transport_local *VAR_1 = (transport_local *)VAR_0;

 VAR_1->connected = 0;

 if (VAR_1->repo) {
  FUNC_1(VAR_1->repo);
  VAR_1->repo = ((void*)0);
 }

 if (VAR_1->url) {
  FUNC_0(VAR_1->url);
  VAR_1->url = ((void*)0);
 }

 return 0;
}
