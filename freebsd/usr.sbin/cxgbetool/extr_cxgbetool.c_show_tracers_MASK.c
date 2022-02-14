
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int snap_len; int min_len; int skip_ofst; int* data; int* mask; int skip_len; scalar_t__ invert; } ;
struct t4_tracer {int idx; TYPE_1__ tp; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct t4_tracer*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,int,long long*) ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct t4_tracer VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 long long VAR_7;


 VAR_4 = FUNC_2(0x9800, 4, &VAR_7);
 if (VAR_4 != 0)
  return (VAR_4);
 FUNC_1("tracing is %s\n", VAR_7 & 2 ? "ENABLED" : "DISABLED");

 VAR_2.idx = 0;
 for (VAR_2.idx = 0; ; VAR_2.idx++) {
  VAR_4 = FUNC_0(VAR_0, &VAR_2);
  if (VAR_4 != 0 || VAR_2.idx == 0xff)
   break;

  if (VAR_2.tp.port < 4) {
   VAR_3 = "Rx";
   VAR_5 = VAR_2.tp.port;
  } else if (VAR_2.tp.port < 8) {
   VAR_3 = "Tx";
   VAR_5 = VAR_2.tp.port - 4;
  } else if (VAR_2.tp.port < 12) {
   VAR_3 = "loopback";
   VAR_5 = VAR_2.tp.port - 8;
  } else if (VAR_2.tp.port < 16) {
   VAR_3 = "MPS Rx";
   VAR_5 = VAR_2.tp.port - 12;
  } else if (VAR_2.tp.port < 20) {
   VAR_3 = "MPS Tx";
   VAR_5 = VAR_2.tp.port - 16;
  } else {
   VAR_3 = "unknown";
   VAR_5 = VAR_2.tp.port;
  }

  FUNC_1("\ntracer %u (currently %s) captures ", VAR_2.idx,
      VAR_2.enabled ? "ENABLED" : "DISABLED");
  if (VAR_2.tp.port < 8)
   FUNC_1("port %u %s, ", VAR_5, VAR_3);
  else
   FUNC_1("%s %u, ", VAR_3, VAR_5);
  FUNC_1("snap length: %u, min length: %u\n", VAR_2.tp.snap_len,
      VAR_2.tp.min_len);
  FUNC_1("packets captured %smatch filter\n",
      VAR_2.tp.invert ? "do not " : "");
  if (VAR_2.tp.skip_ofst) {
   FUNC_1("filter pattern: ");
   for (VAR_6 = 0; VAR_6 < VAR_2.tp.skip_ofst * 2; VAR_6 += 2)
    FUNC_1("%08x%08x", VAR_2.tp.data[VAR_6],
        VAR_2.tp.data[VAR_6 + 1]);
   FUNC_1("/");
   for (VAR_6 = 0; VAR_6 < VAR_2.tp.skip_ofst * 2; VAR_6 += 2)
    FUNC_1("%08x%08x", VAR_2.tp.mask[VAR_6],
        VAR_2.tp.mask[VAR_6 + 1]);
   FUNC_1("@0\n");
  }
  FUNC_1("filter pattern: ");
  for (VAR_6 = VAR_2.tp.skip_ofst * 2; VAR_6 < VAR_1 / 4; VAR_6 += 2)
   FUNC_1("%08x%08x", VAR_2.tp.data[VAR_6], VAR_2.tp.data[VAR_6 + 1]);
  FUNC_1("/");
  for (VAR_6 = VAR_2.tp.skip_ofst * 2; VAR_6 < VAR_1 / 4; VAR_6 += 2)
   FUNC_1("%08x%08x", VAR_2.tp.mask[VAR_6], VAR_2.tp.mask[VAR_6 + 1]);
  FUNC_1("@%u\n", (VAR_2.tp.skip_ofst + VAR_2.tp.skip_len) * 8);
 }

 return (VAR_4);
}
