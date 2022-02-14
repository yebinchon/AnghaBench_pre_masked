
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int n_type; int n_name; struct name* n_flink; } ;
struct header {int * h_bcc; int * h_cc; int * h_to; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct header *VAR_5, struct name *VAR_6)
{
 struct name *VAR_7;

 VAR_5->h_to = ((void*)0);
 VAR_5->h_cc = ((void*)0);
 VAR_5->h_bcc = ((void*)0);
 for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = VAR_7->n_flink) {

  if (VAR_7->n_type & VAR_2)
   continue;
  if ((VAR_7->n_type & VAR_3) == VAR_4)
   VAR_5->h_to =
       FUNC_0(VAR_5->h_to, FUNC_1(VAR_7->n_name, VAR_7->n_type));
  else if ((VAR_7->n_type & VAR_3) == VAR_1)
   VAR_5->h_cc =
       FUNC_0(VAR_5->h_cc, FUNC_1(VAR_7->n_name, VAR_7->n_type));
  else if ((VAR_7->n_type & VAR_3) == VAR_0)
   VAR_5->h_bcc =
       FUNC_0(VAR_5->h_bcc, FUNC_1(VAR_7->n_name, VAR_7->n_type));
 }
}
