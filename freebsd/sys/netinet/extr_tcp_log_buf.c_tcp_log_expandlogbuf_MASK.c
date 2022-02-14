
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tcp_log_verbose {int dummy; } ;
struct tcp_log_header {int tlh_length; int tlh_reason; int tlh_id; int tlh_offset; int tlh_af; int tlh_ie; int tlh_type; int tlh_version; } ;
struct tcp_log_dev_queue {int dummy; } ;
struct tcp_log_dev_log_queue {int tldl_count; int tldl_reason; int tldl_id; int tldl_af; int tldl_ie; int tldl_entries; } ;
struct tcp_log_common_header {int dummy; } ;
struct tcp_log_buffer {int dummy; } ;
struct sockopt {int sopt_valsize; int * sopt_td; struct tcp_log_header* sopt_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct tcp_log_header*,int ) ;
 int FUNC_2 (int *) ;
 struct tcp_log_header* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct tcp_log_header*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (struct sockopt*,int *,struct tcp_log_buffer**,int) ;
 int VAR_6 ;

__attribute__((used)) static struct tcp_log_common_header *
FUNC_8(struct tcp_log_dev_queue *VAR_7)
{
 struct tcp_log_dev_log_queue *VAR_8;
 struct tcp_log_header *VAR_9;
 uint8_t *VAR_10;
 struct sockopt VAR_11;
 int VAR_12;

 VAR_8 = (struct tcp_log_dev_log_queue *)VAR_7;


 VAR_11.sopt_valsize = sizeof(struct tcp_log_header) +
     VAR_8->tldl_count * (sizeof(struct tcp_log_buffer) +
     sizeof(struct tcp_log_verbose));
 VAR_9 = FUNC_3(VAR_11.sopt_valsize, VAR_1, VAR_0);
 if (VAR_9 == ((void*)0)) {



  return (((void*)0));
 }
 VAR_11.sopt_val = VAR_9 + 1;
 VAR_11.sopt_valsize -= sizeof(struct tcp_log_header);
 VAR_11.sopt_td = ((void*)0);

 VAR_12 = FUNC_7(&VAR_11, &VAR_8->tldl_entries,
     (struct tcp_log_buffer **)&VAR_10, VAR_8->tldl_count);
 if (VAR_12) {
  FUNC_1(VAR_9, VAR_1);
  return (((void*)0));
 }


 FUNC_6(&VAR_8->tldl_entries, &VAR_8->tldl_count);
 VAR_8->tldl_count = 0;

 FUNC_4(VAR_9, 0, sizeof(struct tcp_log_header));
 VAR_9->tlh_version = VAR_2;
 VAR_9->tlh_type = VAR_3;
 VAR_9->tlh_length = VAR_10 - (uint8_t *)VAR_9;
 VAR_9->tlh_ie = VAR_8->tldl_ie;
 VAR_9->tlh_af = VAR_8->tldl_af;
 FUNC_2(&VAR_9->tlh_offset);
 FUNC_5(VAR_9->tlh_id, VAR_8->tldl_id, VAR_4);
 FUNC_5(VAR_9->tlh_reason, VAR_8->tldl_reason, VAR_5);
 return ((struct tcp_log_common_header *)VAR_9);
}
