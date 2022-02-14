
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ctlstat_context {int cur_items; int numdevs; int item_mask; struct ctl_io_stats* cur_stats; } ;
struct ctl_io_stats {int item; int * dma_time; int * time; scalar_t__* dmas; scalar_t__* operations; scalar_t__* bytes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctlstat_context*) ;
 scalar_t__ FUNC_1 (struct ctlstat_context*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 char** VAR_1 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(struct ctlstat_context *VAR_2) {
 int VAR_3, VAR_4, VAR_5;
 struct ctl_io_stats *VAR_6 = VAR_2->cur_stats;

 FUNC_4("{\"%s\":[", FUNC_1(VAR_2) ? "ports" : "luns");
 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_2->cur_items; VAR_4++) {
  if (FUNC_0(VAR_2) && FUNC_3(VAR_2->item_mask,
      (int)VAR_6[VAR_4].item) == 0)
   continue;
  FUNC_4("{\"num\":%d,\"io\":[",
      VAR_6[VAR_4].item);
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_4("{\"type\":\"%s\",", VAR_1[VAR_3]);
   FUNC_4("\"bytes\":%ju,", (uintmax_t)
       VAR_6[VAR_4].bytes[VAR_3]);
   FUNC_4("\"operations\":%ju,", (uintmax_t)
       VAR_6[VAR_4].operations[VAR_3]);
   FUNC_4("\"dmas\":%ju,", (uintmax_t)
       VAR_6[VAR_4].dmas[VAR_3]);
   FUNC_4("\"io time\":");
   FUNC_2(VAR_6[VAR_4].time[VAR_3]);
   FUNC_4(",\"dma time\":");
   FUNC_2(VAR_6[VAR_4].dma_time[VAR_3]);
   FUNC_4("}");
   if (VAR_3 < (VAR_0 - 1))
    FUNC_4(",");
  }
  FUNC_4("]}");
  if (++VAR_5 >= VAR_2->numdevs)
   break;
  if (VAR_4 < (VAR_2->cur_items - 1))
   FUNC_4(",");
 }
 FUNC_4("]}");
}
