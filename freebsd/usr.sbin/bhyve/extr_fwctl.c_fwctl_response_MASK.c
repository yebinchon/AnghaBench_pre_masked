
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
struct TYPE_4__ {int resp_count; int resp_size; int resp_off; TYPE_1__* resp_biov; int resp_error; int req_txid; int req_type; } ;
struct TYPE_3__ {scalar_t__ iov_base; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(uint32_t *VAR_1)
{
 uint32_t *VAR_2;
 ssize_t VAR_3;

 switch(VAR_0.resp_count) {
 case 0:

  *VAR_1 = 4*sizeof(uint32_t) +
      FUNC_2(VAR_0.resp_size, sizeof(uint32_t));
  VAR_0.resp_count++;
  break;
 case 1:
  *VAR_1 = VAR_0.req_type;
  VAR_0.resp_count++;
  break;
 case 2:
  *VAR_1 = VAR_0.req_txid;
  VAR_0.resp_count++;
  break;
 case 3:
  *VAR_1 = VAR_0.resp_error;
  VAR_0.resp_count++;
  break;
 default:
  VAR_3 = VAR_0.resp_size - VAR_0.resp_off;
  VAR_2 = (uint32_t *)
      ((uint8_t *)VAR_0.resp_biov->iov_base + VAR_0.resp_off);
  if (VAR_3 >= sizeof(uint32_t)) {
   *VAR_1 = *VAR_2;
  } else if (VAR_3 > 0) {
   *VAR_1 = FUNC_1(VAR_2, VAR_3);
  }
  VAR_0.resp_off += sizeof(uint32_t);
  break;
 }

 if (VAR_0.resp_count > 3 &&
     VAR_0.resp_off >= VAR_0.resp_size) {
  FUNC_0();
  return (1);
 }

 return (0);
}
