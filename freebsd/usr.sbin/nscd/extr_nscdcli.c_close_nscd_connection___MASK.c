
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nscd_connection_ {int write_queue; int read_queue; int sockfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct nscd_connection_*) ;

void
FUNC_5(struct nscd_connection_ *VAR_1)
{

 FUNC_0(VAR_0);
 FUNC_2(VAR_1 != ((void*)0));

 FUNC_3(VAR_1->sockfd);
 FUNC_3(VAR_1->read_queue);
 FUNC_3(VAR_1->write_queue);
 FUNC_4(VAR_1);
 FUNC_1(VAR_0);
}
