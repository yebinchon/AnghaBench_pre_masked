
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_ctrs {int pkts; int bytes; scalar_t__ events; } ;
struct glob_arg {double framing; } ;


 char* FUNC_0 (char*,double,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2(struct glob_arg *VAR_1, struct my_ctrs *VAR_2, double VAR_3, const char *VAR_4)
{
 double VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9[40], VAR_10[80], VAR_11[80];
 int VAR_12;

 if (VAR_2->pkts == 0) {
  FUNC_1("%s nothing.\n", VAR_4);
  return;
 }

 VAR_12 = (int)(VAR_2->bytes / VAR_2->pkts);

 FUNC_1("%s %llu packets %llu bytes %llu events %d bytes each in %.2f seconds.\n",
  VAR_4,
  (unsigned long long)VAR_2->pkts,
  (unsigned long long)VAR_2->bytes,
  (unsigned long long)VAR_2->events, VAR_12, VAR_3);
 if (VAR_3 == 0)
  VAR_3 = 1e-6;
 if (VAR_12 < 60)
  VAR_12 = 60;
 VAR_7 = VAR_2->pkts / VAR_3;
 VAR_5 = (8.0 * VAR_2->bytes) / VAR_3;
 VAR_6 = (8.0 * VAR_2->bytes + VAR_2->pkts * VAR_1->framing) / VAR_3;
 VAR_8 = VAR_2->pkts / (double)(VAR_2->events);

 FUNC_1("Speed: %spps Bandwidth: %sbps (raw %sbps). Average batch: %.2f pkts\n",
  FUNC_0(VAR_9, VAR_7, VAR_0), FUNC_0(VAR_10, VAR_5, VAR_0), FUNC_0(VAR_11, VAR_6, VAR_0), VAR_8);
}
