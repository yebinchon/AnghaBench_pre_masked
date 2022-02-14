
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int req_count; int req_size; int req_type; int req_txid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_4(uint32_t VAR_1)
{

 int VAR_2;

 VAR_2 = 0;

 switch (VAR_0.req_count) {
 case 0:

  if (VAR_1 < 12) {
   FUNC_3("msg size error");
   FUNC_0(4);
  }
  VAR_0.req_size = VAR_1;
  VAR_0.req_count = 1;
  break;
 case 1:
  VAR_0.req_type = VAR_1;
  VAR_0.req_count++;
  break;
 case 2:
  VAR_0.req_txid = VAR_1;
  VAR_0.req_count++;
  VAR_2 = FUNC_2();
  break;
 default:
  VAR_2 = FUNC_1(VAR_1);
  break;
 }

 return (VAR_2);
}
