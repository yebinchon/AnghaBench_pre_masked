
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acctv3 {int ac_version; int ac_len; int ac_len2; int ac_flagx; int ac_tty; int ac_io; int ac_mem; int ac_gid; int ac_uid; int ac_btime; int ac_etime; int ac_stime; int ac_utime; int ac_comm; scalar_t__ ac_zero; } ;
struct acctv2 {int ac_flagx; int ac_tty; int ac_io; int ac_mem; int ac_gid; int ac_uid; int ac_btime; int ac_etime; int ac_stime; int ac_utime; int ac_comm; } ;
typedef int av2 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acctv2*,int,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_2, struct acctv3 *VAR_3)
{
 struct acctv2 VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4, sizeof(VAR_4), VAR_2)) == VAR_1)
  return (VAR_1);
 VAR_3->ac_zero = 0;
 VAR_3->ac_version = 3;
 VAR_3->ac_len = VAR_3->ac_len2 = sizeof(*VAR_3);
 FUNC_1(VAR_3->ac_comm, VAR_4, VAR_0);
 VAR_3->ac_utime = VAR_4;
 VAR_3->ac_stime = VAR_4;
 VAR_3->ac_etime = VAR_4;
 VAR_3->ac_btime = VAR_4;
 VAR_3->ac_uid = VAR_4;
 VAR_3->ac_gid = VAR_4;
 VAR_3->ac_mem = VAR_4;
 VAR_3->ac_io = VAR_4;
 VAR_3->ac_tty = VAR_4;
 VAR_3->ac_flagx = VAR_4;
 return (0);
}
