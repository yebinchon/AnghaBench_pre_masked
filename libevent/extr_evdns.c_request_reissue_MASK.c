
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int transmit_me; scalar_t__ tx_count; int reissue_count; struct nameserver const* const ns; int base; } ;
typedef struct nameserver const nameserver ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct request*,int ) ;

__attribute__((used)) static int
FUNC_4(struct request *VAR_0) {
 const struct nameserver *const VAR_1 = VAR_0->ns;
 FUNC_0(VAR_0->base);
 FUNC_1(VAR_0);



 FUNC_3(VAR_0, FUNC_2(VAR_0->base));
 if (VAR_0->ns == VAR_1) {



  return 1;
 }

 VAR_0->reissue_count++;
 VAR_0->tx_count = 0;
 VAR_0->transmit_me = 1;

 return 0;
}
