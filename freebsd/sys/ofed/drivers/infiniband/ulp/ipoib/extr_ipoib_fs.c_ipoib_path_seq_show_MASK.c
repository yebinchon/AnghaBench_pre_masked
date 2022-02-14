
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct ipoib_path_iter {int dummy; } ;
struct TYPE_2__ {int sl; scalar_t__ dlid; int rate; int dgid; } ;
struct ipoib_path {TYPE_1__ pathrec; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_path_iter*,struct ipoib_path*) ;
 int FUNC_4 (struct seq_file*,char*,char*,char*,...) ;
 int FUNC_5 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct ipoib_path_iter *VAR_2 = VAR_1;
 char VAR_3[sizeof "ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff"];
 struct ipoib_path VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;

 FUNC_3(VAR_2, &VAR_4);

 FUNC_1(&VAR_4.pathrec.dgid, VAR_3);

 FUNC_4(VAR_0,
     "GID: %s\n"
     "  complete: %6s\n",
     VAR_3, VAR_4.pathrec.dlid ? "yes" : "no");

 if (VAR_4.pathrec.dlid) {
  VAR_5 = FUNC_2(VAR_4.pathrec.rate) * 25;

  FUNC_4(VAR_0,
      "  DLID:     0x%04x\n"
      "  SL: %12d\n"
      "  rate: %*d%s Gb/sec\n",
      FUNC_0(VAR_4.pathrec.dlid),
      VAR_4.pathrec.sl,
      10 - ((VAR_5 % 10) ? 2 : 0),
      VAR_5 / 10, VAR_5 % 10 ? ".5" : "");
 }

 FUNC_5(VAR_0, '\n');

 return 0;
}
