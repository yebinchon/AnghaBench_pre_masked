
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int udp_type_t ;
struct TYPE_5__ {int fd; int our_port; scalar_t__ ev; void* extra; int * type; int flags; } ;
struct TYPE_4__ {TYPE_3__ u; } ;
typedef TYPE_1__ tftp_connection_t ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int ,TYPE_3__*) ;
 int FUNC_4 (char*,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_6 (tftp_connection_t *VAR_12, int VAR_13, int VAR_14, udp_type_t *VAR_15, void *VAR_16, int VAR_17) {
  if (FUNC_1 (VAR_15) < 0) {
    return -1;
  }
  FUNC_0 (VAR_13 > 2 && VAR_13 < VAR_8);
  int VAR_18 = 1;
  if (FUNC_5 (VAR_13, VAR_4, VAR_7, &VAR_18, sizeof (VAR_18)) < 0) {
    FUNC_4 ("setsockopt for %d failed: %m\n", VAR_13);
  }
  if ((VAR_17 & VAR_9) && FUNC_5 (VAR_13, VAR_5, VAR_6, &VAR_18, sizeof (VAR_18)) < 0) {
    FUNC_4 ("setsockopt for %d failed: %m\n", VAR_13);
  }
  VAR_12->u.fd = VAR_13;
  VAR_12->u.flags = VAR_17 & VAR_9 ? VAR_10 : 0;
  VAR_12->u.type = VAR_15;
  VAR_12->u.extra = VAR_16;
  VAR_12->u.ev = VAR_3 + VAR_13;
  VAR_12->u.our_port = VAR_14;
  FUNC_3 (VAR_13, -5, VAR_11, &VAR_12->u);
  FUNC_2 (VAR_13, VAR_0 | VAR_1 | VAR_2);
  return 0;
}
