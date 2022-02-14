
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int version; int product; int vendor; int bustype; } ;
struct input_dev {char const* name; TYPE_2__ dev; TYPE_1__ id; int uniq; int phys; int getkeycode; int setkeycode; int close; int open; int event; } ;
struct hid_input {char const* name; unsigned int application; int reports; int list; struct input_dev* input; } ;
struct hid_device {int quirks; int maxapplication; char const* name; int inputs; int dev; int version; int product; int vendor; int bus; int uniq; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,struct hid_device*) ;
 char const* FUNC_5 (int ,char*,char const*,char const*) ;
 int FUNC_6 (struct hid_input*) ;
 struct hid_input* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 size_t FUNC_10 (char const*) ;

__attribute__((used)) static struct hid_input *FUNC_11(struct hid_device *VAR_7,
        unsigned int VAR_8)
{
 struct hid_input *VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_0);
 struct input_dev *VAR_10 = FUNC_2();
 const char *VAR_11 = ((void*)0);
 size_t VAR_12, VAR_13;

 if (!VAR_9 || !VAR_10)
  goto fail;

 if ((VAR_7->quirks & VAR_1) &&
     VAR_7->maxapplication > 1) {
  switch (VAR_8) {
  case 133:
   VAR_11 = "Keyboard";
   break;
  case 132:
   VAR_11 = "Keypad";
   break;
  case 131:
   VAR_11 = "Mouse";
   break;
  case 136:
   VAR_11 = "Pen";
   break;
  case 134:
   VAR_11 = "Touchscreen";
   break;
  case 135:
   VAR_11 = "Touchpad";
   break;
  case 130:
   VAR_11 = "System Control";
   break;
  case 137:
   VAR_11 = "Consumer Control";
   break;
  case 128:
   VAR_11 = "Wireless Radio Control";
   break;
  case 129:
   VAR_11 = "System Multi Axis";
   break;
  default:
   break;
  }
 }

 if (VAR_11) {
  VAR_13 = FUNC_10(VAR_7->name);
  VAR_12 = FUNC_10(VAR_11);
  if ((VAR_13 < VAR_12) ||
      FUNC_9(VAR_7->name + VAR_13 - VAR_12, VAR_11)) {
   VAR_9->name = FUNC_5(VAR_0, "%s %s",
         VAR_7->name, VAR_11);
   if (!VAR_9->name)
    goto fail;
  }
 }

 FUNC_4(VAR_10, VAR_7);
 VAR_10->event = VAR_4;
 VAR_10->open = VAR_5;
 VAR_10->close = VAR_2;
 VAR_10->setkeycode = VAR_6;
 VAR_10->getkeycode = VAR_3;

 VAR_10->name = VAR_9->name ? VAR_9->name : VAR_7->name;
 VAR_10->phys = VAR_7->phys;
 VAR_10->uniq = VAR_7->uniq;
 VAR_10->id.bustype = VAR_7->bus;
 VAR_10->id.vendor = VAR_7->vendor;
 VAR_10->id.product = VAR_7->product;
 VAR_10->id.version = VAR_7->version;
 VAR_10->dev.parent = &VAR_7->dev;

 VAR_9->input = VAR_10;
 VAR_9->application = VAR_8;
 FUNC_8(&VAR_9->list, &VAR_7->inputs);

 FUNC_0(&VAR_9->reports);

 return VAR_9;

fail:
 FUNC_6(VAR_9);
 FUNC_3(VAR_10);
 FUNC_1(VAR_7, "Out of memory during hid input probe\n");
 return ((void*)0);
}
