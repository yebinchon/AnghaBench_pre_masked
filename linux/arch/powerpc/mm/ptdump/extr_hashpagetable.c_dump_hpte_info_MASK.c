
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pg_state {int seq; TYPE_1__* marker; } ;
struct TYPE_2__ {unsigned long start_address; unsigned long name; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct pg_state*,int,char*) ;
 int FUNC_3 (struct pg_state*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,unsigned long) ;
 int FUNC_5 (int ,char) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct pg_state *VAR_2, unsigned long VAR_3, u64 VAR_4, u64 VAR_5,
  unsigned long VAR_6, int VAR_7, int VAR_8, unsigned long VAR_9)
{
 int VAR_10;

 while (VAR_3 >= VAR_2->marker[1].start_address) {
  VAR_2->marker++;
  FUNC_4(VAR_2->seq, "---[ %s ]---\n", VAR_2->marker->name);
 }
 FUNC_4(VAR_2->seq, "0x%lx:\t", VAR_3);
 FUNC_4(VAR_2->seq, "AVPN:%llx\t", FUNC_1(VAR_4));
 FUNC_3(VAR_2, VAR_1, VAR_4, FUNC_0(VAR_1));
 FUNC_4(VAR_2->seq, "  rpn: %lx\t", VAR_6);
 FUNC_3(VAR_2, VAR_0, VAR_5, FUNC_0(VAR_0));

 FUNC_2(VAR_2, VAR_7, "base");
 VAR_10 = FUNC_2(VAR_2, VAR_8, "actual");
 if (VAR_10 != 2)
  FUNC_4(VAR_2->seq, "LP enc: %lx", VAR_9);
 FUNC_5(VAR_2->seq, '\n');
}
