
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int mode_set; int trailer; int status_file; int stat_send; int stat_recv; int spool_dir; int remote_queue; int remote_host; int restrict_grp; int lp; int lock_file; int log_file; int form_feed; int * filters; int acct_file; int printer; } ;
typedef enum lpd_filters { ____Placeholder_lpd_filters } lpd_filters ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct printer*) ;

void
FUNC_2(struct printer *VAR_1)
{
 enum lpd_filters VAR_2;

 do { if (VAR_1->printer) FUNC_0(VAR_1->printer); } while(0);
 do { if (VAR_1->acct_file) FUNC_0(VAR_1->acct_file); } while(0);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  do { if (VAR_1->filters[VAR_2]) FUNC_0(VAR_1->filters[VAR_2]); } while(0);
 do { if (VAR_1->form_feed) FUNC_0(VAR_1->form_feed); } while(0);
 do { if (VAR_1->log_file) FUNC_0(VAR_1->log_file); } while(0);
 do { if (VAR_1->lock_file) FUNC_0(VAR_1->lock_file); } while(0);
 do { if (VAR_1->lp) FUNC_0(VAR_1->lp); } while(0);
 do { if (VAR_1->restrict_grp) FUNC_0(VAR_1->restrict_grp); } while(0);
 do { if (VAR_1->remote_host) FUNC_0(VAR_1->remote_host); } while(0);
 do { if (VAR_1->remote_queue) FUNC_0(VAR_1->remote_queue); } while(0);
 do { if (VAR_1->spool_dir) FUNC_0(VAR_1->spool_dir); } while(0);
 do { if (VAR_1->stat_recv) FUNC_0(VAR_1->stat_recv); } while(0);
 do { if (VAR_1->stat_send) FUNC_0(VAR_1->stat_send); } while(0);
 do { if (VAR_1->status_file) FUNC_0(VAR_1->status_file); } while(0);
 do { if (VAR_1->trailer) FUNC_0(VAR_1->trailer); } while(0);
 do { if (VAR_1->mode_set) FUNC_0(VAR_1->mode_set); } while(0);

 FUNC_1(VAR_1);
}
