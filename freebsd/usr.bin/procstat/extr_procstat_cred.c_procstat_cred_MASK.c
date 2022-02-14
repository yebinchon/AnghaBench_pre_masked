
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int dummy; } ;
struct kinfo_proc {int ki_cr_flags; unsigned int ki_ngroups; int * ki_groups; int ki_svgid; int ki_rgid; int ki_svuid; int ki_ruid; int ki_uid; int ki_comm; int ki_pid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct procstat*,struct kinfo_proc*) ;
 int FUNC_1 (struct procstat*,int *) ;
 int * FUNC_2 (struct procstat*,struct kinfo_proc*,unsigned int*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

void
FUNC_6(struct procstat *VAR_4, struct kinfo_proc *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 gid_t *VAR_8;

 if ((VAR_3 & VAR_2) == 0)
  FUNC_4("{T:/%5s %-16s %5s %5s %5s %5s %5s %5s %5s %5s %-15s}\n",
      "PID", "COMM", "EUID", "RUID", "SVUID", "EGID", "RGID",
      "SVGID", "UMASK", "FLAGS", "GROUPS");

 FUNC_4("{k:process_id/%5d/%d} ", VAR_5->ki_pid);
 FUNC_4("{:command/%-16s/%s} ", VAR_5->ki_comm);
 FUNC_4("{:uid/%5d} ", VAR_5->ki_uid);
 FUNC_4("{:ruid/%5d} ", VAR_5->ki_ruid);
 FUNC_4("{:svuid/%5d} ", VAR_5->ki_svuid);
 FUNC_4("{:group/%5d} ", VAR_5->ki_groups[0]);
 FUNC_4("{:rgid/%5d} ", VAR_5->ki_rgid);
 FUNC_4("{:svgid/%5d} ", VAR_5->ki_svgid);
 FUNC_4("{:umask/%5s} ", FUNC_0(VAR_4, VAR_5));
 FUNC_4("{:cr_flags/%s}", VAR_5->ki_cr_flags & VAR_0 ?
     "C" : "-");
 FUNC_4("{P:     }");

 VAR_8 = ((void*)0);





 if (VAR_5->ki_cr_flags & VAR_1)
  VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_7);
 if (VAR_8 == ((void*)0)) {
  VAR_7 = VAR_5->ki_ngroups;
  VAR_8 = VAR_5->ki_groups;
 }
 FUNC_5("groups");
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_4("{D:/%s}{l:groups/%d}", (VAR_6 > 0) ? "," : "", VAR_8[VAR_6]);
 if (VAR_8 != VAR_5->ki_groups)
  FUNC_1(VAR_4, VAR_8);

 FUNC_3("groups");
 FUNC_4("\n");
}
