
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_hndl {scalar_t__* start_status; scalar_t__* init_status; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (struct service_hndl*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct service_hndl *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->init_status); VAR_2++) {
  if (VAR_1->init_status[VAR_2] || VAR_1->start_status[VAR_2]) {
   FUNC_2("QAT: Could not remove active service\n");
   return -VAR_0;
  }
 }
 FUNC_1(VAR_1);
 return 0;
}
