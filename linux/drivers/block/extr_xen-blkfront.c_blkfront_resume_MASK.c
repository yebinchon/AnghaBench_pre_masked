
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_device {int nodename; int dev; } ;
struct blkfront_ring_info {struct blk_shadow* shadow; } ;
struct blkfront_info {unsigned int nr_rings; scalar_t__ connected; int tag_set; int bio_list; int requests; struct blkfront_ring_info* rinfo; } ;
struct blk_shadow {TYPE_1__* request; } ;
struct bio_list {int tail; int * head; } ;
struct TYPE_3__ {int cmd_flags; int * bio; int biotail; int queuelist; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct blkfront_info*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bio_list*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct blkfront_info*,int) ;
 int FUNC_7 (int *,char*,int ) ;
 struct blkfront_info* FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct xenbus_device*,struct blkfront_info*) ;

__attribute__((used)) static int FUNC_12(struct xenbus_device *VAR_6)
{
 struct blkfront_info *VAR_7 = FUNC_8(&VAR_6->dev);
 int VAR_8 = 0;
 unsigned int VAR_9, VAR_10;

 FUNC_7(&VAR_6->dev, "blkfront_resume: %s\n", VAR_6->nodename);

 FUNC_2(&VAR_7->bio_list);
 FUNC_1(&VAR_7->requests);
 for (VAR_9 = 0; VAR_9 < VAR_7->nr_rings; VAR_9++) {
  struct blkfront_ring_info *VAR_11 = &VAR_7->rinfo[VAR_9];
  struct bio_list VAR_12;
  struct blk_shadow *VAR_13 = VAR_11->shadow;

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++) {

   if (!VAR_13[VAR_10].request)
    continue;




   if (FUNC_10(VAR_13[VAR_10].request) == VAR_4 ||
       FUNC_10(VAR_13[VAR_10].request) == VAR_3 ||
       FUNC_10(VAR_13[VAR_10].request) == VAR_5 ||
       VAR_13[VAR_10].request->cmd_flags & VAR_2) {







    FUNC_9(&VAR_13[VAR_10].request->queuelist, &VAR_7->requests);
    continue;
   }
   VAR_12.head = VAR_13[VAR_10].request->bio;
   VAR_12.tail = VAR_13[VAR_10].request->biotail;
   FUNC_3(&VAR_7->bio_list, &VAR_12);
   VAR_13[VAR_10].request->bio = ((void*)0);
   FUNC_4(VAR_13[VAR_10].request, VAR_1);
  }
 }

 FUNC_6(VAR_7, VAR_7->connected == VAR_0);

 VAR_8 = FUNC_11(VAR_6, VAR_7);
 if (!VAR_8)
  FUNC_5(&VAR_7->tag_set, VAR_7->nr_rings);







 return VAR_8;
}
