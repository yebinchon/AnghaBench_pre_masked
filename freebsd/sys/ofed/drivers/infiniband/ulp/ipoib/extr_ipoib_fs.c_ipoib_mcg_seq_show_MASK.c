
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct seq_file {int dummy; } ;
struct ipoib_mcast_iter {int dummy; } ;


 int FUNC_0 (union ib_gid*,char*) ;
 int FUNC_1 (struct ipoib_mcast_iter*,union ib_gid*,unsigned long*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct seq_file*,char*,char*,unsigned long,unsigned int,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct ipoib_mcast_iter *VAR_2 = VAR_1;
 char VAR_3[sizeof "ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff"];
 union ib_gid VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 if (!VAR_2)
  return 0;

 FUNC_1(VAR_2, &VAR_4, &VAR_5, &VAR_6,
         &VAR_7, &VAR_8);

 FUNC_0(&VAR_4, VAR_3);

 FUNC_2(VAR_0,
     "GID: %s\n"
     "  created: %10ld\n"
     "  queuelen: %9d\n"
     "  complete: %9s\n"
     "  send_only: %8s\n"
     "\n",
     VAR_3, VAR_5, VAR_6,
     VAR_7 ? "yes" : "no",
     VAR_8 ? "yes" : "no");

 return 0;
}
