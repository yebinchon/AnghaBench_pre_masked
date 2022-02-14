
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acctv3 {int ac_version; int ac_len; int ac_len2; int ac_utime; int ac_stime; int ac_etime; int ac_io; int ac_flagx; int ac_tty; int ac_mem; int ac_gid; int ac_uid; int ac_btime; int ac_comm; scalar_t__ ac_zero; } ;
struct acctv1 {int ac_flag; int ac_tty; int ac_io; int ac_mem; int ac_gid; int ac_uid; int ac_btime; int ac_etime; int ac_stime; int ac_utime; int ac_comm; } ;
typedef int av1 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acctv1*,int,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_3, struct acctv3 *VAR_4)
{
 struct acctv1 VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_1(&VAR_5, sizeof(VAR_5), VAR_3)) == VAR_2)
  return (VAR_2);
 VAR_4->ac_zero = 0;
 VAR_4->ac_version = 3;
 VAR_4->ac_len = VAR_4->ac_len2 = sizeof(*VAR_4);
 FUNC_2(VAR_4->ac_comm, VAR_5, VAR_0);
 VAR_4->ac_utime = FUNC_0(VAR_5) * 1000000;
 VAR_4->ac_stime = FUNC_0(VAR_5) * 1000000;
 VAR_4->ac_etime = FUNC_0(VAR_5) * 1000000;
 VAR_4->ac_btime = VAR_5;
 VAR_4->ac_uid = VAR_5;
 VAR_4->ac_gid = VAR_5;
 VAR_4->ac_mem = VAR_5;
 VAR_4->ac_io = FUNC_0(VAR_5);
 VAR_4->ac_tty = VAR_5;
 VAR_4->ac_flagx = VAR_5 | VAR_1;
 return (0);
}
