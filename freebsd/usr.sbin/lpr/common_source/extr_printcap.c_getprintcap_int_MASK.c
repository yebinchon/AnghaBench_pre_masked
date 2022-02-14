
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* acct_file; char* form_feed; char* log_file; char* lock_file; char* lp; char* mode_set; char* restrict_grp; char* remote_host; char* remote_queue; char* spool_dir; char* stat_recv; char* stat_send; char* status_file; char* trailer; int tof; int rp_matches_local; char** filters; void* rw; void* header_last; void* no_header; void* no_formfeed; void* no_copies; void* short_banner; void* restricted; void* resend_copies; int page_plength; int page_pwidth; int page_width; int page_length; int price100; int max_blocks; int max_copies; int daemon_user; int conn_timeout; int baud_rate; int * printer; } ;
typedef enum lpd_filters { ____Placeholder_lpd_filters } lpd_filters ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_1 (char*) ;
 void* FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*,char*,int ,int *) ;
 int FUNC_4 (char*,char*,char*,int ,char**) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char** VAR_16 ;
 int FUNC_6 (char*) ;
 char** VAR_17 ;

__attribute__((used)) static int
FUNC_7(char *VAR_18, struct printer *VAR_19)
{
 enum lpd_filters VAR_20;
 char *VAR_21;
 int VAR_22;

 if ((VAR_19->printer = FUNC_1(VAR_18)) == ((void*)0))
  return VAR_12;


 do {if ((FUNC_4(VAR_18, "af", "acct.file", 0, &VAR_19->acct_file)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "br", "tty.rate", 0, &VAR_19->baud_rate)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "ct", "remote.timeout", VAR_7, &VAR_19->conn_timeout)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_3(VAR_18, "du", "daemon.user", VAR_8, &VAR_19->daemon_user)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "ff", "job.formfeed", VAR_0, &VAR_19->form_feed)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_4(VAR_18, "lf", "spool.log", VAR_13, &VAR_19->log_file)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "lo", "spool.lock", VAR_2, &VAR_19->lock_file)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_4(VAR_18, "lp", "tty.device", VAR_14, &VAR_19->lp)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "mc", "max.copies", VAR_4, &VAR_19->max_copies)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "ms", "tty.mode", 0, &VAR_19->mode_set)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "mx", "max.blocks", VAR_5, &VAR_19->max_blocks)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "pc", "acct.price", 0, &VAR_19->price100)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "pl", "page.length", VAR_1, &VAR_19->page_length)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_3(VAR_18, "pw", "page.width", VAR_9, &VAR_19->page_width)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_3(VAR_18, "px", "page.pwidth", 0, &VAR_19->page_pwidth)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_3(VAR_18, "py", "page.plength", 0, &VAR_19->page_plength)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_4(VAR_18, "rg", "daemon.restrictgrp", 0, &VAR_19->restrict_grp)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "rm", "remote.host", 0, &VAR_19->remote_host)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_4(VAR_18, "rp", "remote.queue", VAR_3, &VAR_19->remote_queue)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "sd", "spool.dir", VAR_15, &VAR_19->spool_dir)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "sr", "stat.recv", 0, &VAR_19->stat_recv)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_4(VAR_18, "ss", "stat.send", 0, &VAR_19->stat_send)) == VAR_12) return VAR_12;}while(0);
 do {if ((FUNC_4(VAR_18, "st", "spool.status", VAR_6, &VAR_19->status_file)) == VAR_12) return VAR_12;}while(0);

 do {if ((FUNC_4(VAR_18, "tr", "job.trailer", 0, &VAR_19->trailer)) == VAR_12) return VAR_12;}while(0);

 VAR_19->resend_copies = FUNC_2(VAR_18, "rc", "remote.resend_copies");
 VAR_19->restricted = FUNC_2(VAR_18, "rs", "daemon.restricted");
 VAR_19->short_banner = FUNC_2(VAR_18, "sb", "banner.short");
 VAR_19->no_copies = FUNC_2(VAR_18, "sc", "job.no_copies");
 VAR_19->no_formfeed = FUNC_2(VAR_18, "sf", "job.no_formfeed");
 VAR_19->no_header = FUNC_2(VAR_18, "sh", "banner.disable");
 VAR_19->header_last = FUNC_2(VAR_18, "hl", "banner.last");
 VAR_19->rw = FUNC_2(VAR_18, "rw", "tty.rw");
 VAR_19->tof = !FUNC_2(VAR_18, "fo", "job.topofform");







 VAR_19->rp_matches_local = 1;
 do {if (((VAR_22 = FUNC_4(VAR_18, "rp", "remote.queue", 0, &VAR_21))) == VAR_12) return VAR_12;}while(0);
 if (VAR_22 != VAR_11 && VAR_21 != ((void*)0)) {
  if (FUNC_5(VAR_18,VAR_21) != 0)
   VAR_19->rp_matches_local = 0;
  FUNC_6(VAR_21);
 }




 for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
  do {if ((FUNC_4(VAR_18, VAR_16[VAR_20], VAR_17[VAR_20], 0, &VAR_19->filters[VAR_20])) == VAR_12) return VAR_12;}while(0);

 }

 return 0;
}
