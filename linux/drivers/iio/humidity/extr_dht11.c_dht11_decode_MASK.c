
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dht11 {unsigned char temperature; unsigned char humidity; int dev; int timestamp; TYPE_1__* edges; } ;
struct TYPE_2__ {int ts; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 unsigned char FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct dht11 *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 char VAR_7[VAR_0];
 unsigned char VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_6 = VAR_3->edges[VAR_4 + 2 * VAR_5 + 2].ts -
   VAR_3->edges[VAR_4 + 2 * VAR_5 + 1].ts;
  if (!VAR_3->edges[VAR_4 + 2 * VAR_5 + 1].value) {
   FUNC_0(VAR_3->dev,
    "lost synchronisation at edge %d\n",
    VAR_4 + 2 * VAR_5 + 1);
   return -VAR_2;
  }
  VAR_7[VAR_5] = VAR_6 > VAR_1;
 }

 VAR_10 = FUNC_2(VAR_7);
 VAR_11 = FUNC_2(&VAR_7[8]);
 VAR_8 = FUNC_2(&VAR_7[16]);
 VAR_9 = FUNC_2(&VAR_7[24]);
 VAR_12 = FUNC_2(&VAR_7[32]);

 if (((VAR_10 + VAR_11 + VAR_8 + VAR_9) & 0xff) != VAR_12) {
  FUNC_0(VAR_3->dev, "invalid checksum\n");
  return -VAR_2;
 }

 VAR_3->timestamp = FUNC_3();
 if (VAR_10 < 4) {
  VAR_3->temperature = (((VAR_8 & 0x7f) << 8) + VAR_9) *
     ((VAR_8 & 0x80) ? -100 : 100);
  VAR_3->humidity = ((VAR_10 << 8) + VAR_11) * 100;
 } else if (VAR_9 == 0 && VAR_11 == 0) {
  VAR_3->temperature = VAR_8 * 1000;
  VAR_3->humidity = VAR_10 * 1000;
 } else {
  FUNC_1(VAR_3->dev,
   "Don't know how to decode data: %d %d %d %d\n",
   VAR_10, VAR_11, VAR_8, VAR_9);
  return -VAR_2;
 }

 return 0;
}
