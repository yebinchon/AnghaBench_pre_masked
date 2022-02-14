
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_pack_request {struct http_pack_request* url; int tmpfile; int * slot; int * packfile; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct http_pack_request*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct http_pack_request *VAR_0)
{
 if (VAR_0->packfile != ((void*)0)) {
  FUNC_0(VAR_0->packfile);
  VAR_0->packfile = ((void*)0);
 }
 VAR_0->slot = ((void*)0);
 FUNC_2(&VAR_0->tmpfile);
 FUNC_1(VAR_0->url);
 FUNC_1(VAR_0);
}
