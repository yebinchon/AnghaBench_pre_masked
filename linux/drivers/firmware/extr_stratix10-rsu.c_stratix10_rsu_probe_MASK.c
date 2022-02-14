
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; scalar_t__ state; scalar_t__ error_details; scalar_t__ error_location; scalar_t__ fail_image; scalar_t__ current_image; } ;
struct TYPE_4__ {struct stratix10_rsu_priv* priv; int * receive_cb; struct device* dev; } ;
struct stratix10_rsu_priv {int chan; TYPE_1__ status; int completion; TYPE_2__ client; int lock; int retry_counter; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*,int) ;
 struct stratix10_rsu_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct stratix10_rsu_priv*) ;
 int VAR_7 ;
 int FUNC_8 (struct stratix10_rsu_priv*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct stratix10_rsu_priv *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->client.dev = VAR_10;
 VAR_11->client.receive_cb = ((void*)0);
 VAR_11->client.priv = VAR_11;
 VAR_11->status.current_image = 0;
 VAR_11->status.fail_image = 0;
 VAR_11->status.error_location = 0;
 VAR_11->status.error_details = 0;
 VAR_11->status.version = 0;
 VAR_11->status.state = 0;
 VAR_11->retry_counter = VAR_4;

 FUNC_6(&VAR_11->lock);
 VAR_11->chan = FUNC_10(&VAR_11->client,
         VAR_6);
 if (FUNC_1(VAR_11->chan)) {
  FUNC_3(VAR_10, "couldn't get service channel %s\n",
   VAR_6);
  return FUNC_2(VAR_11->chan);
 }

 FUNC_5(&VAR_11->completion);
 FUNC_7(VAR_9, VAR_11);


 VAR_12 = FUNC_8(VAR_11, VAR_1,
      0, VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_10, "Error, getting RSU status %i\n", VAR_12);
  FUNC_9(VAR_11->chan);
 }


 if (FUNC_0(VAR_5, VAR_11->status.version)) {
  VAR_12 = FUNC_8(VAR_11, VAR_0, 0,
       VAR_7);
  if (VAR_12) {
   FUNC_3(VAR_10,
    "Error, getting RSU retry %i\n", VAR_12);
   FUNC_9(VAR_11->chan);
  }
 }

 return VAR_12;
}
