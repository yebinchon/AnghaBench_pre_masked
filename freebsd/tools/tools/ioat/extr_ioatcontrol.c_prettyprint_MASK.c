
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ioat_test {int* status; unsigned int chain_depth; int duration; scalar_t__ buffer_size; } ;
typedef int int64_t ;
typedef int bytesh ;
typedef int bps ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*,int,int,char*,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(struct ioat_test *VAR_7)
{
 char VAR_8[10], VAR_9[10];
 uintmax_t VAR_10;

 if (VAR_7->status[VAR_4] != 0 ||
     VAR_7->status[VAR_5] != 0 ||
     VAR_7->status[VAR_3] != 0) {
  FUNC_1("Errors:\n");
  if (VAR_7->status[VAR_4] != 0)
   FUNC_1("\tNo DMA engine present: %u\n",
       (unsigned)VAR_7->status[VAR_4]);
  if (VAR_7->status[VAR_5] != 0)
   FUNC_1("\tOut of memory: %u\n",
       (unsigned)VAR_7->status[VAR_5]);
  if (VAR_7->status[VAR_3] != 0)
   FUNC_1("\tMiscompares: %u\n",
       (unsigned)VAR_7->status[VAR_3]);
 }

 FUNC_1("Processed %u txns\n", (unsigned)VAR_7->status[VAR_6] /
     VAR_7->chain_depth);
 VAR_10 = (uintmax_t)VAR_7->buffer_size * VAR_7->status[VAR_6];

 FUNC_0(VAR_9, sizeof(VAR_9), (int64_t)VAR_10, "B",
     VAR_1, VAR_2);
 if (VAR_7->duration) {
  FUNC_0(VAR_8, sizeof(VAR_8),
      (int64_t)1000 * VAR_10 / VAR_7->duration, "B/s", VAR_1,
      VAR_2);
  FUNC_1("%ju (%s) copied in %u ms (%s)\n", VAR_10, VAR_9,
      (unsigned)VAR_7->duration, VAR_8);
 } else
  FUNC_1("%ju (%s) copied\n", VAR_10, VAR_9);

 return (VAR_0);
}
