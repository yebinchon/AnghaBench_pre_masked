
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walker_data {int alt; } ;
struct walker {int get_verbosely; struct walker_data* data; } ;
struct TYPE_2__ {int hash; } ;
struct object_request {int node; int * req; int state; int repo; TYPE_1__ oid; struct walker* walker; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 struct object_request* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct walker *VAR_3, unsigned char *VAR_4)
{
 struct object_request *VAR_5;
 struct walker_data *VAR_6 = VAR_3->data;

 VAR_5 = FUNC_4(sizeof(*VAR_5));
 VAR_5->walker = VAR_3;
 FUNC_1(VAR_5->oid.hash, VAR_4);
 VAR_5->repo = VAR_6->alt;
 VAR_5->state = VAR_0;
 VAR_5->req = ((void*)0);

 VAR_1 = VAR_3->get_verbosely;
 FUNC_2(&VAR_5->node, &VAR_2);





}
