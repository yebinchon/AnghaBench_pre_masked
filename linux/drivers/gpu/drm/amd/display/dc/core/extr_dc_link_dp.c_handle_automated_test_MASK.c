
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ACK; scalar_t__ PHY_TEST_PATTERN; scalar_t__ LINK_TEST_PATTRN; scalar_t__ LINK_TRAINING; } ;
union test_response {int raw; TYPE_1__ bits; } ;
union test_request {int raw; TYPE_1__ bits; } ;
typedef int test_response ;
typedef int test_request ;
struct dc_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_link*,int ,int *,int) ;
 int FUNC_1 (struct dc_link*,int ,int *,int) ;
 int FUNC_2 (struct dc_link*) ;
 int FUNC_3 (struct dc_link*) ;
 int FUNC_4 (struct dc_link*) ;
 int FUNC_5 (union test_response*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct dc_link *VAR_2)
{
 union test_request VAR_3;
 union test_response VAR_4;

 FUNC_5(&VAR_3, 0, sizeof(VAR_3));
 FUNC_5(&VAR_4, 0, sizeof(VAR_4));

 FUNC_0(
  VAR_2,
  VAR_0,
  &VAR_3.raw,
  sizeof(union test_request));
 if (VAR_3.bits.LINK_TRAINING) {

  VAR_4.bits.ACK = 1;
  FUNC_1(
   VAR_2,
   VAR_1,
   &VAR_4.raw,
   sizeof(VAR_4));
  FUNC_3(VAR_2);

  VAR_4.bits.ACK = 0;
 }
 if (VAR_3.bits.LINK_TEST_PATTRN) {
  FUNC_2(VAR_2);
  VAR_4.bits.ACK = 1;
 }
 if (VAR_3.bits.PHY_TEST_PATTERN) {
  FUNC_4(VAR_2);
  VAR_4.bits.ACK = 1;
 }


 if (VAR_4.bits.ACK)
  FUNC_1(
   VAR_2,
   VAR_1,
   &VAR_4.raw,
   sizeof(VAR_4));
}
