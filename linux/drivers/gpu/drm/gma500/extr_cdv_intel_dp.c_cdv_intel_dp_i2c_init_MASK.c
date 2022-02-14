
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct TYPE_8__ {int kdev; } ;
struct gma_connector {TYPE_3__ base; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_9__ {char* name; TYPE_2__ dev; TYPE_1__* algo_data; int class; int owner; } ;
struct TYPE_6__ {int running; int aux_ch; scalar_t__ address; } ;
struct cdv_intel_dp {TYPE_4__ adapter; TYPE_1__ algo; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gma_encoder*) ;
 int FUNC_2 (struct gma_encoder*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (struct gma_encoder*) ;
 int FUNC_5 (TYPE_4__*,char,int) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(struct gma_connector *VAR_3,
        struct gma_encoder *VAR_4, const char *VAR_5)
{
 struct cdv_intel_dp *VAR_6 = VAR_4->dev_priv;
 int VAR_7;

 FUNC_0("i2c_init %s\n", VAR_5);

 VAR_6->algo.running = 0;
 VAR_6->algo.address = 0;
 VAR_6->algo.aux_ch = VAR_2;

 FUNC_5(&VAR_6->adapter, '\0', sizeof (VAR_6->adapter));
 VAR_6->adapter.owner = VAR_1;
 VAR_6->adapter.class = VAR_0;
 FUNC_6 (VAR_6->adapter.name, VAR_5, sizeof(VAR_6->adapter.name) - 1);
 VAR_6->adapter.name[sizeof(VAR_6->adapter.name) - 1] = '\0';
 VAR_6->adapter.algo_data = &VAR_6->algo;
 VAR_6->adapter.dev.parent = VAR_3->base.kdev;

 if (FUNC_4(VAR_4))
  FUNC_2(VAR_4);
 VAR_7 = FUNC_3(&VAR_6->adapter);
 if (FUNC_4(VAR_4))
  FUNC_1(VAR_4);

 return VAR_7;
}
