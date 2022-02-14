
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtblk_req {int dummy; } ;
struct TYPE_2__ {scalar_t__ bv_offset; int bv_page; } ;
struct request {int rq_flags; TYPE_1__ special_vec; } ;




 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 struct virtblk_req* FUNC_1 (struct request*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct virtblk_req*) ;
 int FUNC_6 (struct request*) ;

__attribute__((used)) static inline void FUNC_7(struct request *VAR_1)
{
 struct virtblk_req *VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->rq_flags & VAR_0) {
  FUNC_2(FUNC_3(VAR_1->special_vec.bv_page) +
        VAR_1->special_vec.bv_offset);
 }

 switch (FUNC_4(VAR_1)) {
 case 129:
 case 128:
  FUNC_6(VAR_1);
  break;
 }

 FUNC_0(VAR_1, FUNC_5(VAR_2));
}
