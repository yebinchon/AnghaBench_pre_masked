
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_paramhdr {int param_length; int param_type; } ;
struct TYPE_3__ {struct sctp_paramhdr* Asconf; } ;
struct sctp_nat_msg {int chunk_length; TYPE_2__* sctp_hdr; TYPE_1__ sctpchnk; } ;
struct libalias {int dummy; } ;
struct TYPE_4__ {int v_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct sctp_paramhdr* FUNC_2 (struct sctp_paramhdr*) ;
 int FUNC_3 (char*,int ,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct libalias *VAR_6, struct sctp_nat_msg *VAR_7, int VAR_8)
{
 struct sctp_paramhdr *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = 1;
 VAR_9 = VAR_7->sctpchnk.Asconf;
 VAR_11 = FUNC_0(FUNC_4(VAR_9->param_length));

 VAR_10 = VAR_7->chunk_length;
 if (VAR_10 < VAR_11)
  return (0);

 while(VAR_10 >= VAR_2) {
  if (FUNC_4(VAR_9->param_type) == VAR_0)
   return (VAR_0);
  else if (FUNC_4(VAR_9->param_type) == VAR_1)
   return (VAR_1);

  VAR_10 -= VAR_11;
  if (VAR_10 >= VAR_4) {
   VAR_9 = FUNC_2(VAR_9);
  } else {
   return (0);
  }
  VAR_11 = FUNC_0(FUNC_4(VAR_9->param_length));
  if (VAR_10 < VAR_11) return (0);

  if (++VAR_12 > VAR_5) {
   FUNC_1(VAR_3,
       FUNC_3("Parameter parse limit exceeded IsADDorDEL)",
    VAR_7->sctp_hdr->v_tag, VAR_5, VAR_8));
   return (0);
  }
 }
 return (0);
}
