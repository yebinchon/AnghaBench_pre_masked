
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qid7; scalar_t__ idx3; } ;
union cvmx_pko_reg_queue_ptrs1 {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_4__ {int tail; int static_p; int static_q; int s_tail; int qos_mask; int buf_ptr; scalar_t__ queue; scalar_t__ port; scalar_t__ index; } ;
union cvmx_pko_mem_queue_ptrs {scalar_t__ u64; TYPE_2__ s; } ;
typedef scalar_t__ uint64_t ;
typedef int cvmx_pko_status_t ;
typedef int cvmx_cmd_queue_result_t ;





 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__) ;

cvmx_pko_status_t FUNC_8(uint64_t VAR_22, uint64_t VAR_23,
           uint64_t VAR_24,
           const uint64_t VAR_25[])
{
 cvmx_pko_status_t VAR_26;
 uint64_t VAR_27;
 union cvmx_pko_mem_queue_ptrs VAR_28;
 union cvmx_pko_reg_queue_ptrs1 VAR_29;
 int VAR_30 = -1;
 int VAR_31 = -1;

 if (FUNC_1(VAR_21))
  return VAR_18;

 if ((VAR_22 >= VAR_13)
     && (VAR_22 != VAR_11)) {
  FUNC_4("ERROR: cvmx_pko_config_port: Invalid port %llu\n",
        (unsigned long long)VAR_22);
  return VAR_5;
 }

 if (VAR_23 + VAR_24 > VAR_8) {
  FUNC_4
      ("ERROR: cvmx_pko_config_port: Invalid queue range %llu\n",
       (unsigned long long)(VAR_23 + VAR_24));
  return VAR_7;
 }

 if (VAR_22 != VAR_11) {





  for (VAR_27 = 0; VAR_27 < VAR_24; VAR_27++) {

   if (VAR_30 == -1
       && VAR_25[VAR_27] ==
       128)
    VAR_30 = VAR_27;

   if (VAR_30 != -1
       && VAR_31 == -1
       && VAR_25[VAR_27] != 128
       && VAR_27)
    VAR_31 = VAR_27 - 1;
   else if (VAR_30 != -1
     && VAR_31 == -1
     && VAR_27 == VAR_24 - 1)

    VAR_31 = VAR_27;






   if (VAR_31 != -1
       && (int)VAR_27 > VAR_31
       && VAR_25[VAR_27] ==
       128) {
    FUNC_4("ERROR: cvmx_pko_config_port: "
          "Static priority queues aren't "
          "contiguous or don't start at "
          "base queue. q: %d, eq: %d\n",
     (int)VAR_27, VAR_31);
    return VAR_6;
   }
  }
  if (VAR_30 > 0) {
   FUNC_4("ERROR: cvmx_pko_config_port: Static "
         "priority queues don't start at base "
         "queue. sq: %d\n",
    VAR_30);
   return VAR_6;
  }





 }






 VAR_26 = VAR_18;







 for (VAR_27 = 0; VAR_27 < VAR_24; VAR_27++) {
  uint64_t *VAR_32 = ((void*)0);

  VAR_29 = 0;
  VAR_29 = VAR_27 >> 3;
  VAR_29 = (VAR_23 + VAR_27) >> 7;

  VAR_28.u64 = 0;
  VAR_28.s.tail = VAR_27 == (VAR_24 - 1);
  VAR_28.s.index = VAR_27;
  VAR_28.s.port = VAR_22;
  VAR_28.s.queue = VAR_23 + VAR_27;

  if (!FUNC_5()) {
   VAR_28.s.static_p = VAR_30 >= 0;
   VAR_28.s.static_q = (int)VAR_27 <= VAR_31;
   VAR_28.s.s_tail = (int)VAR_27 == VAR_31;
  }





  switch ((int)VAR_25[VAR_27]) {
  case 0:
   VAR_28.s.qos_mask = 0x00;
   break;
  case 1:
   VAR_28.s.qos_mask = 0x01;
   break;
  case 2:
   VAR_28.s.qos_mask = 0x11;
   break;
  case 3:
   VAR_28.s.qos_mask = 0x49;
   break;
  case 4:
   VAR_28.s.qos_mask = 0x55;
   break;
  case 5:
   VAR_28.s.qos_mask = 0x57;
   break;
  case 6:
   VAR_28.s.qos_mask = 0x77;
   break;
  case 7:
   VAR_28.s.qos_mask = 0x7f;
   break;
  case 8:
   VAR_28.s.qos_mask = 0xff;
   break;
  case 128:
   if (!FUNC_5()) {
    VAR_28.s.qos_mask = 0xff;
    break;
   }

  default:
   FUNC_4("ERROR: cvmx_pko_config_port: Invalid "
         "priority %llu\n",
    (unsigned long long)VAR_25[VAR_27]);
   VAR_28.s.qos_mask = 0xff;
   VAR_26 = VAR_6;
   break;
  }

  if (VAR_22 != VAR_11) {
   cvmx_cmd_queue_result_t VAR_33 =
       FUNC_3(FUNC_0
            (VAR_23 + VAR_27),
            VAR_9,
            VAR_1,
            VAR_2
            -
            VAR_4
            * 8);
   if (VAR_33 != VAR_0) {
    switch (VAR_33) {
    case 129:
     FUNC_4("ERROR: "
           "cvmx_pko_config_port: "
           "Unable to allocate "
           "output buffer.\n");
     return VAR_12;
    case 131:
     FUNC_4
         ("ERROR: cvmx_pko_config_port: Port already setup.\n");
     return VAR_14;
    case 130:
    default:
     FUNC_4
         ("ERROR: cvmx_pko_config_port: Command queue initialization failed.\n");
     return VAR_3;
    }
   }

   VAR_32 =
       (uint64_t *)
       FUNC_2(FUNC_0
        (VAR_23 + VAR_27));
   VAR_28.s.buf_ptr = FUNC_6(VAR_32);
  } else
   VAR_28.s.buf_ptr = 0;

  VAR_19;

  if (!FUNC_1(VAR_20))
   FUNC_7(VAR_17, VAR_29);
  FUNC_7(VAR_10, VAR_28.u64);
 }

 return VAR_26;
}
