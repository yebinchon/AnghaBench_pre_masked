
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct pcap_keys {int pcap; struct input_dev* input; } ;
struct TYPE_5__ {TYPE_3__* parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {char* phys; int keybit; int evbit; TYPE_2__ dev; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pcap_keys*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct pcap_keys*) ;
 struct pcap_keys* FUNC_8 (int,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct platform_device*,struct pcap_keys*) ;
 int FUNC_11 (int ,int ,int ,char*,struct pcap_keys*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 int VAR_10 = -VAR_1;
 struct pcap_keys *VAR_11;
 struct input_dev *VAR_12;

 VAR_11 = FUNC_8(sizeof(struct pcap_keys), VAR_3);
 if (!VAR_11)
  return VAR_10;

 VAR_11->pcap = FUNC_1(VAR_9->dev.parent);

 VAR_12 = FUNC_3();
 if (!VAR_12)
  goto fail;

 VAR_11->input = VAR_12;

 FUNC_10(VAR_9, VAR_11);
 VAR_12->name = VAR_9->name;
 VAR_12->phys = "pcap-keys/input0";
 VAR_12->id.bustype = VAR_0;
 VAR_12->dev.parent = &VAR_9->dev;

 FUNC_0(VAR_2, VAR_12->evbit);
 FUNC_0(VAR_5, VAR_12->keybit);
 FUNC_0(VAR_4, VAR_12->keybit);

 VAR_10 = FUNC_5(VAR_12);
 if (VAR_10)
  goto fail_allocate;

 VAR_10 = FUNC_11(FUNC_9(VAR_11->pcap, VAR_7),
   VAR_8, 0, "Power key", VAR_11);
 if (VAR_10)
  goto fail_register;

 VAR_10 = FUNC_11(FUNC_9(VAR_11->pcap, VAR_6),
   VAR_8, 0, "Headphone button", VAR_11);
 if (VAR_10)
  goto fail_pwrkey;

 return 0;

fail_pwrkey:
 FUNC_2(FUNC_9(VAR_11->pcap, VAR_7), VAR_11);
fail_register:
 FUNC_6(VAR_12);
 goto fail;
fail_allocate:
 FUNC_4(VAR_12);
fail:
 FUNC_7(VAR_11);
 return VAR_10;
}
