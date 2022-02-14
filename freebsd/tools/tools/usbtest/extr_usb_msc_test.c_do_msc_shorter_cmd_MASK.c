
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umass_bbb_cbw_t ;
typedef int uint8_t ;
typedef int buffer ;
struct TYPE_2__ {int xfer_error; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,...) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(uint8_t VAR_2)
{
 uint8_t VAR_3[sizeof(umass_bbb_cbw_t)];
 int VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_2(VAR_3, 0, sizeof(VAR_3));

 for (VAR_6 = 0; VAR_6 != (sizeof(VAR_3) - 1); VAR_6++) {
  VAR_5 = FUNC_1(VAR_1,
      VAR_3, VAR_6, &VAR_4, 250);

  FUNC_3("Sent short %d of %d bytes wrapper block, "
      "status = %d\n", VAR_6, (int)(sizeof(VAR_3) - 1),
      VAR_5);

  FUNC_0(VAR_2);

  if (VAR_5 != 0) {
   FUNC_3("ERROR: Too short command wrapper "
       "was not accepted\n");
   VAR_0.xfer_error++;
   break;
  }
 }
}
