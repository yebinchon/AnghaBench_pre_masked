
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
struct TYPE_3__ {TYPE_2__ sa; } ;
struct sctp_ifa {int localifa_flags; scalar_t__ src_is_priv; scalar_t__ src_is_loop; scalar_t__ src_is_glob; TYPE_1__ address; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct sctp_ifa *
FUNC_2(struct sctp_ifa *VAR_4,
    uint8_t VAR_5,
    uint8_t VAR_6,
    sa_family_t VAR_7)
{
 uint8_t VAR_8 = 0;
 if (VAR_4->address.sa.sa_family != VAR_7) {

  return (((void*)0));
 }
 if ((VAR_6 == 0) && (VAR_5 == 0)) {
  VAR_8 = 1;
 }
 FUNC_0(VAR_2, "Is destination preferred:");
 FUNC_1(VAR_2, &VAR_4->address.sa);
 FUNC_0(VAR_3, "src_loop:%d src_priv:%d src_glob:%d\n",
     VAR_4->src_is_loop, VAR_4->src_is_priv, VAR_4->src_is_glob);
 FUNC_0(VAR_3, "dest_loop:%d dest_priv:%d dest_glob:%d\n",
     VAR_5, VAR_6, VAR_8);

 if ((VAR_4->src_is_loop) && (VAR_6)) {
  FUNC_0(VAR_3, "NO:4\n");
  return (((void*)0));
 }
 if ((VAR_4->src_is_glob) && (VAR_6)) {
  FUNC_0(VAR_3, "NO:5\n");
  return (((void*)0));
 }
 if ((VAR_4->src_is_loop) && (VAR_8)) {
  FUNC_0(VAR_3, "NO:6\n");
  return (((void*)0));
 }
 if ((VAR_4->src_is_priv) && (VAR_8)) {
  FUNC_0(VAR_3, "NO:7\n");
  return (((void*)0));
 }
 FUNC_0(VAR_3, "YES\n");

 return (VAR_4);
}
