
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct qib_user_sdma_pkt {TYPE_2__* addr; } ;
struct qib_pportdata {scalar_t__ sdma_intrequest; TYPE_1__* sdma_descq; } ;
typedef int __le64 ;
struct TYPE_4__ {scalar_t__ last_desc; scalar_t__ first_desc; scalar_t__ length; scalar_t__ offset; scalar_t__ addr; } ;
struct TYPE_3__ {int * qw; } ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int ,int const,int const,unsigned int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct qib_pportdata *VAR_0,
        struct qib_user_sdma_pkt *VAR_1, int VAR_2,
        unsigned VAR_3, u16 VAR_4, u8 VAR_5)
{
 const u64 VAR_6 = (u64) VAR_1->addr[VAR_2].addr +
  (u64) VAR_1->addr[VAR_2].offset;
 const u64 VAR_7 = (u64) VAR_1->addr[VAR_2].length / 4;
 __le64 *VAR_8;
 __le64 VAR_9;

 VAR_8 = &VAR_0->sdma_descq[VAR_4].qw[0];

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_3);
 if (VAR_1->addr[VAR_2].first_desc)
  VAR_9 = FUNC_3(VAR_9);
 if (VAR_1->addr[VAR_2].last_desc) {
  VAR_9 = FUNC_4(VAR_9);
  if (VAR_0->sdma_intrequest) {
   VAR_9 |= FUNC_0(1ULL << 15);
   VAR_0->sdma_intrequest = 0;
  }
 }

 VAR_8[0] = VAR_9;
 VAR_8[1] = FUNC_2(VAR_6);
}
