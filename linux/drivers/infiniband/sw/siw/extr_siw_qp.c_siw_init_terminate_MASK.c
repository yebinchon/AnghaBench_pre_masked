
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int valid; int layer; int in_tx; void* ecode; void* etype; } ;
struct siw_qp {TYPE_1__ term_info; } ;
typedef enum term_elayer { ____Placeholder_term_elayer } term_elayer ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct siw_qp*,char*,int,void*,void*,char*) ;

void FUNC_2(struct siw_qp *VAR_0, enum term_elayer VAR_1, u8 VAR_2,
   u8 VAR_3, int VAR_4)
{
 if (!VAR_0->term_info.valid) {
  FUNC_0(&VAR_0->term_info, 0, sizeof(VAR_0->term_info));
  VAR_0->term_info.layer = VAR_1;
  VAR_0->term_info.etype = VAR_2;
  VAR_0->term_info.ecode = VAR_3;
  VAR_0->term_info.in_tx = VAR_4;
  VAR_0->term_info.valid = 1;
 }
 FUNC_1(VAR_0, "init TERM: layer %d, type %d, code %d, in tx %s\n",
     VAR_1, VAR_2, VAR_3, VAR_4 ? "yes" : "no");
}
