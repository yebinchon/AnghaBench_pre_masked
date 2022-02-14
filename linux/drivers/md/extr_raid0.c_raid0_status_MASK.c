
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mddev {int chunk_sectors; } ;


 int FUNC_0 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct mddev *VAR_1)
{
 FUNC_0(VAR_0, " %dk chunks", VAR_1->chunk_sectors / 2);
 return;
}
