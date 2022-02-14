
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dmx_pes_filter_params {int output; int pes_type; } ;
struct TYPE_5__ {struct dmx_pes_filter_params pes; } ;
struct dmxdev_filter {TYPE_1__ params; } ;
struct dmxdev_feed {int pid; struct dmx_ts_feed* ts; } ;
struct dmxdev {TYPE_2__* demux; } ;
struct dmx_ts_feed {int (* set ) (struct dmx_ts_feed*,int ,int,int,int ) ;int (* start_filtering ) (struct dmx_ts_feed*) ;struct dmxdev_filter* priv; } ;
typedef int ktime_t ;
typedef enum dmx_ts_pes { ____Placeholder_dmx_ts_pes } dmx_ts_pes ;
typedef enum dmx_output { ____Placeholder_dmx_output } dmx_output ;
struct TYPE_6__ {int (* allocate_ts_feed ) (TYPE_2__*,struct dmx_ts_feed**,int ) ;int (* release_ts_feed ) (TYPE_2__*,struct dmx_ts_feed*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct dmx_ts_feed**,int ) ;
 int FUNC_2 (struct dmx_ts_feed*,int ,int,int,int ) ;
 int FUNC_3 (TYPE_2__*,struct dmx_ts_feed*) ;
 int FUNC_4 (struct dmx_ts_feed*) ;
 int FUNC_5 (TYPE_2__*,struct dmx_ts_feed*) ;

__attribute__((used)) static int FUNC_6(struct dmxdev *VAR_9,
     struct dmxdev_filter *VAR_10,
     struct dmxdev_feed *VAR_11)
{
 ktime_t VAR_12 = FUNC_0(0, 0);
 struct dmx_pes_filter_params *VAR_13 = &VAR_10->params.pes;
 enum dmx_output VAR_14;
 int VAR_15;
 int VAR_16;
 enum dmx_ts_pes VAR_17;
 struct dmx_ts_feed *VAR_18;

 VAR_11->ts = ((void*)0);
 VAR_14 = VAR_13->output;

 VAR_17 = VAR_13->pes_type;

 if (VAR_17 < VAR_3)
  VAR_16 = VAR_4;
 else
  VAR_16 = 0;

 if (VAR_14 == VAR_2)
  VAR_16 |= VAR_6;
 else if (VAR_14 == VAR_1)
  VAR_16 |= VAR_6 | VAR_5;
 else if (VAR_14 == VAR_0)
  VAR_16 |= VAR_6 | VAR_5 | VAR_7;

 VAR_15 = VAR_9->demux->allocate_ts_feed(VAR_9->demux, &VAR_11->ts,
           VAR_8);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_18 = VAR_11->ts;
 VAR_18->priv = VAR_10;

 VAR_15 = VAR_18->set(VAR_18, VAR_11->pid, VAR_16, VAR_17, VAR_12);
 if (VAR_15 < 0) {
  VAR_9->demux->release_ts_feed(VAR_9->demux, VAR_18);
  return VAR_15;
 }

 VAR_15 = VAR_18->start_filtering(VAR_18);
 if (VAR_15 < 0) {
  VAR_9->demux->release_ts_feed(VAR_9->demux, VAR_18);
  return VAR_15;
 }

 return 0;
}
