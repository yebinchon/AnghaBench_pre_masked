
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {struct client* clients; } ;
struct client {struct client* next; int mac; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(struct params *VAR_0, struct client *VAR_1)
{

 do {
  char VAR_2[6*3];

  FUNC_0(VAR_2, VAR_1->mac);
  FUNC_1("Adding client %s\n", VAR_2);
 } while(0);


 VAR_1->next = VAR_0->clients;
 VAR_0->clients = VAR_1;
}
