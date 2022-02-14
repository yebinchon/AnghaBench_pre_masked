
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbiod_event {int ev_type; int ev_error; void* ev_ident; } ;
struct smbiod {int iod_evlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (struct smbiod*) ;
 int FUNC_2 (struct smbiod*) ;
 int FUNC_3 (struct smbiod*) ;
 int FUNC_4 (int *,struct smbiod_event*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct smbiod_event*,int ) ;
 int FUNC_6 (struct smbiod_event*,int ,int,char*,int ) ;
 int FUNC_7 (struct smbiod*) ;
 struct smbiod_event* FUNC_8 (int,int ,int ) ;

int
FUNC_9(struct smbiod *VAR_6, int VAR_7, void *VAR_8)
{
 struct smbiod_event *VAR_9;
 int VAR_10;

 FUNC_0("\n");
 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_0, VAR_1);
 VAR_9->ev_type = VAR_7;
 VAR_9->ev_ident = VAR_8;
 FUNC_1(VAR_6);
 FUNC_4(&VAR_6->iod_evlist, VAR_9, VAR_5);
 if ((VAR_7 & VAR_4) == 0) {
  FUNC_3(VAR_6);
  FUNC_7(VAR_6);
  return 0;
 }
 FUNC_7(VAR_6);
 FUNC_6(VAR_9, FUNC_2(VAR_6), VAR_3 | VAR_2, "90evw", 0);
 VAR_10 = VAR_9->ev_error;
 FUNC_5(VAR_9, VAR_0);
 return VAR_10;
}
