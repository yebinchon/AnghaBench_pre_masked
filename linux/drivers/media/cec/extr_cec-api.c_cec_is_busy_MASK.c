
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_fh {scalar_t__ mode_initiator; } ;
struct cec_adapter {struct cec_fh const* cec_initiator; struct cec_fh const* cec_follower; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct cec_adapter *VAR_1,
   const struct cec_fh *VAR_2)
{
 bool VAR_3 = VAR_1->cec_initiator && VAR_1->cec_initiator == VAR_2;
 bool VAR_4 = VAR_1->cec_follower && VAR_1->cec_follower == VAR_2;




 if (VAR_3 || VAR_4)
  return 0;




 return VAR_1->cec_initiator ||
        VAR_2->mode_initiator == VAR_0;
}
