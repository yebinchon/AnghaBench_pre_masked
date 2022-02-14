
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imap_server_conf {char* host; void* pass; void* user; scalar_t__ use_ssl; } ;
struct credential {char* username; char* password; void* host; void* protocol; } ;


 int FUNC_0 (struct credential*) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct imap_server_conf *VAR_0, struct credential *VAR_1)
{
 if (VAR_0->user && VAR_0->pass)
  return;

 VAR_1->protocol = FUNC_1(VAR_0->use_ssl ? "imaps" : "imap");
 VAR_1->host = FUNC_1(VAR_0->host);

 VAR_1->username = FUNC_2(VAR_0->user);
 VAR_1->password = FUNC_2(VAR_0->pass);

 FUNC_0(VAR_1);

 if (!VAR_0->user)
  VAR_0->user = FUNC_1(VAR_1->username);
 if (!VAR_0->pass)
  VAR_0->pass = FUNC_1(VAR_1->password);
}
