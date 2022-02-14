
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct hda_stream_desc {int run; int bdl_cnt; size_t stream; size_t dir; scalar_t__ be; scalar_t__ bp; struct hda_bdle_desc* bdl; } ;
struct hda_softc {size_t** stream_map; struct hda_stream_desc* streams; } ;
struct hda_bdle_desc {int len; int ioc; void* addr; } ;
struct hda_bdle {int len; int addrl; int addrh; int ioc; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct hda_softc*,int,int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct hda_softc*,int) ;
 int FUNC_5 (struct hda_softc*,int,size_t,size_t) ;
 int FUNC_6 (struct hda_softc*,size_t,int ) ;

__attribute__((used)) static int
FUNC_7(struct hda_softc *VAR_8, uint8_t VAR_9)
{
 struct hda_stream_desc *VAR_10 = &VAR_8->streams[VAR_9];
 struct hda_bdle_desc *VAR_11 = ((void*)0);
 struct hda_bdle *VAR_12 = ((void*)0);
 uint32_t VAR_13 = 0;
 uint32_t VAR_14 = 0;
 uint64_t VAR_15 = 0;
 uint64_t VAR_16 = 0;
 uint64_t VAR_17 = 0;
 void *VAR_18 = ((void*)0);
 uint32_t VAR_19 = 0;
 uint64_t VAR_20 = 0;
 uint64_t VAR_21 = 0;
 uint64_t VAR_22 = 0;
 void *VAR_23 = ((void*)0);
 uint32_t VAR_24 = FUNC_3(VAR_9);
 uint32_t VAR_25 = 0;
 uint8_t VAR_26 = 0;
 uint8_t VAR_27 = 0;
 int VAR_28;

 FUNC_1(!VAR_10->run);

 VAR_13 = FUNC_4(VAR_8, VAR_24 + VAR_3);
 VAR_15 = FUNC_4(VAR_8, VAR_24 + VAR_0);
 VAR_16 = FUNC_4(VAR_8, VAR_24 + VAR_1);

 VAR_14 = VAR_13 + 1;
 FUNC_1(VAR_14 <= VAR_5);

 VAR_17 = VAR_15 | (VAR_16 << 32);
 VAR_18 = FUNC_2(VAR_8, VAR_17,
     VAR_4 * VAR_14);
 if (!VAR_18) {
  FUNC_0("Fail to get the guest virtual address\n");
  return (-1);
 }

 FUNC_0("stream: 0x%x bdl_cnt: 0x%x bdl_paddr: 0x%lx\n",
     VAR_9, VAR_14, VAR_17);

 VAR_10->bdl_cnt = VAR_14;

 VAR_12 = (struct hda_bdle *)VAR_18;
 for (VAR_28 = 0; VAR_28 < VAR_14; VAR_28++, VAR_12++) {
  VAR_19 = VAR_12->len;
  FUNC_1(!(VAR_19 % VAR_6));

  VAR_20 = VAR_12->addrl;
  VAR_21 = VAR_12->addrh;

  VAR_22 = VAR_20 | (VAR_21 << 32);
  VAR_23 = FUNC_2(VAR_8, VAR_22, VAR_19);
  if (!VAR_23) {
   FUNC_0("Fail to get the guest virtual address\n");
   return (-1);
  }

  VAR_11 = &VAR_10->bdl[VAR_28];
  VAR_11->addr = VAR_23;
  VAR_11->len = VAR_19;
  VAR_11->ioc = VAR_12->ioc;

  FUNC_0("bdle: 0x%x bdle_sz: 0x%x\n", VAR_28, VAR_19);
 }

 VAR_25 = FUNC_4(VAR_8, VAR_24 + VAR_2);
 VAR_26 = (VAR_25 >> 20) & 0x0f;
 VAR_27 = VAR_9 >= VAR_7;

 FUNC_0("strm: 0x%x, dir: 0x%x\n", VAR_26, VAR_27);

 VAR_8->stream_map[VAR_27][VAR_26] = VAR_9;
 VAR_10->stream = VAR_26;
 VAR_10->dir = VAR_27;
 VAR_10->bp = 0;
 VAR_10->be = 0;

 FUNC_6(VAR_8, VAR_9, 0);

 VAR_10->run = 1;

 FUNC_5(VAR_8, 1, VAR_26, VAR_27);

 return (0);
}
