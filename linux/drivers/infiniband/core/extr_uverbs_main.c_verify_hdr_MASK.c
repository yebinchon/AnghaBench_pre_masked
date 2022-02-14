
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_api_write_method {int req_size; int resp_size; scalar_t__ is_ex; } ;
struct ib_uverbs_ex_cmd_hdr {int provider_in_words; int provider_out_words; scalar_t__ response; scalar_t__ cmd_hdr_reserved; } ;
struct ib_uverbs_cmd_hdr {int in_words; int out_words; scalar_t__ command; } ;
typedef int ssize_t ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct ib_uverbs_cmd_hdr *VAR_4,
     struct ib_uverbs_ex_cmd_hdr *VAR_5, size_t VAR_6,
     const struct uverbs_api_write_method *VAR_7)
{
 if (VAR_7->is_ex) {
  VAR_6 -= sizeof(*VAR_4) + sizeof(*VAR_5);

  if ((VAR_4->in_words + VAR_5->provider_in_words) * 8 != VAR_6)
   return -VAR_1;

  if (VAR_4->in_words * 8 < VAR_7->req_size)
   return -VAR_2;

  if (VAR_5->cmd_hdr_reserved)
   return -VAR_1;

  if (VAR_5->response) {
   if (!VAR_4->out_words && !VAR_5->provider_out_words)
    return -VAR_1;

   if (VAR_4->out_words * 8 < VAR_7->resp_size)
    return -VAR_2;

   if (!FUNC_0(FUNC_1(VAR_5->response),
           (VAR_4->out_words + VAR_5->provider_out_words) * 8))
    return -VAR_0;
  } else {
   if (VAR_4->out_words || VAR_5->provider_out_words)
    return -VAR_1;
  }

  return 0;
 }


 if (VAR_4->in_words * 4 != VAR_6)
  return -VAR_1;

 if (VAR_6 < VAR_7->req_size + sizeof(VAR_4)) {







  if (VAR_4->command == VAR_3 &&
      VAR_6 == 16) {
   VAR_4->in_words = 6;
   return 0;
  }
  return -VAR_2;
 }
 if (VAR_4->out_words * 4 < VAR_7->resp_size)
  return -VAR_2;

 return 0;
}
