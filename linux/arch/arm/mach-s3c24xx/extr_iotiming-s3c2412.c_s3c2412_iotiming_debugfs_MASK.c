
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union s3c_iobank {struct s3c2412_iobank_timing* io_2412; } ;
struct seq_file {int dummy; } ;
struct s3c_cpufreq_config {int dummy; } ;
struct s3c2412_iobank_timing {int wstbrd; int wstwen; int wstoen; int wstwr; int wstrd; int idcy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ) ;

void FUNC_2(struct seq_file *VAR_0,
         struct s3c_cpufreq_config *VAR_1,
         union s3c_iobank *VAR_2)
{
 struct s3c2412_iobank_timing *VAR_3 = VAR_2->io_2412;

 FUNC_1(VAR_0,
     "\tRead: idcy=%d.%d wstrd=%d.%d wstwr=%d,%d"
     "wstoen=%d.%d wstwen=%d.%d wstbrd=%d.%d\n",
     FUNC_0(VAR_3->idcy),
     FUNC_0(VAR_3->wstrd),
     FUNC_0(VAR_3->wstwr),
     FUNC_0(VAR_3->wstoen),
     FUNC_0(VAR_3->wstwen),
     FUNC_0(VAR_3->wstbrd));
}
