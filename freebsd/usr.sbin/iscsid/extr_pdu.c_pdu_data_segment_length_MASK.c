
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pdu {TYPE_1__* pdu_bhs; } ;
struct TYPE_2__ {scalar_t__* bhs_data_segment_len; } ;



__attribute__((used)) static int
FUNC_0(const struct pdu *VAR_0)
{
 uint32_t VAR_1 = 0;

 VAR_1 += VAR_0->pdu_bhs->bhs_data_segment_len[0];
 VAR_1 <<= 8;
 VAR_1 += VAR_0->pdu_bhs->bhs_data_segment_len[1];
 VAR_1 <<= 8;
 VAR_1 += VAR_0->pdu_bhs->bhs_data_segment_len[2];

 return (VAR_1);
}
