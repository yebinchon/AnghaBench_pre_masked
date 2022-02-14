
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int resultproc_t ;
struct TYPE_15__ {int domain_name; void* client_name; } ;
typedef TYPE_3__ bp_whoami_res ;
struct TYPE_13__ {int ip_addr; } ;
struct TYPE_14__ {TYPE_1__ bp_address_u; int address_type; } ;
struct TYPE_16__ {TYPE_2__ client_address; } ;
typedef TYPE_4__ bp_whoami_arg ;
struct TYPE_17__ {int server_path; void* server_name; } ;
typedef TYPE_5__ bp_getfile_res ;
struct TYPE_18__ {char* client_name; char* file_id; } ;
typedef TYPE_6__ bp_getfile_arg ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (long*,int *,int) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ,char*,int ,char*,int ) ;
 int * FUNC_4 (char*,int ,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int ) ;
 long FUNC_7 (char*) ;
 int VAR_11 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int
FUNC_13(int VAR_16, char **VAR_17)
{
  char *VAR_18;

  bp_whoami_arg VAR_19;
  bp_whoami_res *VAR_20, VAR_21;
  bp_getfile_arg VAR_22;
  bp_getfile_res *VAR_23, VAR_24;


  long VAR_25;
  CLIENT *VAR_26;

  VAR_21.client_name = VAR_7;
  VAR_21.domain_name = VAR_8;

  VAR_24.server_name = VAR_7;
  VAR_24.server_path = VAR_11;

  if (VAR_16 < 3)
    FUNC_12();

  VAR_18 = VAR_17[1];
  if ( ! FUNC_11(VAR_18 , "all") ) VAR_6 = 1;

  if ( ! VAR_6 ) {
    VAR_26 = FUNC_4(VAR_18,VAR_2, VAR_3, "udp");
    if ( VAR_26 == ((void*)0) )
      FUNC_5(1, "could not contact bootparam server on host %s", VAR_18);
  }

  switch (VAR_16) {
  case 3:
    VAR_19.client_address.address_type = VAR_5;
    VAR_25 = FUNC_7(VAR_17[2]);
    if ( VAR_25 == VAR_4)
      FUNC_5(2, "bogus addr %s", VAR_17[2]);
    FUNC_0(&VAR_25,&VAR_19.client_address.bp_address_u.ip_addr,4);

    if (! VAR_6 ) {
      VAR_20 = FUNC_2(&VAR_19, VAR_26);
      FUNC_8("Whoami returning:\n");
      if (FUNC_10(VAR_20)) {
 FUNC_5(1, "bad answer returned from server %s", VAR_18);
      } else
 FUNC_6(0);
     } else {
       (void)FUNC_3(VAR_2, VAR_3,
          VAR_1,
          (xdrproc_t)VAR_14,
          (char *)&VAR_19,
          (xdrproc_t)VAR_15,
          (char *)&VAR_21,
          (resultproc_t)VAR_10);
       FUNC_6(0);
     }

  case 4:

    VAR_22.client_name = VAR_17[2];
    VAR_22.file_id = VAR_17[3];

    if (! VAR_6 ) {
      VAR_23 = FUNC_1(&VAR_22,VAR_26);
      FUNC_8("getfile returning:\n");
      if (FUNC_9(VAR_23)) {
 FUNC_5(1, "bad answer returned from server %s", VAR_18);
      } else
 FUNC_6(0);
    } else {
      (void)FUNC_3(VAR_2, VAR_3,
          VAR_0,
          (xdrproc_t)VAR_12,
          (char *)&VAR_22,
          (xdrproc_t)VAR_13,
          (char *)&VAR_24,
          (resultproc_t)VAR_9);
      FUNC_6(0);
    }

  default:

    FUNC_12();
  }

}
