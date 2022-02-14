
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct blkfront_ring_info {int evtchn; int * ring_ref; struct blkfront_info* dev_info; } ;
struct blkfront_info {int nr_ring_pages; int xbdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (int ,int,char*,char const*) ;
 int FUNC_2 (struct xenbus_transaction,char const*,char*,char*,int ) ;
 int FUNC_3 (struct xenbus_transaction,int) ;

__attribute__((used)) static int FUNC_4(struct xenbus_transaction VAR_1,
    struct blkfront_ring_info *VAR_2, const char *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 const char *VAR_6 = ((void*)0);
 struct blkfront_info *VAR_7 = VAR_2->dev_info;

 if (VAR_7->nr_ring_pages == 1) {
  VAR_4 = FUNC_2(VAR_1, VAR_3, "ring-ref", "%u", VAR_2->ring_ref[0]);
  if (VAR_4) {
   VAR_6 = "writing ring-ref";
   goto abort_transaction;
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_7->nr_ring_pages; VAR_5++) {
   char VAR_8[VAR_0];

   FUNC_0(VAR_8, VAR_0, "ring-ref%u", VAR_5);
   VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_8,
         "%u", VAR_2->ring_ref[VAR_5]);
   if (VAR_4) {
    VAR_6 = "writing ring-ref";
    goto abort_transaction;
   }
  }
 }

 VAR_4 = FUNC_2(VAR_1, VAR_3, "event-channel", "%u", VAR_2->evtchn);
 if (VAR_4) {
  VAR_6 = "writing event-channel";
  goto abort_transaction;
 }

 return 0;

abort_transaction:
 FUNC_3(VAR_1, 1);
 if (VAR_6)
  FUNC_1(VAR_7->xbdev, VAR_4, "%s", VAR_6);

 return VAR_4;
}
