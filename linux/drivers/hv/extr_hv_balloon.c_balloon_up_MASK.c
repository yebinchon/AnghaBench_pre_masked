
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_10__ {int size; int trans_id; int type; } ;
struct dm_balloon_response {int more_pages; int range_count; int * range_array; TYPE_3__ hdr; } ;
struct TYPE_8__ {unsigned int num_pages; } ;
struct TYPE_11__ {TYPE_2__* dev; int state; TYPE_1__ balloon_wrk; } ;
struct TYPE_9__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (TYPE_4__*,unsigned int,struct dm_balloon_response*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_3 () ;
 TYPE_4__ VAR_7 ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,unsigned int,unsigned int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 long FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (int ,struct dm_balloon_response*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_13(struct work_struct *VAR_9)
{
 unsigned int VAR_10 = VAR_7.balloon_wrk.num_pages;
 unsigned int VAR_11 = 0;
 struct dm_balloon_response *VAR_12;
 int VAR_13;
 int VAR_14;
 bool VAR_15 = 0;
 int VAR_16;
 long VAR_17;
 unsigned long VAR_18;


 FUNC_0(VAR_10 % VAR_3 != 0);





 VAR_13 = 512;

 VAR_17 = FUNC_11();
 VAR_18 = FUNC_3();


 if (VAR_17 < VAR_10 || VAR_17 - VAR_10 < VAR_18) {
  FUNC_10("Balloon request will be partially fulfilled. %s\n",
   VAR_17 < VAR_10 ? "Not enough memory." :
   "Balloon floor reached.");

  VAR_10 = VAR_17 > VAR_18 ? (VAR_17 - VAR_18) : 0;
  VAR_10 -= VAR_10 % VAR_3;
 }

 while (!VAR_15) {
  FUNC_5(VAR_6, 0, VAR_4);
  VAR_12 = (struct dm_balloon_response *)VAR_6;
  VAR_12->hdr.type = VAR_0;
  VAR_12->hdr.size = sizeof(struct dm_balloon_response);
  VAR_12->more_pages = 1;

  VAR_10 -= VAR_11;
  VAR_11 = FUNC_1(&VAR_7, VAR_10,
          VAR_12, VAR_13);

  if (VAR_13 != 1 && VAR_11 == 0) {
   VAR_13 = 1;
   continue;
  }

  if (VAR_11 == 0 || VAR_11 == VAR_10) {
   FUNC_8("Ballooned %u out of %u requested pages.\n",
    VAR_10, VAR_7.balloon_wrk.num_pages);

   VAR_12->more_pages = 0;
   VAR_15 = 1;
   VAR_7.state = VAR_1;
  }







  do {
   VAR_12->hdr.trans_id = FUNC_2(&VAR_8);
   VAR_14 = FUNC_12(VAR_7.dev->channel,
      VAR_12,
      VAR_12->hdr.size,
      (unsigned long)((void*)0),
      VAR_5, 0);

   if (VAR_14 == -VAR_2)
    FUNC_6(20);
   FUNC_7(&VAR_7);
  } while (VAR_14 == -VAR_2);

  if (VAR_14) {



   FUNC_9("Balloon response failed\n");

   for (VAR_16 = 0; VAR_16 < VAR_12->range_count; VAR_16++)
    FUNC_4(&VAR_7,
       &VAR_12->range_array[VAR_16]);

   VAR_15 = 1;
  }
 }

}
