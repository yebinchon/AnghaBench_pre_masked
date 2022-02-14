
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int clk_name; } ;
struct TYPE_3__ {int * hws; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int ,int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct device_node*,scalar_t__,char const**,scalar_t__*) ;
 int FUNC_8 (scalar_t__,char*,scalar_t__,char const**) ;

__attribute__((used)) static int FUNC_9(struct device_node *VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9 = 0, VAR_10 = 0;
 const char *VAR_11[VAR_2];

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  char VAR_12[VAR_1];


  if (FUNC_5(VAR_8, VAR_12))
   continue;




  VAR_7 = FUNC_6(VAR_8, &VAR_10);
  if (VAR_7 || VAR_10 != VAR_0)
   continue;


  if (FUNC_7(VAR_6, VAR_8, VAR_11,
        &VAR_9)) {
   FUNC_3(1, "No parents found for %s\n",
      VAR_3[VAR_8].clk_name);
   continue;
  }

  VAR_5->hws[VAR_8] =
   FUNC_8(VAR_8, VAR_12,
           VAR_9,
           VAR_11);
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (FUNC_0(VAR_5->hws[VAR_8])) {
   FUNC_4("Zynq Ultrascale+ MPSoC clk %s: register failed with %ld\n",
          VAR_3[VAR_8].clk_name, FUNC_1(VAR_5->hws[VAR_8]));
   FUNC_2(1);
  }
 }
 return 0;
}
