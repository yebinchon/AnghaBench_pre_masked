
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct powernow_state {scalar_t__ freq; size_t fid; int vid; void* power; } ;
struct pn_softc {int pn_type; int fsb; int errata; int powernow_max_states; struct powernow_state* powernow_states; } ;


 int VAR_0 ;
 void* VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct powernow_state*,struct powernow_state*,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (char*,int,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_2(struct pn_softc *VAR_6, uint8_t *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct powernow_state VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9)
  VAR_6->powernow_states[VAR_9].freq = VAR_1;

 for (VAR_11 = 0, VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
  VAR_12.fid = *VAR_7++;
  VAR_12.vid = *VAR_7++;
  VAR_12.power = VAR_1;

  switch (VAR_6->pn_type) {
  case 129:
   VAR_12.freq = 100 * VAR_4[VAR_12.fid] * VAR_6->fsb;
   if ((VAR_6->errata & VAR_0) &&
       (VAR_4[VAR_12.fid] % 10) == 5)
    continue;
   break;
  case 128:
   VAR_12.freq = 100 * VAR_5[VAR_12.fid] * VAR_6->fsb;
   break;
  }

  VAR_10 = VAR_11;
  while (VAR_10 > 0 && VAR_6->powernow_states[VAR_10 - 1].freq < VAR_12.freq) {
   FUNC_0(&VAR_6->powernow_states[VAR_10],
       &VAR_6->powernow_states[VAR_10 - 1],
       sizeof(struct powernow_state));
   --VAR_10;
  }
  FUNC_0(&VAR_6->powernow_states[VAR_10], &VAR_12,
      sizeof(struct powernow_state));
  ++VAR_11;
 }





 VAR_6->powernow_max_states = VAR_11;

 if (VAR_3)
  for (VAR_9 = 0; VAR_9 < VAR_6->powernow_max_states; ++VAR_9) {
   int VAR_13 = VAR_6->powernow_states[VAR_9].fid;
   int VAR_14 = VAR_6->powernow_states[VAR_9].vid;

   FUNC_1("powernow: %2i %8dkHz FID %02x VID %02x\n",
       VAR_9,
       VAR_6->powernow_states[VAR_9].freq,
       VAR_13,
       VAR_14);
  }

 return (0);
}
