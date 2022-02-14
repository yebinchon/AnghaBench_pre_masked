
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct drbd_peer_request {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct seq_file*,unsigned long,char*,char*,char*) ;
 int FUNC_1 (struct seq_file*,unsigned long,char*,char*) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_8, struct drbd_peer_request *VAR_9)
{
 unsigned long VAR_10 = VAR_9->flags;
 char VAR_11 = ' ';

 FUNC_0(VAR_8, VAR_10 & VAR_4, &VAR_11, "submitted", "preparing");
 FUNC_0(VAR_8, VAR_10 & VAR_0, &VAR_11, "application", "internal");
 FUNC_1(VAR_8, VAR_10 & VAR_1, &VAR_11, "in-AL");
 FUNC_1(VAR_8, VAR_10 & VAR_3, &VAR_11, "C");
 FUNC_1(VAR_8, VAR_10 & VAR_2, &VAR_11, "set-in-sync");
 FUNC_1(VAR_8, VAR_10 & VAR_5, &VAR_11, "trim");
 FUNC_1(VAR_8, VAR_10 & VAR_7, &VAR_11, "zero-out");
 FUNC_1(VAR_8, VAR_10 & VAR_6, &VAR_11, "write-same");
 FUNC_2(VAR_8, '\n');
}
