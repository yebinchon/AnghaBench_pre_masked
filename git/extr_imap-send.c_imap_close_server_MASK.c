
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imap_store {struct imap* imap; } ;
struct TYPE_4__ {int* fd; } ;
struct TYPE_3__ {TYPE_2__ sock; } ;
struct imap {TYPE_1__ buf; } ;


 int FUNC_0 (struct imap*) ;
 int FUNC_1 (struct imap_store*,int *,char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct imap_store *VAR_0)
{
 struct imap *VAR_1 = VAR_0->imap;

 if (VAR_1->buf.sock.fd[0] != -1) {
  FUNC_1(VAR_0, ((void*)0), "LOGOUT");
  FUNC_2(&VAR_1->buf.sock);
 }
 FUNC_0(VAR_1);
}
