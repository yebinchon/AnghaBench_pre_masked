
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


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sctp_paramhdr* FUNC_2 (struct sctp_paramhdr*) ;
 int FUNC_3 (char*,int ,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct libalias *VAR_5, struct sctp_nat_msg *VAR_6, int VAR_7)
{
 struct sctp_paramhdr *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = 1;
 VAR_8 = VAR_6->sctpchnk.Asconf;
 VAR_10 = FUNC_0(FUNC_4(VAR_8->param_length));
 if (VAR_10 == 8)
  return (1);

 VAR_9 = VAR_6->chunk_length;
 if (VAR_9 < VAR_10)
  return (0);

 while(VAR_9 >= VAR_1) {
  if (FUNC_4(VAR_8->param_type) == VAR_0)
   return (1);

  VAR_9 -= VAR_10;
  if (VAR_9 >= VAR_3) {
   VAR_8 = FUNC_2(VAR_8);
  } else {
   return (0);
  }
  VAR_10 = FUNC_0(FUNC_4(VAR_8->param_length));
  if (VAR_9 < VAR_10) return (0);

  if (++VAR_11 > VAR_4) {
   FUNC_1(VAR_2,
       FUNC_3("Parameter parse limit exceeded (IsASCONFack)",
    VAR_6->sctp_hdr->v_tag, VAR_4, VAR_7));
   return (0);
  }
 }
 return (0);
}
