
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x_waitlist {int dummy; } ;
struct host1x_syncpt {scalar_t__ base; } ;
struct host1x_job {int syncpt_id; scalar_t__ class; int syncpt_end; scalar_t__ serialize; int syncpt_incrs; int num_relocs; int num_gathers; struct host1x_channel* channel; } ;
struct host1x_channel {int submitlock; TYPE_1__* dev; int cdma; } ;
struct host1x {struct host1x_syncpt* syncpt; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 struct host1x* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,struct host1x_job*) ;
 int FUNC_4 (int *,struct host1x_job*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct host1x_channel*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct host1x*,struct host1x_syncpt*,struct host1x_channel*) ;
 int FUNC_9 (struct host1x*,struct host1x_syncpt*,int ,int ,struct host1x_channel*,struct host1x_waitlist*,int *) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 int FUNC_11 (struct host1x_syncpt*,int ) ;
 int FUNC_12 (struct host1x_syncpt*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct host1x_waitlist*) ;
 struct host1x_waitlist* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct host1x_job*) ;
 int FUNC_19 (struct host1x_job*) ;
 int FUNC_20 (int ,int ,int ,int,int ) ;
 int FUNC_21 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct host1x_job *VAR_5)
{
 struct host1x_channel *VAR_6 = VAR_5->channel;
 struct host1x_syncpt *VAR_7;
 u32 VAR_8 = VAR_5->syncpt_incrs;
 u32 VAR_9 = 0;
 u32 VAR_10;
 int VAR_11;
 struct host1x_waitlist *VAR_12 = ((void*)0);
 struct host1x *VAR_13 = FUNC_1(VAR_6->dev->parent);

 VAR_7 = VAR_13->syncpt + VAR_5->syncpt_id;
 FUNC_20(FUNC_2(VAR_6->dev),
        VAR_5->num_gathers, VAR_5->num_relocs,
        VAR_5->syncpt_id, VAR_5->syncpt_incrs);


 VAR_9 = VAR_5->syncpt_end = FUNC_12(VAR_7);


 VAR_11 = FUNC_16(&VAR_6->submitlock);
 if (VAR_11)
  goto error;

 VAR_12 = FUNC_15(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  FUNC_17(&VAR_6->submitlock);
  VAR_11 = -VAR_0;
  goto error;
 }

 FUNC_6(VAR_6);


 VAR_11 = FUNC_3(&VAR_6->cdma, VAR_5);
 if (VAR_11) {
  FUNC_17(&VAR_6->submitlock);
  goto error;
 }

 if (VAR_5->serialize) {




  FUNC_5(&VAR_6->cdma,
     FUNC_10(VAR_2,
     FUNC_13(), 1),
     FUNC_7(VAR_5->syncpt_id,
     FUNC_12(VAR_7)));
 }


 if (VAR_7->base)
  FUNC_19(VAR_5);

 VAR_10 = FUNC_11(VAR_7, VAR_8);

 FUNC_8(VAR_13, VAR_7, VAR_6);

 VAR_5->syncpt_end = VAR_10;


 if (VAR_5->class)
  FUNC_5(&VAR_6->cdma,
     FUNC_10(VAR_5->class, 0, 0),
     VAR_4);

 FUNC_18(VAR_5);


 FUNC_4(&VAR_6->cdma, VAR_5);

 FUNC_21(FUNC_2(VAR_6->dev), VAR_9, VAR_10);


 VAR_11 = FUNC_9(VAR_13, VAR_7, VAR_10,
         VAR_3, VAR_6,
         VAR_12, ((void*)0));
 VAR_12 = ((void*)0);
 FUNC_0(VAR_11, "Failed to set submit complete interrupt");

 FUNC_17(&VAR_6->submitlock);

 return 0;

error:
 FUNC_14(VAR_12);
 return VAR_11;
}
